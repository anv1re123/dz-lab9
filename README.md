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

<img width="1115" height="845" alt="{A5A0D0D2-DDB8-4A19-8301-C01150A8844B}" src="https://github.com/user-attachments/assets/263ab5c1-cd5a-44bc-8700-0912cfd42ff4" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22trapezoid-flowchart%22%20name%3D%22%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC%22%3E7Vtbk5s2FP41zGQfdgeQuT3G3t0002aaqR%2FSPGVkkDFdjFyQs3Z%2FfSUkgQSs7cWYuM36waDb4ejoO1djA8zWuw853Kw%2B4Qilhm1GOwPcG7ZtA9ukF9az5z1uYPGOOE8i3qV0zJN%2FkOgU6%2BJtEqFCm0gwTkmy0TtDnGUoJFofzHP8rE9b4lR%2F6gbGqNUxD2Ha7v2SRGQluTPNeuAXlMQr%2BWhXjqyhnC06ihWM8LPSBR4MMMsxJvxuvZuhlElPCoave3xhtOIsRxk5ZUFBYE7aiwSdguzlnnO8zSLEVlkGmD6vEoLmGxiy0Wd6yrRvRdapGF4maTrDKc5pO2VyuI1g%2FvTOsEHkID%2BaGPbMYIyBZfm5oUsKkuMnJBfRId9eANelI5yV7zDdClYM200JW7KBmcak%2B%2FeWyW0acirv6aDy9DxevDP5k%2BXlhl%2B7Rm7KJ0uK9C4ur%2FemEdyz76lp0K36nryn3%2BXo9EGyR4XOORRL%2BTZQTtBOEbI4lg8IrxHJ93TKSkGOI2DyrMDMF32CysR0eFsok%2BWJcShQHlekaxzQGwGFblgk2WZ7Eiwofjfsls6CaYpSHOdwTXe7QXlCn4ry5tjnemAMFLmhjxbLK0NRsV8vcMrnrPhlwS%2F7mPVfFD%2B252j4AY53pyOoWnUOgnIYJTArXmdazHFAEbkL17k205IjmH7j52%2FyR8I123u2KDZ82mHOljgjt0u4TtI956%2BiICbMYBGyQ6FDn3CGm8PlM8ySSlF6XEYj2HAWzQUMn%2BLyoG4VEZCcHrE83I49HYTzkf30e6Ixs42px3Y%2FezSYpTQZYm2ztJoHGRlC3VynpW5VsCPVDejKBsAAykYDnejb%2FiRdW%2BH1YluMo2cL35k45pXp2V5VDXHyzApTPh%2BHxELQ4bqDpus2NSxMbGcILGyzV0Z0P7PZDVeIhKvkSVpd5onpkml5KtJ6EJi9q%2BzzzZAo8ToshqujxNJB4gxhMFAWvQX9rwr634vgnn3zBMApEwB35HDfa8BhMkSwhsTRo6iV%2BLbhgbd5KKP%2FOntUUMOozEUT52SFY5zB9KHuneqmp57zG8Ybgaa%2FECF7kfrDLcE61ih%2B37NEnjYXKQ6feNdjksoJnCnKXoxIK6XRYNV1JjlKIUm%2B67I4S8B2PwErTF%2B9gLWI%2FweIGPQTscb2lQkZ7RLyJ6NPMzTe%2BqqM3O%2FEo8vGXjYyKjhlEWt%2BVcfqZWVLrmsfqBpVDneeYulnnLAwpQqFvKCRhQKrYdj4oYl1aknrKKlWXMV32SJVQqza02moc%2FqhTpXtlYGuCwhVSKnigLnFiah%2FjaPjyTz4sPvya%2F77P%2FOP8WfofPxj7t729F3KptQDqKUTprAoklCXni7%2BPvrZ4Zm6dmWfqHdd4UOn3JWY4lDI0K1Tlt%2FUKbcZhp6qnm1SXpPUcOp5SLQDJcplBfRjViQR6h8Idxz2Dwt3d3p2XCVIw6bHVZlajXVdvTRpmc3SpOsOEO12gqJn9HAIYFdm1ytjpZiq2nBdOpjoFJQ3lFMRgDHvLM89UEMpqVEpwb0yYcPsTPGy7QN6wuVNnAbYOMEXrF0Lwt6kp%2BFs8OE3f%2Be5sNV0fxoFsa5HQWTxuKkhagXiNQF5rScTyz05CJBT8HJZoCPBN%2FB1lPYNE4Cjq43vXyyGP2Sa3kqoxwMG%2BXPmZetgjdjg1rEbhrUFtcFig%2BA%2FigX2Y97IWGBnQQU%2BtRQ4cDbOgAPogIOEiHypyNe9Y2BfCgxWz3zzELL6J6AvuB%2FriPvp4%2BraLutVBaJzElWp8%2Badb3pDx3eTQLcjAXhNgGfruLOs3nnx5BilC3s8yx4Q2N65wP6hlc9u%2BYARkH56Scb274Bj1h8b6ChuUuyZZgT%2ByCgEb8729EoNoJAewdlaVawlLbHt3tkNs3k5jzsZ0DBJfJ1tmYbIEo%2B56RMt0xi14toFMzgM7IKrF2O6XfDx%2BZb2lvMRl91YbJl9KzK22aQ0trEM%2BmnGFf%2F6dJZ6UXSa1Fqovv8O%2BEeDYdZS3kt%2BQfWqd2aGKsac7uv9RpTp9f1t1G28PeKNXESU%2B3jz7se9u%2BHMsiEd%2B6TDsTeKKrY3XlHFHjLdqP5O8z%2FKN4IRvPrpJqh6K1ECI%2BhpgpqEgsHSXNqs%2FzjFp9f%2FPwMP%2FwI%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
