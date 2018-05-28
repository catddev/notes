#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int f2(int x, int y) {

	if (x == 0 && y == 0) {
		return 0;
	}
	else if (y == 0) {
		return 12 / x;
	}
	else if (x == 0) {
		return 12 / y;
	}
	else {
		return 144 / (x*y);
	}
}
int f3(int x, int y) {
	if (x > y) {
		return x - y;
	}
	else {
		return y - x;
	}
}
double f4(double x, double y) {
	if (x > y) {
		return x / y;
	}
	else {
		return y / x;
	}
}
double f5(double x, double y, double z) {

	double m, n1, k;

	if (x < y && x < z) {
		k = x, m = y, n1 = z;
	}
	else if (y < x && y < z) {
		k = y, m = x, n1 = z;
	}
	else if (z < x && z < y) {
		k = z, m = x, n1 = y;
	}
	return (m*n1 / k);
}


void main()
{
	setlocale(LC_ALL, "Rus");


	int n = 0;
	printf("Введите номер задачи:");
	scanf("%d", &n);


	if (n == 1) {
		/* 1. Дано натуральное (целое неотрицательное) число, а и целое положительное число d.
		Вычислить частное q и остаток r при делении, а на d. */

		int a, d, q, r;
		printf("a=");
		scanf("%d", &a);
		printf("d=");
		scanf("%d", &d);

		q = a / d;

		if (a >= d) {
			r = (a%d);
			printf("частное: %d \nостаток при делении: %d\n", q, r);
		}
		else if (a<d) {
			q = 0;
			float a1, d1, r1;
			a1 = a;
			d1 = d;
			r1 = a1 / d1;
			printf("частное: %d \nостаток при делении: %f\n", q, r1);
		}
	}
	else if (n == 2) {
		/* 2. Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12/x, если y равен 0, 12/y,
		если x равен 0, иначе 144/(x*y). */

		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", f2(x, y));

	}
	else if (n == 3) {
		/* 3. Напишите функцию int f(int x, int y), которая возвращает x-y, если x больше y, иначе возвращает y-x */

		printf("%d\n", f3(5, 3));
		printf("%d\n", f3(7, 12));
	}
	else if (n == 4) {
		/* 4. Напишите функцию double f(double x, double y), которая возвращает x/y, если x больше y, иначе возвращает y/x.
		Предполагается, что значения параметров больше нуля. */

		printf("%f\n", f4(3, 2));
		printf("%f\n", f4(2, 7));
	}
	else if (n == 5) {
		/* 5. Напишите функцию double f(double x, double y, double z), которая возвращает m*n/k,
		где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел. Предполагается, что значения параметров больше нуля */

		printf("%f\n", f5(7, 3, 5));
	}
	else if (n == 6) {
		/* 6. Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c. */
	}
	else if (n == 7) {
		/* 7. Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c. */
	}
	else if (n == 8) {
		/* 8. Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2+у2= z2, иначе возвращает false. */
	}
	else if (n == 9) {
		/* 9. Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, или наоборот,
		y делится нацело на x, иначе возвращает false. Предполагается, что значения параметров больше нуля. */
	}
	else if (n == 10) {
		/* 10. Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других.
		Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть сторонами треугольника,
		иначе возвращает false. Предполагается, что значения параметров больше нуля */
	}
	else {
		printf("нет заданий\n");
	}
}
