#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, m = 100000, M = -100000, c;
	cin >> n;
	while (n != 0) {
		c = n % 10;
		n /= 10;
		m = min(c, m);
		M = max(c, M);
	}
	cout << m << ' ' << M;
	return 0;
}

