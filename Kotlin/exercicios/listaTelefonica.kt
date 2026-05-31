var lista = mutableListOf<Pair<String, String>>()

fun addCont(){
    print("Digite o nome do contato: ")
    var nome = readLine()!!
    print("Digite o numero de telefone: ")
    var num = readLine()!!
    lista.add(Pair(nome, num)) //Existe o arrayOF (mutavel) e o listOf (imutavel)
    println("\nContato adicionado com sucesso!\n")
}

fun exibirLista(){
    if(lista.isEmpty()){
        println("\nLista vazia.")
    }
    var c = 0
    println()
    for (q in lista){
        print("Contato ${c+1}: ")
        println("$q \n")
        c++
    }
}

fun excluirCont(){
    exibirLista()
    if (lista.isEmpty()){
        print("")
    }
    else{
        print("Digite a opção que você deseja expluir: ")
        var opcao = readLine()!!.toInt()
        lista.removeAt(opcao-1)
        exibirLista()
        println()
    }

}

fun pesquisarCont(){
    print("Digite o nome do contato: ")
    var op = readLine()!!
    if (lista.isEmpty()){
        println("\nLista vazia.\n")
    }
    else {

        for (q in lista){
            if (q.first == op){ //como os itens dessa lista sao pairs, entao para acessar o primeiro valor usamos first e para o segundo second
                println("\n$q\n")
            }
            else {
                println("\nContato não encontrado. Por favor, verifique se o nome está correto.\n")
            }
        }
    }
}

fun editarCont(){
    exibirLista()
    print("\nDigite qual dos contatos acima você deseja editar: ")
    var op = readLine()!!.toInt()
    op--

    println("\nContato selecionado: ${lista[op]}\n")
    print("\nO que você deseja alterar nesse contato? (1 - Nome / 2 - Numero): ")
    var op2 = readLine()!!.toInt()

    if (op2 == 1) {
        print("\nDigite o novo nome: ")
        var n = readLine()!!
        lista[op] = Pair(n, lista[op].second) //pair é imutavel, por isso to mudando colocando outro pair no lugar do antigo. dessa vez, com o novo nome n
        println("\nNome $n salvo com sucesso.\n")
    }
    else if(op2 == 2){
        print("\nDigite o novo numero: ")
        var num = readLine()!!
        lista[op] = Pair(lista[op].first, num)
        println("\nNumero $num com sucesso.\n")
    }
}

fun main(){
    var opt = 0
    while(opt!=6){
        println("=".repeat(60))
        print("""
            1 - Adicionar contato
            2 - Exibir lista de contatos
            3 - Pesquisar contato
            4 - Excluir contato
            5 - Editar contato
            6 - Sair
            Opção: """.trimIndent())
        opt = readLine()!!.toInt()
        //é como se fosse o switch. Ele também é capaz de retornar valores
        when(opt){
            1 -> addCont()
            2 -> exibirLista()
            3 -> pesquisarCont()
            4 -> excluirCont()
            5 -> editarCont()
            6 -> println("\nPrograma encerrado.")
        }
    }
}