#define TellmethefrequenciesOK
#ifdef Tellmethefrequencies
#include<iostream>
#include<string>
using namespace std;
struct aaa
{
	int ascii;
	int n;
};
int main() {
	string tex;
	int count = 1;
	while (getline(cin, tex))
	{
		if (count!=1)cout << endl;
		aaa a[95];
		aaa tmp;
		int f;
		for (int i = 32; i <= 126; i++)
		{
			a[i-32].ascii = i;
		}
		for (int  i = 0; i <95; i++)
		{
			a[i].n = 0;
		}
		for (int  i = 0; i < tex.length(); i++)
		{
			for (int  j = 0; j < 95; j++)
			{
				if (a[j].ascii==tex[i])
				{
					a[j].n++; break;

				}
			}
		}
		f = 1;
		while (f==1)
		{
			f = 0;
			for (int  i = 0; i < 94; i++)
			{
				if (a[i].n>a[i+1].n)
				{
					tmp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = tmp;
					f = 1;
				}
				else if (a[i].n == a[i + 1].n && a[i].ascii < a[i+1].ascii) {
					tmp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = tmp;
					f = 1;
				}
			}
		}
		for (int  i = 0; i < 95; i++)
		{
			if (a[i].n!=0)
			{
				cout << a[i].ascii << " " << a[i].n << endl;
			}
		}
		count--;
	}

	system("pause"); return(0);
}
#endif