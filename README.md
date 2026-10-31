# Домашнее задание к работе 9

## Условие задачи
Написать программу, выводящую на экран заданную геометрическую фигуру, нарисованную с помощью заданного с клавиатуры символа, условие заполнения фигуры и задаваемые параметры фигуры в таблице (остальные можно взять константные):

<img width="742" height="245" alt="image" src="https://github.com/user-attachments/assets/b10f5071-d4b3-44d6-8677-412939782523" />



## 1. Алгоритм и блок-схема

1. Начало.
2. Ввести символ для построения трапеции.
3. Ввести высоту.
4. Ввести верхнее основание.
5. Ввести угол в градусах.
6. Перевести угол из градусов в радианы: `real_ygol = ygol * M_PI / 180.0.`
7. Присвоить переменной y значение `0`.
8. Проверить условие `y < h`. Если условие ложно, перейти к `шагу 15`.
9. Вычислить количество символов в текущей строке: `chetchik = b + (y / tan(real_ygol))`.
10. Присвоить переменной `x` значение `0`.
11. Проверить условие `x < chetchik`. Если оно ложно, перейти к шагу 13.
12. Вывести `symbol`, увеличить `x` на `1` и вернуться к `шагу 11`.
13. Вывести символ перехода на новую строку.
14. Увеличить `y` на `1` и вернуться к шагу `8`.
15. Конец.

### Блок-схема

