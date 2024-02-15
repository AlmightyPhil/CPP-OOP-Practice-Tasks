Да се разработи малка система за фирма за коли под наем.
 За всяка кола се сихранява информацията за:
 марка, модел, вид, цвят, номер на шасито / VIN(16 до 19 символа), номер на колата и разход на гориво.
 (под вид се разбира седан, комби, хечбек, ...).
 
 Имаме два вида коли - фамилни и луксозни.
 Фамилните коли имат:
	такса за ползване - в лева на ден.
	изминатото рзстояниеот клиента.
 Луксозните коли имат:
	такса за ползване - в лева на ден.
	изминато разстояние от ллиента.
	такса "допълнителни екстри".
	
Да се реализират класове описващи колите.
Да се реализират функции(в подходящите класове) за определяне на цената,
която клиента тряхва да плати.
За фамилните коли цената се определя от произведението на: такса за 
ползване X  коефицент "изминато разстояние"
За луксозните коли тя се определя от произведнието на: такса за ползване Х коафицент "изминато разстояние" Х коафицент "екстри".
 За фамилните коли коафицент "изминато разстояние" се определя по следния начин: ако изминатото разстояние е по-малко от 500 километра коафицентае 0.7;
 ако изминатото разстояние е по-голямо или равно на 500 км, то коафицента е 0,4. За луксозните коли този коафицент се определя така: <200 км -> 0,6 коафицент;
 >=200км -> 0,4 коафицент. Коафицента лукс е три типа 100лв(шампанско), 50лв (вино) и 40лв (шоколад).
Да се напише примерно приложение за тест на разработените класове и техните функции, като трябва да се създадат няколко обекта от всеки тип и да се сихранят в подходящата структура.