#define BanglaNumbersOK
#ifdef BanglaNumbers
#include<iostream>
#include<iomanip>
using namespace std;
void check(int ni, long long n) {
	long long na;
	cout << setw(4) << ni << ". ";
	na = n / 10000000;
	if (na >= 10000000) {
		cout << na / 10000000 << " kuti ";
		na = na % 10000000;
	}
	if (na >= 100000) {
		cout << na / 100000 << " lakh ";
		na = na % 100000;
	}
	if (na >= 1000) {
		cout << na / 1000 << " hajar ";
		na = na % 1000;
	}
	if (na >= 100) {
		cout << na / 100 << " shata ";
		na = na % 100;
	}
	if (na < 100 && na != 0) {
		cout << na << " kuti";
	}
	else if (na == 0 && n >= 10000000)cout << "kuti";
	na = n % 10000000;
	if (na >= 100000) {
		cout << " " << na / 100000 << " lakh ";
		na = na % 100000;
	}
	if (na >= 1000) {
		cout << na / 1000 << " hajar ";
		na = na % 1000;
	}
	if (na >= 100) {
		cout << na / 100 << " shata ";
		na = na % 100;
	}
	if (na < 100 && na != 0) {
		cout << na << endl;
	}
	else cout << endl;

}


int main() {
	long long n;
	int ni = 1;
	while (cin >> n) {
		if (n == 0) {
			cout << setw(4) << ni << ". ";
			cout << "0" << endl;
		}
		else check(ni, n);
		ni++;
	}
	system("pause"); return(0);
}

#endif