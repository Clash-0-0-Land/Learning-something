fun main(){
    //Exemplo 1
    val num = arrayOf(1, 2, 3, 4, 5)
    println(num[0])

    //Exemplo 2: mudar trocar um elemento do array

    val nomes = arrayOf("zezinho","joaozinho", "pedrinho")
    nomes[0] = "lucas"
    println(nomes[0])

    //Exemplo 3: exibir a quantidade de elementos
    println(nomes.size)

    //Exemplo 4: verificar se há certo elemento no array

    if("lucas" in nomes)
        println("O nome está na lista.")
    else
        println("Nao ha esse nome na lista.")

    //Exemplo 5: Loop através de um array
    for (x in nomes) println(x)
}

