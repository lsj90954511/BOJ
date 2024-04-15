#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, max = 1;
	int arr[1001] = { 0 }, dp[1001] = { 0, 1 };

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (arr[j] > arr[i] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}

		if (max < dp[i])
			max = dp[i];
	}

	cout << max;

	return 0;
}