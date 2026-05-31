fun fatorial(a: Int): Int{
    var resultado = 1
    for (q in a downTo 1 step 1){
        resultado = resultado * q }
    //esse downTo vai pegar o valor de "a" e vai diminuindo-o de um em um (por padrão), podendo eu especificar atraves de step de quanto em quanto vai diminuir
    return resultado
}

fun main(){
    println("Digite um numero: ")
    var num = readLine()!!.toInt() //o read lê o que vai ser digitado e armazena em num. !! assegura que o valor da variavel
    //nao sera nulo, recebendo-o e o transformando em String
    println("O fatorial de ${num} é ${fatorial(num)}.")
}


