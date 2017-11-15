Требуется написать код, в котором будет функция умножающая 2 на X, где X - номер текущей итерации. Функция выдает ответ с задержкой в рандомном интервале от 0 до 1000 миллисекунд.

Код должен запускать эту функцию 10 раз в асинхронном режиме и выводить результат в стандартную консоль, таким образом, чтобы ответы шли последовательно.

Пример на абстрактном языке:

func calc(x , resolve, reject) {

	wait(rand(0, 1000))
	resolve(2 * x)
}

for (x = 0; x < 10; x++) {
	log calc(x)
}
Результат:

0 
2 
4 
6 
8 
10 
12 
14 
16 
18 
