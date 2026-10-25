# Домашнее задание к работе 9

## Условие задачи
Написать программу, выводящую на экран заданную геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа, условие заполнения фигуры и задаваемые параметры фигуры в таблице (остальные можно взять константные):

<img width="742" height="245" alt="image" src="https://github.com/user-attachments/assets/b10f5071-d4b3-44d6-8677-412939782523" />



## 1. Алгоритм и блок-схема

1. Начало.
2. Ввести символ для построения трапеции.
3. Ввести высоту `h`.
4. Ввести верхнее основание `b`.
5. Ввести угол `ygol`.
6. Перевести угол из градусов в радианы - `real_ygol`.
7. Присвоить переменной `y` значение `0`.
8. Проверить условие `y < h`. Если условие ложно, перейти к `шагу 14`.
9. Вычислить количество символов в текущей строке: `k=b+y/tan(real_ygol)`.
10. Присвоить переменной `x` значение `0`.
11. Проверить условие `x < k`. Если оно истинно, вывести символ, увеличить `x` на `1` и повторить `шаг 11`.
12. Увеличить `y` на `1` и вернуться к `шагу 8`.
13. Конец.

### Блок-схема

<img width="1067" height="813" alt="{5D7D1F1E-3B40-4063-ADB0-3077DCCF98B9}" src="https://github.com/user-attachments/assets/ebfae176-9f1a-44fe-8557-a56f8d756ea4" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=algoritm_trapeciya.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22trapezoid-flowchart%22%20name%3D%22%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC%22%3E7Vtbk5s2FP41zGQfdgckro%2BxdzfNtJlm6oc0TxkZZJsuRi7grN1fXwlJIAFrezEmbrN%2BMNbtcHT0nSvYgNP17kOGNqtPJMKJAcxoZ8B7AwAIPJdeWM%2Be91hWYPGeZRZHoq%2FumMX%2FYNFpit5tHOFcm1gQkhTxRu8MSZrisND6UJaRZ33agiT6XTdoiVsdsxAl7d4vcVSsJHemWQ%2F8guPlSt7alSNrJGeLjnyFIvKsdMEHA04zQgr%2Ba72b4oSJTwqGr3t8YbTiLMNpccqCvEBZ0V4k6OTFXu45I9s0wmyVZcDJ8you8GyDQjb6TI%2BZ9q2KdSKGF3GSTElCMtpOmBxuI5Q9vTMAjBzsR7YBpgZjDC7Kzw1dkhcZecJyER3ywRy6Lh3hrHxHyVawYgA3KdiSDUo1Jt2%2Ft0xuk5BTeU8Hlbtny%2Fk7k99ZXm74tWvkpryzpEh%2FLcvrvWkE9%2Bx7Yhp0q74nf9PvcnTyINmjQucciqV8Gzgr8E4RsjiWD5iscZHt6ZSVghxHwORZgZkv%2BgQV23R4W2qTJ8aRQPmyIl3jgP4QUOiGRZxutifBguJ3w37SWShJcEKWGVrT3W5wFtO74qw59rkeGANFbujj%2BeLKUJTv13OS8Dkrfpnzy37J%2Bi%2BKH%2BA5Gn6g493pCKpWnYOgDEUxSvPXmRZzHFBE7tx1rs20ZBgl3%2Fj5m%2FyWaM32ns7zDZ92mLMFSYvbBVrHyZ7zV1EQE6YoD9mh0KFPJCXN4fIeZkklLz0uoxFsOIvmHIVPy%2FKgbhURFBk9Ynm4HXs6COcj%2B%2Bl3R2MKjInHdj99NJilNBligVlazYOMDKFurtNSNwh0cw2hrmwQDqBsNNCJvu1P0rUVWc%2B3%2BTh6Nvcd2zGvTM%2F2qmqIk2dWmPL5OCQWgg7XHTRdt6lhwQbOEFjYpq%2BM6H5msxuucBGu4idpdZknpksm5alI61Gg9F1ln2%2BGRInXYTFcHSWWDhJnCIOB0%2Bgt6H9V0P9eBPfsmycATpkAuCOH%2B14DDvYQwRoWR4%2BjVuLbhgfZZqGM%2FuvsUUENozITTZIVK7IkKUoe6t6JbnrqOb8RshFo%2BgsXxV6k%2FmhbEB1rFL%2FvWSJPm%2FOEhE%2B86zFO5ATOFGVviYtWSqPBqutMMpygIv6uy%2BIsAYN%2BAlaYvnoBaxH%2FDxAx7Cdije0rEzLexcWfjD7N0HjrqzJyvxO3Lht72Uip4JRFrPlVHauXlS25rn2galQ53HmKpZ9JzMKUKhTygkYWCq2GYeOHJtapJa2jpFpxFd9li1QJsWpPp6HO6Yc6VbZXBrouIFQhpYoD5hZtUf8aR8fjWfBh9%2BXX7Pd%2FZh%2BXn5Hz8Y%2BZe9vTdymbUg%2Bglk6YoDyPQ116uvj76GeHZ%2BraFThR77rCh065KzHFoZChW6csv6lTbjMMPVU926S8Jqnh1POQaAdKlMsK6Mc0jyPcPxDuOOwfFu7u9Oy4SpCGTY%2BrMrUa67p6adIym6VJ1x0g2u0ERc%2Fo4RDArsyuV8ZKMVW14bp0MNEpKG8opyIAY95ZnnughlJSo1JCe2XChtmZ%2FGXbB%2FWEy7OdBtg4wResXQvCnt3TcDb48JvPeS5sNd2fRkGs61EQWTxuaohagXhNQF7riW25JwcBcgpZLHJ8JPiGvo7SvmECdHS18f2LxfCHTNNbCfV4wCAfZ162DtaIDW4d0DCsLagNFhsE%2F1EssId5I2OBnQUV%2BMRS4MDZOAMOsAMOEiKCCvB17xiAS4HB6plvHkJW%2FwT0BfdjHXE%2FfVxd22W9qkB0TqIqdd68801v6PjODnQ7EsDXBHhAx51l9c6L7WOULuzxLDAgsL1zgf1DK5%2Fd8oEjIP30kgzw76Bj1h8AdRQ3KfZMMwJ%2FZBTCN2d7eqUGUkiP4GytKtaSlhi4d6BhNi%2Fnce0BDZPE19mWaYgs8ZibPtEyjVErrl0wg8PALrh6MabbBR%2Bfb2lvOR9x2Y3Fltm3IgPMJqWxjWXQTzOu%2BOnTWepF0WlSa6H6%2FjvoHw2GWUt5L%2FkF1avembnMM7BuiPmN%2BNLr%2B1TUbbw34o1cPpT7ePPrx%2F264UzTIV263eHSG%2BUU4I1XTgFDJhrVH2n%2BR5lGMII%2FP90EVe8jSmAEPU1Qk1AwWIJLm%2FVfpvj0%2Bq9n8OFf%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

Программа написана на языке **C++**.

```cpp
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI            3.14159265358979323846
main() {

	setlocale(LC_ALL, "RUS");

	char symbol;
	int h;
	int b;
	double ygol;

	printf("Введите символ из которого будет построенна трапеция:");
	scanf("%c", &symbol);

	printf("Введите высоту:");
	scanf("%d", &h);

	printf("Введите верхнее основание b:");
	scanf("%d", &b);

	printf("Введите угол:");
	scanf("%lf", &ygol);

	double real_ygol = ygol * M_PI / 180.0;

	printf("\n\nПрямоугольная трапеция:\n\n");

	for (int y = 0; y < h; y++) {

		int chetchik = b + (y / tan(real_ygol));
		
		for (int x = 0; x < chetchik; x++) {
			
			printf("%c", symbol);
		}
		printf("\n");
	}
	return 0;
}
```
## 3. Результаты работы программы
```text
Введите символ из которого будет построенна трапеция:*
Введите высоту:5
Введите верхнее основание b:3
Введите угол:45

Прямоугольная трапеция:

***
****
*****
******
*******
```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
