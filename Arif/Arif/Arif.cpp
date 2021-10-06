#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите a: ";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "a-чётное" << endl;
	}
	else
	{
		cout << "a-нечётное" << endl;
	}
	int b, c, d, e;
	double arif;
	b = a % 10;
	c = a / 100;
	d = a % 100;
	e = d / 10;
	cout << c << endl;
	arif = (double)(b + c + e) / 3.;
	cout << "Среднее арифметическое трёхзначного числа равно =" << arif;
	return 0;

}
