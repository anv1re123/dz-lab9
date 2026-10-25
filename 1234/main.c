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