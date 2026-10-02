#include <iostream>
int a, b, c;
using namespace std;
int main() {
	cin >> a;
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "a=" << a << "b=" << b;
	return 0;
}
