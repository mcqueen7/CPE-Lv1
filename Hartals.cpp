#define HartalsOK
#ifdef Hartals
#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int d;
	int pi;
	int h[101];
	bool ans[3561];
	int n;
	while (t--)
	{
		n = 0;
		cin >> d;
		cin >> pi;
		for (int  i = 0; i <= d; i++)
		{
			ans[i] = 0;
		}
		for (int  i = 0; i < pi; i++)
		{
			cin >> h[i];
		}
		for (int  i = 0; i <pi ; i++)
		{
			for (int j = 1; j <=d ; j++)
			{
				if (j % 7 != 6 && j % 7 != 0 && j % h[i] == 0)
				{
					ans[j] = 1;
				}
				
			}
		}
		for (int i = 0; i <= d; i++)
		{
			n+= ans[i];
		}
		cout << n << endl;
	}
	
	system("pause"); return(0);
}
#endif