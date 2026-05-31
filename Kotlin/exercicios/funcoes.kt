import java.util.IntSummaryStatistics


fun main(){
    // functions - blocos de códigos reutilizáveis
    olaMundo()
    var resultado = soma()
    println(resultado)
    println(verificarMaioridade(age = 19)) //argumento nomeado
}

fun olaMundo(){
    println("Olá mundo!")
}

fun soma(): Int{
    return 2+3
    // caso eu nao especifique o tipo de dado a ser retornado,
    // aparece kotlin.Unit (Unit é o tipo padrao quando nao ha return)
}

fun oi() {

    fun subtracao(): Int {
        return 2 - 1
    }

    println(subtracao())
    //essa funcao subtracao nao funciona fora da funcao oi
}

//funcao com um unico corpo pode ser escrita assim (funcao inline)
fun slaoq() = println("Nao sei o que escrever aqui")

//funcao com parametro
//valor padrao do parametro age: 2 (nao é obrigatorio preencher quando for usar a funcao
fun verificarMaioridade(age: Int = 2): Boolean = if (age>=18) return true else return false

//Sobrecarga de função: s
//É quando é possivel criar duas funções como mesmo nome, mas so se, e somente se, tiverem parametros diferentes

