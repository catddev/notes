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
	printf("������� ����� ������:");
	scanf("%d", &n);


	if (n == 1) {
		/* 1. ���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d.
		��������� ������� q � ������� r ��� �������, � �� d. */

		int a, d, q, r;
		printf("a=");
		scanf("%d", &a);
		printf("d=");
		scanf("%d", &d);

		q = a / d;

		if (a >= d) {
			r = (a%d);
			printf("�������: %d \n������� ��� �������: %d\n", q, r);
		}
		else if (a<d) {
			q = 0;
			float a1, d1, r1;
			a1 = a;
			d1 = d;
			r1 = a1 / d1;
			printf("�������: %d \n������� ��� �������: %f\n", q, r1);
		}
	}
	else if (n == 2) {
		/* 2. �������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y,
		���� x ����� 0, ����� 144/(x*y). */

		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", f2(x, y));

	}
	else if (n == 3) {
		/* 3. �������� ������� int f(int x, int y), ������� ���������� x-y, ���� x ������ y, ����� ���������� y-x */

		printf("%d\n", f3(5, 3));
		printf("%d\n", f3(7, 12));
	}
	else if (n == 4) {
		/* 4. �������� ������� double f(double x, double y), ������� ���������� x/y, ���� x ������ y, ����� ���������� y/x.
		��������������, ��� �������� ���������� ������ ����. */

		printf("%f\n", f4(3, 2));
		printf("%f\n", f4(2, 7));
	}
	else if (n == 5) {
		/* 5. �������� ������� double f(double x, double y, double z), ������� ���������� m*n/k,
		��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ���� */

		printf("%f\n", f5(7, 3, 5));
	}
	else if (n == 6) {
		/* 6. �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. */
	}
	else if (n == 7) {
		/* 7. �������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c. */
	}
	else if (n == 8) {
		/* 8. �������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2+�2= z2, ����� ���������� false. */
	}
	else if (n == 9) {
		/* 9. �������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������,
		y ������� ������ �� x, ����� ���������� false. ��������������, ��� �������� ���������� ������ ����. */
	}
	else if (n == 10) {
		/* 10. ������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������.
		�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������,
		����� ���������� false. ��������������, ��� �������� ���������� ������ ���� */
	}
	else {
		printf("��� �������\n");
	}
}
