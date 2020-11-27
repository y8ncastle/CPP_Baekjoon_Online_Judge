#include <iostream>
#include <math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int num[2], a[3], b[3], sum, res=0;

	for (int i=0; i<2; i++)
		cin >> num[i];

	for (int i=2; i>=0; i--) {
		a[i] = num[0] % 10;
		num[0] /= 10;
	}

	for (int i=2; i>=0; i--) {
		b[i] = num[1] % 10;
		num[1] /= 10;
	}

	for (int i=2; i>=0; i--) {
		sum = 0;

		for (int j=2; j>=0; j--)
			sum += a[j] * b[i] * pow(10,2-j);
		
		cout << sum << '\n';
		res += sum * pow(10,2-i);
	}

	cout << res;

	return 0;
}
