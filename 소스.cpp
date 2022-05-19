#include <iostream>
#define A 300
#define B 60
#define C 10
using namespace std;

int main()
{
	int t;
	cin >> t;

	int a = t / A;
	t %= A;
	int b = t / B;
	t %= B;
	int c = t / C;
	t %= C;
	if (t)
		cout << -1;
	else
		cout << a << ' ' << b << ' ' << c;
	return 0;
}