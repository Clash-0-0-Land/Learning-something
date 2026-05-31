fun main(){

    var a: Int = 1
    //while normal
    while (a<10){
        println(a)
        a++
    }
    a = 1
    //faça... enquanto(condição). Basicamente o while no final
    do{
        println(a)
        if (a==2) {
            a++
            continue //ignora o valor de 2, ou seja, não é impresso
        }
        if(a==3) break //saida de um loop
        a++
    }while(a<10)

    //for com array
    val nome = arrayOf("Paulo", "Zezinho", "julio")
    for(x in nome){

        println(x)
    }
    //Também é possivel imprimir o alfabeto usando os intervalos
    for (chars in 'a'..'z'){
        println(chars)
    }

    for (i in 1..10){

        println(i) //imprimi o 10 também
    }



}