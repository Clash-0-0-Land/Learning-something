package com.example.calculadoraapp

import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import net.objecthunter.exp4j.ExpressionBuilder

fun calcularResultado(expressao: String): String{
    var expressaoCorrigida = expressao.replace("×", "*").replace("÷", "/").replace(",", ".")
    var resultado = ExpressionBuilder(expressaoCorrigida).build().evaluate().toString()
    var verificarDouble = resultado.toDouble()
    if (verificarDouble % 1.0 == 0.0){
        val resultadoFinal = verificarDouble.toInt()
        return resultadoFinal.toString()
    }
    else{
        return resultado
    }

}

fun isInt(num: String): Boolean{
    var n = num.toDoubleOrNull() ?: return false
    return n % 1.0 == 0.0

}

fun casasDec(num: String): String{
    var numFor = num.replace(".", "").replace(",", ".")
    var resFinal = ""

    5555.5
    5.555.5

    if (isInt(numFor)) resFinal = "%,d".format(numFor.toLong()).replace(",", ".")
    else resFinal = "%,d".format(numFor.toDouble()).replace(",", ".")

    println(resFinal)
    return resFinal
}


class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets

        }

        //linha 1
        val botaoAC = findViewById<Button>(R.id.acButton)
        val botaoDeletar = findViewById<Button>(R.id.deleteButton)

        //linha 5
        val botaoRes = findViewById<Button>(R.id.buttonRes)

        //Exibção dos resultados
        var areaRes = findViewById<TextView>(R.id.areaRes)

        //funçao dos botoes
        botaoRes.setOnClickListener{
            areaRes.text = calcularResultado(areaRes.text.toString()).replace(".",",")
        }

        botaoAC.setOnClickListener{
            areaRes.text = "0"
        }

        botaoDeletar.setOnClickListener{
            if (areaRes.text.toString().length == 1){
                areaRes.text = "0"
            }
            else {
                areaRes.text = areaRes.text.toString().dropLast(1)// remove o ultimo caractere. Se fosse 2, removeria os 2 ultimos caracteres.
                areaRes.text = casasDec(areaRes.text.toString()).split( "+", "-", "÷", "×").toMutableList().last()
            }
        }

        val botoesNum = listOf(findViewById<Button>(R.id.button0), findViewById<Button>(R.id.button1), findViewById<Button>(R.id.button2),findViewById<Button>(R.id.button3), findViewById<Button>(R.id.button4),
            findViewById<Button>(R.id.button5), findViewById<Button>(R.id.button6), findViewById<Button>(R.id.button7), findViewById<Button>(R.id.button8), findViewById<Button>(R.id.button9), findViewById<Button>(R.id.buttonAd),
            findViewById<Button>(R.id.buttonVirg), findViewById<Button>(R.id.buttonSub), findViewById<Button>(R.id.porcButton), findViewById<Button>(R.id.divisaoButton), findViewById<Button>(R.id.multipButton))

        for (q in botoesNum) {

            q.setOnClickListener {
                val sinais = listOf<String>("+", "-", "÷", "×", "%")
                var visorRes = areaRes.text.toString()
                var numsExp = visorRes.split( "+", "-", "÷", "×").toMutableList()
                var numAtual = numsExp.last()


                if (visorRes == "0" && q.text.toString() == "0") {
                    areaRes.text = areaRes.text.toString() + ""
                }

                else if(visorRes == "0" && q.text.toString() == ","){
                    areaRes.text = areaRes.text.toString() + ","
                }

                else if(visorRes.length == 1 && visorRes == "0" && q.text.toString() in sinais == false) {
                    areaRes.text = q.text.toString()
                }

                else if(q.text.toString() in sinais){

                    if (visorRes.last().toString() in sinais && visorRes.last().toString() != "%"){
                        areaRes.text = areaRes.text.toString() + ""

                    }
                    else if(visorRes.last().toString() == "%" && q.text.toString() == "%"){
                        areaRes.text = areaRes.text.toString() + ""
                    }
                    else {
                        areaRes.text = areaRes.text.toString() + q.text.toString()
                    }
                }

                else {
                    if(numAtual.count{it == ','} == 1 && q.text.toString() == ","){
                        areaRes.text = areaRes.text.toString() + ""
                    }

                    else {
                        areaRes.text = areaRes.text.toString() + q.text.toString()
                    }

                    visorRes = areaRes.text.toString()
                    numsExp = visorRes.split( "+", "-", "÷", "×").toMutableList()
                    numAtual = numsExp.last()
                    var numTratado = numAtual.filter { it.isDigit() }

                    if (numTratado.isNotEmpty()){
                        areaRes.text = visorRes.replace(numAtual, casasDec(numTratado))

                    }

                }


            }


        }


    }

}