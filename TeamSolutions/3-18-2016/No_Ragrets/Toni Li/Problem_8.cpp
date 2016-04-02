#include<iostream>
#include<string>
using namespace std;
int combination(int n, int r)
{
	int ans = 1;
	for (int i = 0; i < r; i++)
	{
		ans *= n - i;
	}
	for (int i = 1; i <= r; i++)
	{
		ans /= i;
	}
	return ans;
}
int main()
{
	string input;
	while (cin >> input)
	{
		long long int ans = 0;
		for (long long int i = 0; i < input.size();i++)
		{
			for (long long j = 1; j <= long long int(input[input.size()-i-1]) - 96; j++)
			{
				ans += combination(26-j, i);
			}
		}
		cout << ans << endl;
	}

}