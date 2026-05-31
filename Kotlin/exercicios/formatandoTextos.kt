//formatação de texto
fun main(){

    //1

    val message = "Olá Italo.\nSeu produto acabou"

    //2 (aspas triplas)

    val welcome = """
        olá italo, seu produto chegou.
    """.trimIndent() //aparar as indentações, ou seja, o olá ficará bem do lado esquerdo, sem tab
    println(welcome)

    val csv = """
        Texto1.
        Texto2.
    """.replaceIndent(";") //substitui a indentação por ;
    println(csv)

    //3

    val name = "Italo"
    val age = 18

    println("Olá " + name + ", sua idade é " + age)

    println("Olá $name, sua idade é $age. Seu desconto é de ${age+10} reais.")
}