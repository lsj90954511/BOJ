#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	
	if (b >= c) {
		cout << "-1";
		return 0;
	}
	
	cout << a / (c - b) + 1;

	return 0;
}