#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, std=1, cnt=1;
	
	cin >> n;

	if (n == 1)
		cout << "1";
	else if (n >= 2 && n <= 7)
		cout << "2";
	else {
		while (n > std) {
			std = std + 6*cnt;
			cnt++;
		}
		
		cout << cnt;
	}
	
	return 0;
}
