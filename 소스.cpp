#include <iostream>
#define A 300
#define B 60
#define C 10
using namespace std;

string dp(int n, int a, int b, int c)
{
	if (n >= A)
		return dp(n % A, n / A, b, c);
	if (n >= B)
		return dp(n % B, a, n / B, c);
	if (n >= C)
		return dp(n % C, a, b, n / C);
	if (n == 0)
	{
		string t = "";
		t.push_back(a);
		t.push_back(-1);
		t.push_back(b);
		t.push_back(-1);
		t.push_back(c);
		return t;
	}
	else
		return "-1";
}
int main()
{
	int t;
	cin >> t;
	string result = dp(t, 0, 0, 0);
	if (result == "-1")
		cout << result;
	else
	{
		for (int i = 0; i < result.length(); i++)
		{
			if (result[i] != -1)
				cout << (int)result[i];
			else
				cout << ' ';
		}
	}
	return 0;
}