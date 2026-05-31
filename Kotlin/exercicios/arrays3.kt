class gerenciarCompras(){
    var lista = arrayOf<String>()

    fun adicionarItem(item: String){
      lista = lista.plus(item)
    };
    fun excluirItem(item: String){
        lista= lista.filter{it != item}.toTypedArray() //Esse it é de "item". Ele cria um novo array, mas somente com os itens diferentes de item
    }
    fun exibirLista(){
        println("Lista de compras: ")
        for (q in lista){
            println(q)
        }
    }
}

fun main(){
    var listaDeCompras = gerenciarCompras()

    listaDeCompras.adicionarItem("Cebola")
    listaDeCompras.adicionarItem("Tomate")
    listaDeCompras.adicionarItem("Alho")

    listaDeCompras.exibirLista()
    listaDeCompras.excluirItem("Cebola")
    listaDeCompras.exibirLista()

}