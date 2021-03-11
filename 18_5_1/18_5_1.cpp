#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{

	double x, a, b;
	int n, i;
	setlocale(LC_ALL, "Russian");
	printf("************[ О ПРОГРАММЕ ]***********\n");
	printf("* Информация: Программа вычисляет    *\n");
	printf("* значения пяти функций.             *\n");
	printf("* Авторы: Шалагин Д. Басорин И.      *\n");
	printf("* Группа: КЭ-218                     *\n");
	printf("* Челябинск, ЮУрГУ, 2021             *\n");
	printf("**************************************\n\n\n");
	cout << "Укажите кол-во знаков которое необходимо вывести: ";
	cin >> n;
	cout << "Укажите точность: ";
	cin >> i;
	{   //часть 1
		double r = pow(22.5, -1 / 2) - 7.5 * pow(pow(2.87, -4 / 3), 2) * cos(1);
		double m = -log10(pow(1.6, pow(1.2, 1 / 3)) * exp(3));
		double s = 1;
		if (fabs(r) > fabs(m) + 1 / 2)
		{
			s = (4 * r + 3 * m) / (r * r + m * m);
		}
		else
		{
			s = fabs(r - m);
		}

		printf("\n\n---Часть 1---\n\n");
		printf("r = %*.*f", n, i, r);
		printf("  r = %*.*e\n", n, i, r);
		printf("m = %*.*f", n, i, m);
		printf("  m = %*.*e\n", n, i, m);
		printf("s = %*.*f", n, i, s);
		printf("  s = %*.*e\n\n", n, i, s);
	}



	{   //часть 2
		printf("---Часть 2---\n\n");
		cout << "Ведите х= ";
		cin >> x;
		cout << "Ведите а= ";
		cin >> a;
		cout << "Ведите b= ";
		cin >> b;
		if (x * x + b > 0 && fabs(x * x * x) <= 1 && fabs(x + a) <= 1)
		{
			double w = sqrt(x * x + b) - b * b * pow(sin(x + a), 3) / x;
			double y = pow(cos(x * x * x), 2) - x / sqrt(a * a + b * b);
			printf("\nw = %*.*f\n", n, i, w);
			printf("w = %*.*e\n", n, i, w);
			printf("y = %*.*f\n", n, i, y);
			printf("y = %*.*e\n", n, i, y);
		}
		else
		{
			cout << "Недопустимые значения переменных";
		}
	}
}