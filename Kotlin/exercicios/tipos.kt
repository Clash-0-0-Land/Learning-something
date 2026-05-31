import javax.swing.text.StyledEditorKit

fun main(){

    //tipos dentro do int(int ocupa 32 bits, usado em 99% das vezes)

    //Byte ocupa um espaço menor (8 bits)
    var num: Byte = 8


    //ocupa 16 bits
    var num2: Short = 2

    //ocupa 64 bits
    var num3: Long = 200000000000000


    println(num)
//-----------------------------------------------
    //No double, é 64 bits
    var price: Double = 3.14
    //dentro do double, há o float (32 bits)
    var desconto: Float = 10.0f

    println(desconto)


//------------------------------------------------
//
    //booleano
    val a: Boolean = true
    val b = false

//-------------------------------------------------
    //Padrão Camel Case (voceEscreverDessaManeira), é o convencional.
    //Não pode escrever_assim como uma variavel


    //Convertendo para outros tipos
    var c = 20
    var respostaC = c.toString()
    println(respostaC)

//---------------------------------------------------
    //textos e numeros

    var lala = 1 + 2
    var exem: Long = 100_100_100



    println(lala)
    //100_100_100 = 100100100
    println(exem)

//--------------------------------------------------

    //Em criptogradia, usa-se o tipo char, que armazena so o primeiro caractere (16 bits)
    val senha: Char = 's' //sempre aspas simples


}
