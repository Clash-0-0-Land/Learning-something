//exemplo de classe

// vale frisar que no kotlin usa-se propriedades ao inves de atributos (nomenclatura diferente)

//Classe 1
class Carro {

    var marca: String = ""
    var modelo: String = ""
    var ano: Int = 0

    fun ligar(){
        println("CARRO LIGADO.\n")
    }
    fun desligar(){
        println("kotlin.Carro desligado.")
    }

}
/*
class kotlin.Pessoa{
    val nome: String = ""
    val idade: Int = 0
    fun cumprimenar(){
        println("Olá, tudo bem?")
    }
}*/

//Classe 2
class Pessoa(var nome: String, var idade: Int) { //a classe tem duas propriedade mutaveis
    init {//é executado sempre que um objeto é criado
        println("Nova pessoa criada: $nome, com $idade anos.")
    }

    constructor(nome: String) : this(nome, 0) { //o construtor secundario recebe apenas o nome como paramento
        println("kotlin.Pessoa criada com idade padrão: $nome") //ai ele chama o construtor principal init e fornece 0 para o parametro idade da class
    }

    fun cumprimenar() {
        println("Olá, tudo bem?")
    }
}

//Classe 3
class ContaBancaria(var saldo: Double){

    fun depositar(valor: Double){
        saldo += valor
        println("Valor depositado: $valor reais. Saldo atual: $saldo reais.")
    }

    fun sacar(valor: Double){
        if (valor<=saldo){
            saldo-=valor
            println("Valor sacado: $valor reais. Saldo atual: $saldo reias.")
        }
        else {
            println("Saldo insuficiente.")
        }


    }
}

//Classe 4
class Animal(var nome: String, var tipo: String){

    fun fazerSom(){
        when(tipo){
            "Cachorro" -> println("Au au au au")
            "Gato" -> println("Miau miau")
            else -> println("Animal desconhecido")
        }
    }


}

//Classe 5
class Livro(var titulo: String, var autor: String, var ano: Int){
    fun exibirDetalhes(){
        println("Titulo: $titulo, Autor: $autor, ano: $ano")
    }
}

//Classe 6
class Produto(var nome: String, var preco: Double){
    fun aplicarDesc(percentual: Double){
        preco-= preco*(percentual/100)
        println("Foram aplicados $percentual% de desconto. O preço final é $preco reais.")
    }
}

//Classe 7
class Aluno(var nome: String, var notas: List<Double>){
    fun calcularMedia(): Double {
        return notas.average()
    }

}

//Classe 8
class Car(var marca: String, var modelo: String, var ano: Int){
    fun exibirDetalhes(){
        println("Marca: $marca, Modelo: $modelo, ano: $ano")
    }
}

//Classe 9
class Funcionario(var nome: String, var salario: Double){

    fun aumentarSalario(percentual: Double){
        salario+=salario*(percentual/100)
        println("Novo salario após aumento de $percentual: $salario")
    }

}
//Classe 10
class Restaurante(var nome: String, var pratos: List<String>){
    fun exibirCardapio(){

        println("Cardapio do resturante $nome: \n")
        for (q in pratos){
            println(q)
        }
    }
}

class Filme(var titulo: String, var diretor: String, var duracao: Int){
    fun exibirDetalhes(){
        println("Título: $titulo, Diretor: $diretor, Duração: $duracao minutos.")
    }
}


fun main(){/*
    //Objeto da classe 1
    val meuCarro = kotlin.Carro()
    meuCarro.marca = "Fiat"
    meuCarro.modelo = "Palio"
    meuCarro.ano = 2008
    meuCarro.ligar()
    meuCarro.desligar()*/

    //Objetos da classe 2
    /*
    val pessoa1 = kotlin.kotlin.Pessoa("Zezin", 20)
    val pessoa2 = kotlin.Pessoa("Julin")
    pessoa1.cumprimenar()*/

    //Objeto da classe 3
    /*val conta1 = ContaBancaria(2500.0)
    conta1.depositar(100.00)
    conta1.sacar(200.00)
    */

    //Objeto da classe 4
   /* val animal1 = Animal("Zeus", "Cachorro")
    animal1.fazerSom()*/

    //Objeto da classe 5
    /*val livro1 = Livro("A Paciente Silenciosa", "Alex Michaelides", 2019)
    livro1.exibirDetalhes()*/

    //Objeto da classe 6
    /*val produto1 = Produto("Esponja", 2.00)
    produto1.aplicarDesc(20.0)*/

    //Objeto da classe 7
    /*val aluno1 = Aluno("Pedrinho", listOf(1.2, 2.1, 4.5, 8.0))
    println("Média do aluno ${aluno1.nome}: ${aluno1.calcularMedia()}")*/

    //Objeto da classe 8
    /*val car1 = Car("Chevrolet", "Onix", 2023)
    car1.exibirDetalhes()*/

    //Objeto de classe 9
    /*val funcionario1 = Funcionario("Zezinho", 2500.0)
    funcionario1.aumentarSalario(10.0)*/

    //Objeto da classe 10
    /*val restaurante1 = Restaurante("Prato Fácil", listOf("Macarrão com almôndegas", "Estrogonofe", "Churrasco"))
    restaurante1.exibirCardapio()*/

    //Objeto da Classe 11
    val filme1 = Filme("Vingadores", "Joss Whedon", 143)
    filme1.exibirDetalhes()

}