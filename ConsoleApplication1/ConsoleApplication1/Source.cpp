#include <iostream>
using namespace std;
int main() {
	int now, i1 = 1, i2 = 1, temp1, temp2 = 0, imax1 = 1, imax2 = 1, imax = 1;
	cin >> now;
	temp1 = now;
	cin >> now;
	if (temp1 == now && now != 0) { i1 = i1 + 1; imax1 = i1; }
	else { temp2 = now; }
	while (now != 0) {
		cin >> now;
		if (temp1 == now) {
			i1 = i1 + 1;
			if (i1 > imax1) { imax1 = i1; }
		}
		else if (temp2 == now && now != 0) {
			i2 = i2 + 1; i1 = 1;
			if (i2 > imax2) { imax2 = i2; }
		}
		else if (now != temp1 && now != temp2 || now == 0) {
			temp1 = 0; temp2 = 0; i2 = 1; i1 = 1;
			if (imax1 >= imax2) {
				temp2 = now;
				if (imax1 > imax) { imax = imax1; }
			}
			else {
				temp1 = now; if (imax2 > imax) { imax = imax2; }
			}
		}
	}

	cout << imax;
	return 0;
}