fun main(){
    //variavel mutavel
    var preco = 23 // tipo inferido (a linguagem deduz)
    var nome ="italo"
    var preco2 = 29.9



    //Variavel imutavel
    val produto = "Iphone"

    println(preco::class)
    println(preco2::class)
    println(produto::class)
//-----------------------------
    //especificando o tipo da variavel (não-obrigatorio)


    var pais: String = "canada"
    println(pais)
    // tipo (tipos primitivos: int, string, double)
//---------------------------------

    //Diferença do print para o println

    // println: pula linha no final
    // print: não pula linha no final do texto, fazendo com que o proximo print fique na mesma linha

//---------------------------------

    //Entrada no kotlin
    print("Digite um numero: ")
    var a = readln().toInt()
    println("o numero digitado foi: $a")


}