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

<img width="811" height="811" alt="{4E677722-129F-4789-9D19-87CF22380911}" src="https://github.com/user-attachments/assets/48d4d321-8f4f-4f4d-ba9f-2693412ce3df" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22triangle-flowchart%22%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7Vxbk6I4FP41VE0%2FaEEQkMf2NrNVM7sz27Nz2ZepCFGzjcQFnNb59ZuQgBBQAbHV3rarNHcg%2Bc7Jd84JrejD5eZtAFeLD8RFngJUd6PoIwUAzdZ0%2BsNKtrwEaJbKS%2BYBdkWrXcED%2FoVEYdJsjV0U5hpGhHgRXuULHeL7yIlyZTAIyFO%2B2Yx4%2Bauu4BwVCh4c6BVLv2I3WvDSPrB25e8Qni%2BSK2umzWuWMGksniRcQJc8ZYr0saIPA0Iinlpuhshjs5fMC%2B832VOb3liA%2FKhKhzCCQVTsJMYJo23yyLQbnV2aGTwtcIQeVtBhNU90hWnZIlp6NKfRJAxXfMpneIPoVQYz7HlD4pGAlnlsUjouDB7fKECfxB8FDNP0HW0fRgF5ROU91PjDe%2FA06zEjfjSBS%2BwxPH3GSwoNoP6Onuj3n2QJfdFE4IjOCM%2FXuQSfj5%2FQW4v5UEaqYo%2FY90BV6IP3rSRNvwfx91h0QkGENpl5FSvxFpElioItbbLIgMUQyHjaAUvriTIxip7khfx0dJGHAtfzdOjd0tOEWP1yJIAO0L%2B8%2F3E%2F1YC17f1ah3PtU6fHx0VuQR6KWCHrwBGtyDpCQRFCdJQHkSVBtCBz4kNvvCsdBGTtuww0I7ZGuzbvCVkJeP2DomgrVhKuI5IHn4tmcO1F7%2BEUeQPoPM7jEZOF5mI9iDF%2Fz9QALXM8GIbYSYon2EvGQr6bNPKJj3iJqFdfCq7pKgbbb%2ByJukaS%2FZ5OAM2MNuJxeW4rckLpwmCOBAwcYn%2F5%2B%2BtGffpqfdrqff3zW%2F2vjlaUm1IBCJAHI%2FwzD7IyNIuuHwmm8EsFoqflBSLdT5Ih%2BI2KXpJMpLfRXEw088bkBG1w9C1ZWJr%2BvkMAze3WnGW2WQCUQEU9ApVKMnljwjSOP%2FJNFYWCaowTAX%2BS%2BtasHA%2BC0wRiahGeB4EtoTNeS2nbpxPkM31KB6SY1gds28OUMt2LiiV2XQ5eFOJf4lbYLK%2BYVMZPbgwUY0RLsL9AAY4%2Bo03MI9iqxNcHQ7qRRn9Q6oEjOjlDL4YUCVwU8GXKFXFmlhRJwAPDQ7AUnT5C18X%2BvBl4qsG%2BRRpixDQEVCYdpRAUXTpUxlWjL7GMymo5aUJmsxCdqnEzSvIwRQ0WZDldh8cp6gFlY030q1M2FaHA1lQBJlyyp%2FWiuIlKGeSkEQ2169PQ1Dw7RY%2BFlVY6t%2F81X%2B1r3FqqCj4w4zUOV3T87OSY%2F66Z8RhfoTMTd3VPm7xD3k%2FEVDJHRlwfxrfEajWw2sQVSX%2BamrNfZ4EiZ4EfGbrY%2BOo0xtkgXneWmsR7nv8mQND7sZ0T7y65N1rHb4%2BP1MwcMoo4tCQcAiOHQ90%2BoKlO20%2FtZjwP0%2B33leehRsJVJFXlS9O%2FJNEC4FSiZV8H0RJqDAxThSWSFyZgz8SmhOJiA%2B1Xqhml2S8oTXUGnXyfsg2hoGXLeFyqRPnt1FSiR%2BidDnp5rVnf6M53aIXrZRTl%2Bbledve%2FZ38vaPd3%2BOgMpJkLBPPpGz64mvzc8d%2BymrtSPrDJc8yUHjCe2d6234B%2B9uwW6Cf2nR%2F4lYJeFwVlC05hN9BaJZYlCDPyCDNAHmGG2QLChEvoNd7SwNFxL%2BIq7Du7WZqtIUDSMZrkWO7JjuVGCNCaWRGZWN0zWxG7SMjUI86jkg2FvBj91tTuqWqglOjPJm45szZPkzF8ttgIurVw4VFgp%2FZzajN%2Fz9SU289ZYaAAQ5prIOtaQV9qm6UBzyK0w3LF3BPB79qIVruqZVzIsYz6zeB6OW9OHT1849AruBb0kfAB7GUH9UHYXIma54swozpOxlf8nUgxs8otY%2Fyd%2FcRCX8KTbXWN%2FCBc5ZzvzEIVUIULuGJJ2gp6HvLIPIBL5kpEAV2T2P%2BYr%2Fu4qzhmuMRj%2F%2BaH2EUpfKgFI5b0MK0cayNjbN0ErSzgKdwup8TjThbIf6aN7Jdeif1iggRGaXCk37Xynj6jBRumFFJWFUidw3FyY967OG4Wx9J4BI35QrRGEDBLICBFx0zJTaa3EaUtXf6GdOpAOCe%2Fwe12n92hvQxW8sCqFDDImHw9084ZfV3bto4Yfje12zWxZOLHzWj0OuauVXEfLXPIlO6tGYhLbjq6eCCJn%2B3dgSl04DbTQATD9m7QQAoqW4Z0kFpqb2l219LrdZHci6Za%2BxK9%2FCVogj9nNRJr6VoXSP6EPayjMJYpjaXbhkxgznzosmEs%2FhBaz6xtSkVQPSiCL%2FOo0tlUAQtsWj0pMnmyLrAkXaDZhwXVNGq2lxTBsfaGfrD9ES1gSJIL5KhGVRVQOHUtB%2BDOfeq6qR%2F9csJeYb9t4IG%2BKSJS5A8Zf9pZdUQN61wSMEP29lQWEcnMTyOKzyUiYL9EXL%2BVf8s2XmLlt2TU9SWrXkvdRfscku0dejSaqdmMN%2B1Chx5r8KxU9WpdVZMsQUPVjyjgUkOp9nsvt6y6L%2FaGS%2F9VwV2IwxvDoweA2GnRjoscElAoEL%2FjYRbbYWd9xMnTeGB1mkpHJ3NuLQqgHybrWnIqyG%2FzNFAFnavpQNK5Rr8FnXvovcln8aRSjdN3e9wRTbOz%2BNMMhyUk7mLnFNPXERThbBWnFv1puOLNah5eS0cQDYYwdKCLIa36QHwiVytlR9zs1UmQ54%2BzB%2FVHnqfZFZUhUAYWe%2FrhRGFwFy98aCx98EbakMqyCIdk8eu6ZGvLDLs1mQTNaNCh4NsVh2%2F%2Fd8e4mhjsRULU%2FlvwmaNfun7Ms1U0QFVb2rQam7KFkTS1LWOWZnf%2F8oQ33%2F3nGH38Hw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
