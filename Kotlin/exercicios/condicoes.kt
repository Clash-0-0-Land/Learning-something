fun main(){

    var idade  = 1

    if (idade <20 && idade >=18){
        println("voce tem entre 18 e 20.")
    }

    else if(idade>20){
        println("Voce tem mais de 20 anos")

    }
    else{
        println("Voce tem menos de 18 anos")
    }
//========================================================================================

    var saldo = 0
    //o if funciona mesmo sem as chaves, porém se for colocar um else em seguida
    //não é reconhecido
    if (saldo == 10)
        println("Voce tem 10 reais.")
        println("Voce é pobre.")


    /*else
        println("Voce nao tem 10 reais.")
    */


    // quando é so um comando

    val preco = 2

    if (preco <= 2) println("Barato demais!")
    else println("Não tá barato!")

    //====================================================

    //OBSERVAÇÕES:
    // o "ou" é "||"
    // o "e" é "&&"

//=====================================================================================


    //Comparação de strings (parecida com Python)

    var carro1 = "hb20"
    var carro2 = "BYD"

    println(carro1 == carro2) // retorna false
    //ou
    println(carro1.equals(carro2)) //mesma coisa de cima. Retorna false

    println(carro1 != carro2) //retorna true
    println(carro2 == "BYD") //retorna true

//==================================================================================

    //string nao aceita null
    var rua: String = "Zé da Goiaba"
    //rua = null // não é possivel

    //aceita null (nullable)
    var bairro: String? = "Capitao Cueca"
    var quantCaracteres = bairro?.length

    // so é possivel verificar a quantidade de caracteres se não for null
    if (bairro != null){
        println(quantCaracteres)
    }
    //Isso é a mesma coisa que
    // var bairro: String? = "Zezinho"
    // var quantCaracteres = bairro?.length
    // println(quantCaracteres), onde o print vai imprimir null caso seja null, substituindo o if

    // OU

    //var quantCaracteres = if (bairro != null) bairro.length else 0
    //println(quantCaracteres)

    //operador elvis (?:)
    //quantCaracteres = bairro?.length ?: 0 //ao inves de retorna null, retorna 0




}
