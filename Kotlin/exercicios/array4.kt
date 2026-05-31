fun main() {
    val nomes = arrayOf("Julia", "Raimundo", "Lorenzo")

    //filtra apenas os nomes que começa com a letra "R"
    var nomesComA = nomes.filter { it.startsWith("R") }.toTypedArray()

    //mapeia os itens e os transforma em algo (map), que no caso é em letras maiusculas. O map retorna uma nova lista
    var nomesLetMaius = nomes.map { it.uppercase() }.toTypedArray()

    //Os ordena em ordem alfabética
    var nomesOrg = nomes.sorted().toTypedArray()

    //Imprindo as listas

    println("Nomes que começam com a letra R: ")
    nomesComA.forEach { println(it) }

    println("Nomes em letra maiúscula")
    nomesLetMaius.forEach { println(it) } //o forEach so executa uma ação em cada elemento. Não retorna nada

    println("Nomes em ordem alfabética")
    nomesOrg.forEach{ println(it) }

    //array com nomes acima de 5 caracteres
    var maisCincoCarac = nomes.filter{it.length > 5}.toTypedArray()
    println("Nomes com o numero de caracteres acima de 5: ")
    maisCincoCarac.forEach{println(it)}

    var num = arrayOf(2, 3, 9)
    var media = num.average().toDouble() //retorna a media do array
    println(media)
}