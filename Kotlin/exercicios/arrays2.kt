import kotlin.system.exitProcess

class GerenciadorTarefas(){
    private var tarefas =  arrayOf<String>() //Declara um array vazio para armazenar as taredas do usuario

    fun adicionar(tarefa: String){
        tarefas = tarefas.plus(tarefa) //adiciona uma nova tarefa ao array usando o plus
    }
    fun excluirTarefa(tarefa: String){
        tarefas = tarefas.filter{it != tarefa}.toTypedArray() //Remove a tarefa especificada no array utilzando o filter
        //percorre toda a variavel e converte numa string
    }

    fun exibirTarefas(){

        if (tarefas.isEmpty()){
            println("Sem tarefas.")
        } else {

            println("Tarefas encontradas: ")
            for (q in tarefas) {
                println(q)
            }
        }
    }
}

fun main() {

    val gerenciador = GerenciadorTarefas()

    gerenciador.adicionar("estudar")
    gerenciador.adicionar("limpar a casa")
    gerenciador.adicionar("fazer compras")

    gerenciador.exibirTarefas()
    gerenciador.excluirTarefa("limpar a casa")
    gerenciador.exibirTarefas()


}