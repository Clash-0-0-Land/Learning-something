fun casasDec(num: String): String{
    var contPontos = 0
    var numero = num.filter{it.isDigit()}
    var simb = num.filter { !it.isDigit() }
    var novoNumero = StringBuilder(numero)
    var posAnterior = 0
    var quantAlg = 0
    var ajuste = 0
    var maxPontos = novoNumero.length/3
    var resFinal = ""
    novoNumero.forEachIndexed { index, it ->
        var posAjustada = novoNumero.length - 1 - index
        quantAlg++
        if(quantAlg%3 == 0 && posAjustada!=posAnterior && contPontos < maxPontos && posAjustada-ajuste != 0){
            novoNumero.insert(posAjustada-ajuste, ".")
            posAnterior = posAjustada
            contPontos++
            ajuste++
        }
    }
    resFinal = novoNumero.toString()
    return resFinal
}



fun main() {

    println(casasDec("1000"))


}