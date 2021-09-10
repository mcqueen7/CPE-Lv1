#define AmidsummernightsdreamOK
#ifdef Amidsummernightsdream
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	int a[100000];
	int ans1, ans2,ans3;
	while (cin >>n)
	{	
		ans1 = ans2 = ans3 = 0;
		for (int  i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		if (n%2==1)
		{
			ans1 = a[n / 2];
			for (int  i = 0; i < n; i++)
			{
				if (a[i] == ans1)ans2++;
			}
			ans3 = 1;
		}
		else
		{
			ans1 = a[n / 2-1];
			for (int i = 0; i < n; i++)
			{
				if (a[i]>=a[n / 2 - 1]&&a[i]<=a[n/2])ans2++;
			}
			ans3 = a[n/2]-a[n/2-1]+1;
		}
		cout << ans1 << " " << ans2 << " " << ans3 << endl;
	}
	system("pause"); return(0);
}
#endif