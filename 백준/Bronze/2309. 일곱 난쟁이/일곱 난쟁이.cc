#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			int hap = 0;
			for (int k = 0; k < 9; k++)
			{
				if (k != i && k != j)
				{
					hap += arr[k];
				}
			}
			if (hap == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
					{
						cout << arr[k] << '\n';
					}
				}
				return 0;
			}
		}
	}

	return 0;
}