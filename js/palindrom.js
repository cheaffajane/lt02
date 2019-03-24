function isthatpldrm(string, bgn, fnl) {
    if (bgn < stop_word) {                  //проверяем, что количество сравнений меньше длины изначальной фразы
        } else if (string.substr(bgn) = string.substr(fnl)) {   //сравниваем два крайних символа фразы
            bgn = bgn + 1;                                      //меняем счетчик первого символа
            fnl = fnl - 1;                                      //меняем счетчик последнего символа
            isthatpldrm(string, bgn, fnl);                      //отдаем в рекурсию
        }
        else {
            return true;
    }
}
let string = "madamimadam";             //изначальная фраза
const stop_word = string.length;            //выход из рекурсии, когда вся фраза пройдена
if (isthatpldrm(string, 0, string.length) = true) {        //передаем фразу, счетчик с нуля, длину фразы
    console.log("It's a palindrom");        //если верно
} else {
    console.log("It's NOT a palindrom");    //если неверно
}