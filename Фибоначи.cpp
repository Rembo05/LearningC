#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, c = 1, b = 1, i = 2, now = 9;
	cin >> n;
	while (i <= n) {
		now = c + b;
		c = b;
		b = now;
		i++;
	}
	if (n < 1) {
		cout << 1;
	}
	else
		cout << now;
	return 0;
}
