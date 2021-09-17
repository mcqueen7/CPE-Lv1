#define DieGameOK
#ifdef DieGame
#include<iostream>
using namespace std;
int main() {
	int b;
	char a[6];
	int t;
	int e,s,w,n;
	
	while (cin>>b)
	{
		t = 1;
		e = 4;
		s = 5;
		w = 3;
		n = 2;
		if (b==0)
		{
			break;
		}
		for (int  i = 0; i < b; i++)
		{
			cin >> a;
			if (a[0] == 'e')
			{
				e = t;
				t = w;
				w = 7 - e;
			}
			else if (a[0] == 's')
			{
				s = t;
				t = n;
				n = 7 - s;
			}
			else if (a[0] == 'w')
			{
				w = t;
				t = e;
				e = 7 - w;
			}
			else if (a[0] == 'n')
			{
				n = t;
				t = s;
				s = 7 - n;
			}
		}
		cout << t << endl;
	}
	

	system("pause"); return(0);
}
#endif