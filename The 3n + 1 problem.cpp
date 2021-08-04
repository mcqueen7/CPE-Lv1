#define The3n1problemOK
#ifdef The3n1problem
#include<iostream>
using namespace std;
int check(int n) {
	int count = 0;
	while (n!=1) {
		if (n % 2 == 1)
		{
			n = n * 3 + 1;
			count++;
		}
		else 
		{
			n = n / 2;
			count++;
		}
	}
	return(count);
}

int main() {
	int a, b;
	int nmax = 0;
	int x = 0;
	while (cin >> a >> b)
	{
		nmax = 0;
		cout << a << " " << b;
		if (a < b) {
			for (int i = a; i <= b; i++)
			{
				x = check(i);
				if (x > nmax)
				{
					nmax = x;
				}
			}
		}
		else {
			for (int i = b; i <= a; i++)
			{
				x = check(i);
				if (x > nmax)
				{
					nmax = x;
				}
			}
		}	
		cout << " " << nmax+1 << endl;
	}
	system("pause"); return(0);
}

#endif