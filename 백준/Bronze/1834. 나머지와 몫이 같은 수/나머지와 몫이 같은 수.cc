#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, result = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		result += i * n + i;
	}

	cout << result;

	return 0;
}