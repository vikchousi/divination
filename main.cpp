#include <iostream>
#include <string>
#include "list.h"
using namespace std;


int main() {
	L Pack1, Pack2;
	int n, i, tmp, cnt = 0;
	cin >> n;
	for (i = 0; i < n / 2; i++) {
		cin >> tmp;
		Pack1 += tmp;
	}
	for (i = 0; i < n / 2; i++) {
		cin >> tmp;
		Pack2 += tmp;
	}
	for (;;) {
		cnt++;
		if (((Pack1.First() > Pack2.First()) && (Pack1.First() != n - 1) && (Pack2.First() != 0)) || ((Pack1.First() == 0) && (Pack2.First() == n - 1))) {
			Pack1 += Pack1.First();
			Pack1 += Pack2.First();
			--Pack1;
			--Pack2;
		}
		else {
			Pack2 += Pack1.First();
			Pack2 += Pack2.First();
			--Pack1;
			--Pack2;
		}
		if (Pack1.Size() == 0) {
			cout << "first " << cnt << endl;
			break;
		}
		else if (Pack2.Size() == 0) {
			cout << "second " << cnt << endl;
			break;
		}
		else if (cnt == 1000000) {
			cout << "Fatum" << endl;
			break;
		}
	}
	return 0;
}
