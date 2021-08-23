#define FibonaccimalBaseOK
#ifdef FibonaccimalBase
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a;
	int ar;
	int f[45];
	int ff[45];
	f[0] = 1;
	f[1] = 2;
	int p = 0;
	for (int  i = 2; i < 45; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	while (n--)
	{
		cin >> a;
		ar = a;
		for (int i = 0; i < 45; i++)
		{
			ff[i] = 0;
		}
		for (int  i = 44; i >= 0; i--)
		{
			if (f[i] <= a)
			{
				p = i;
				break;
			}
		}
		while (a>0)
		{
			for (int  i = p; i >=0 ; i--)
			{
				if (f[i]<=a&&ff[i]!=1)
				{
					a = a - f[i];
					ff[i] = 1;
					break;
				}
			}
		}
		cout << ar<<" = ";
		for (int  i = p; i >=0; i--)
		{
			cout << ff[i];
		}
		cout <<" (fib)"<<endl;
	}
	system("pause"); return(0);
}
#endif