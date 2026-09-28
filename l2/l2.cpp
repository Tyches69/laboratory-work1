#include <iostream>
int a, m, c, h, s;
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	c = 0;
	while (c == 0) {
		cout << "Введите количество секунд:";
		cin >> a;
		if (a >= 0) {
			s = a % 60;
			a = a - s;
			m = (a % 3600)/60;
			a = a - m;
			h = a / 3600;
			cout << "Часов:" << h << " минут:" << m << " секунд:" << s;
			cout << "\nЕсли хотите повторить нажмите 0\n";
			cin >> c;
			}
		else{
			cout << "Введено отрицательное количество секунд\nЕсли хотите повторить нажмите 0\n";
			cin >> c;
		}

	}
	return 0;
}