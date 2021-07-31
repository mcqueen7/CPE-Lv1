#define SortSortAndSortOK
#ifdef SortSortAndSort
#include<iostream>
#include<string.h>
using namespace std;
int n, m;
int f = 1;
struct  Snum {
	int sn;
	int sm;
};
void check( Snum &a, Snum &b) {
	Snum tmp;
	if (a.sm>b.sm)
	{
		tmp = b;
		b = a;
		a = tmp;
		f = 1;
	}
	else if (a.sm == b.sm)
	{
		if (a.sn % 2 != 0 && b.sn % 2 != 0)
		{
			if (a.sn<b.sn)
			{
				tmp = b;
				b = a;
				a = tmp;
				f = 1;
			}
		}
		else if (a.sn % 2 == 0 && b.sn % 2 == 0)
		{
			if (a.sn > b.sn)
			{
				tmp = b;
				b = a;
				a = tmp;
				f = 1;
			}
		}
		else if (a.sn % 2 == 0 && b.sn % 2 != 0)
		{
			tmp = b;
			b = a;
			a = tmp;
			f = 1;
		}
		
	}

}
int main() {
	Snum t[10000];
	while (cin >> n >> m) {
		cout << n << " "<< m << endl;
		for (int i = 0; i < n; i++)cin >> t[i].sn;
		for (int i = 0; i < n; i++)t[i].sm = t[i].sn % m;
		while (f==1)
		{
			f = 0;
			for (int  i = 0; i < n-1; i++)
			{
				check(t[i],t[i+1]);
			}
		}

		for (int i = 0; i < n; i++)cout << t[i].sn << endl;
	}


	system("pause"); return(0);
}

#endif