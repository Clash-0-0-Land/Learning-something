package com.example.imccalculator

import android.os.Bundle
import android.view.View
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {
    // private lateinit var a = "oi" isso siginifica que a variavel nao é iniciada logo que a classe é iniciada. Nao pode cirar text ou button antes do onCreate, entao usa-se isso para dizer que depois será iniciado
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
    }

    fun calcularImc(view: View){ //esse view: View é basicamente para que essa função seja reconhecida pelo onClick do botao
        val textResultado = findViewById<TextView>(R.id.textResultado) //R.id é o local onde fica os IDs // textView é o tipo do componente
        val editPeso= findViewById<EditText>(R.id.editPeso)
        val editAltura = findViewById<EditText>(R.id.editAltura)

        val peso = editPeso.getText().toString()
        val altura = editAltura.getText().toString()

        val pesoConvertido: Double = peso.toDouble()
        val alturaConvertida: Double = altura.toDouble()

        val resultadoImc = pesoConvertido/(alturaConvertida*alturaConvertida)

        textResultado.setText("O seu IMC é: %.2f".format(resultadoImc))


    }
}