fun isInt(num: Double): Boolean{

    return num == num.toLong().toDouble()

}

fun asasDec(num: String): String {
    var numFor = num.replace(".", "").replace(",", ".").toDoubleOrNull() ?: return ""
    var resFinal = ""

    if (isInt(numFor)) resFinal = "%,d".format(numFor.toLong()).replace(",", ".")
    else resFinal = "%,.2f".format(numFor).replace(",", ".")

    return resFinal

}

fun main(){
    println(asasDec("5555,5"))

}