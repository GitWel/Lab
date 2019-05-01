#include "pch.h"
#include "compl.h"

void inp(complex &a, complex& b) {
	cout << "Введите действительную и мнимую часть первого числа" << endl;
	cin >> a.re >> a.im;
	cout << "Введите действительную и мнимую часть второго числа" << endl;
	cin >> b.re >> b.im;
}

void oper() {
	cout << "Выберете операцию:" << "\n" << "1-Сумма" << "\n" << "2-Умножение" << "\n" << "3-Разность" << "\n" << "4-Деление" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	compl a, b, res;
	int var;
	inp(a, b);
	oper();
	cin >> var;
	switch (var)
	{
	case 1:
		res = summ(a, b);
		break;
	case 2:
		res = multi(a, b);
		break;
	case 3:
		res = dif(a, b);
		break;
	case 4:
		res = div(a, b);
		break;
	}
	cout << "Результат: " << res.re << " + i*" << res.im << endl;
	return 0;
}