<img width="930" height="814" alt="{DA079309-A48C-4F9C-B04D-09EEDEBE18E0}" src="https://github.com/user-attachments/assets/00815aad-2027-49a4-88ba-4f7c25ff8d59" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22triangle-flowchart%22%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7Vxbk6I4FP41VE0%2FaEEQkMfWbme2amZ3dnt2LvsyFSFqtpG4gNM6v34TEhBCRERs7d22qzR3COc7J985Ca2Z4%2BXmbQRXiw%2FER4EGdH%2BjmXcaAMbAdugPK9mKEtcUJfMI%2B6JsV%2FCAfyJRqIvSNfZRXGqYEBIkeFUu9EgYIi8plcEoIk%2FlZjMSlK%2B6gnNUKXjwYFAt%2FYL9ZMFLh8DZlb9DeL7IrmzYLq9ZwqyxmEm8gD55KhSZ95o5jghJeGq5GaOAPb3sufB%2Bkz21%2BY1FKEyadIgTGCXVTmKcONlmU6bd6NOlmdHTAifoYQU9VvNEJUzLFskyoDmDJmG84o98hjeIXmU0w0EwJgGJaFnAHkrPh9HjGw2Yk%2FSjgXGevqHt4yQijyjrQatc2zGhzUYiYTKBSxww3HzCSwoBoP%2BKnuj3H2QJQ9FE4IXOnOfVF9fTD784T7OL83n%2FgMFazFu70zX3jn2PdI1OcOhkafo9Sr%2FvRScUJWhTeH7iib9FZImSaEubLAqgsAQCnnYAMgaiTIxiZnmhJz1T5KHA7zwfeidimhBSVksc9ID5%2Bf3326kBnO3g5zqeG7%2F3Bnxc5FdwX8UEWUeeaEXWCYqqUKGjPIgsiZIFmZMQBve70lFE1qHPwHHHZLRr856QlYDR3yhJtkKScJ2QMsh8NIPrIHkPpygYQe9xno6YCZqr7yjF9i1Td1rmBTCOsZcVT3CQjYVCP2sUkhDxElGvn4xfqYczMas9ngHXVIrR9iubUd%2FKst%2FyB0AzdxsxXZ7bipwwrjCaIwEDj7if%2F%2Fqy0Z%2B%2BOL9vzaH56a35Z8%2Bo6o1SASIUwAT%2FKINMhWbR9SPBFH65QgyMskIYjqQQ%2FEZFL0kn8ttoryaG%2FcL0BG1w8jUTLE1%2F2yGA5nYyZ5ltEQAKqOgHoNJIJztVJmWPTpXpPv3Il6gqBbUYJwL%2BJPNtOCW%2BA6cZxPQqPGuBLaEzlaW0vNMHFDJ7SgekmDZHbNnDlBrdiool9n0OXhTjn%2BJW2FNeMa1MZ26NNOuOluBwgSKcfEKblC8wqaTXB2O6kCa%2FUYqBE%2FpwxkEKKRL5KOJiKhVxBpYVScAD4zpYik4foe%2FjcN4OPM1gvxdhahDX0RArpSGgMelQQlB06VEd162hxDIam%2BWsCZnNYnSqxS0YyXoqGi3IcrqOD1PRGmOjXIevi3ky2WnAhks2qyBJm%2BiUKU5a0U33eLqZu1un2Ku4kURL61x7qb4EfwLYqSzjFR2%2F%2BBDsf9bM6Uuv0JuJu7qlTd6h4AdiJpYjIK2P01titQZYbdKKrD9Nzdmvt0CJt8CPDEVsfH2a4mmUypelJukaFr6JEAy%2Bb%2BckuMnujdbx2%2BMjtXNvrCreHAlvwCrhzXRrLM9p66Pbjrdhupy%2B8jakpDzqBz28JA0C4FQa5F6eBjV2b%2FeaFmYh9puWgukYVkyHPoNeuY%2FKLFZsjYqd5KaE386RpuQAaTHBoGw7jnclyx06YTAFc3F%2BBlNc627Z3wtc6zw%2BOgNj4QLRfPqGD65nPzf8V1Vzo1z9NmXmlC%2BGjD11t8i1IFUDtwNShUPvO34lVpchVkywFF4jo1O6pECSVUaSBcpIsuwOkCQCF6%2FR%2F5ro%2F62I8rPv4iJndyZpyWYYUphzIIc5W0naaMeBCztEz8yBd3H5aUC8R60YmD%2FdXl15YP4Qa29KyBV2sk2QyD6aX8kYPlukHr20zauDwM69v9zj%2B1aoUXt%2FRWWgAEOGbyHnEOiVHLJT0NeFN4vgjdWmdyA2W4%2FGrN7XHetCgUw0bAfIy0UbjrG0VwSuut2Z05HU3tbZ59uWRMdEsv4DILrUsly1UAWf6%2Bzb3EMJT67Tt8qDcLtxvo3uJqCKF3DFkrQVDAIUkHkElyzChSIqkzQsVq77uKs45EekY%2F8SxthHOXyoQyFEWs%2F%2B7o076965bsci3i6nJOAxDMh%2Fpq3ciYHCnbBBBpc80j7sO%2BWAmdWBS6GEjtMEOueIS1xpECzdbGEpse3CQg1GK1HbClFLWyq2FG0yu9jCU4q5Jcep2TUoL1i71WR3cquAiTKAGsXLC57WwHZLvlbfdZ0D%2FtaVUqA9TmULByKdbsFCH%2BNlOg3XRVUcRLlWFiAuRcGo8EC2TbN3RaXQgdtCA7HnsnfBBdJOpGNJp2al9o7h9h3zuC5S9M7Wj77EoHwJmuDzbEZKHdPoA8mN38MiKmPZ0lima8mE5Mwn71pu4Nah9czWRqmCeq0KnnZe5dkPxzUOzJ%2FJFLB9QGcgbeSdbAscyRYYbr2i2taR7SVDcKi9Zda2P2AFLElzgbxp0NQEVI7eyvtY5z562zZ8fTllb7Detgj8vigiUuUPhSDXWW3EEd62pGCWHL1prCKS255v2D2XioD9GnH9XvtL8OUyr70j520oeelGHubZF0js7kSc1c6cFqJgFzoRdwSfyk2s0dcNyeOzdPOAoVU6REe%2F5PCSTfTFXmcYvhqyM3Nya3zwvAx7B6PnI49EVOQk7AWYvRzHjsaIA4vpwPo014Je4ThXEsEwzuSnOEQTdnl4poFtNUwg2VZr2IFtrXsZ7lkioNSyDP0BDyDT7Cz9KPHm21PbstUO2sWO6eVnzzURJBWH9sJpvOLNjjzTlY8gGoxh7EEfQ1r1gYRErtZUJ7%2Fc1UnQ5tPZg%2B4D82l3RW0MtJHDZj%2BeaAzW4nS%2FwdK1N9KF9ql2ICRP3TQlH1lmxp3pHmhHa%2Bo2wa54G%2FV%2Fd%2BqpjaNdJTjdv8JcOCllmociUlXHUXelxam1C1oZydC7ckJpdvd%2FKXjz3b%2F3MO%2F%2FBQ%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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

	printf("Введите символ из которого будет построена трапеция:");
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
Введите символ из которого будет построена трапеция:*
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
