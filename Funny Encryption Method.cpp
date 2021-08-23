#define FunnyEncryptionMethodOK
#ifdef FunnyEncryptionMethod
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m;
	int rm;
	int j;
	int b1[20];
	int ans1, ans2;
	while (n--)
	{
		cin >> m;
		rm = m;
		ans1 = 0;
		ans2 = 0;
		j = 0;
		while (rm>0)
		{
			b1[j] =rm % 2;
			rm = rm / 2;
			j++;
		}
		for (int  i = 0; i < j; i++)
		{
			ans1 += b1[i];
		}
		rm = m;
		while (rm > 0)
		{
			if (rm%10==1|| rm % 10 == 2|| rm % 10 == 4|| rm % 10 == 8)
			{
				ans2 += 1;
			}
			else if (rm % 10 == 3 || rm % 10 == 5 || rm % 10 == 6|| rm % 10 == 9)
			{
				ans2 += 2;
			}
			else if (rm % 10 == 7)
			{
				ans2 += 3;
			}
			rm = rm / 10;
		}
		cout << ans1 << " " << ans2 << endl;
	}
	system("pause"); return(0);
}
#endif