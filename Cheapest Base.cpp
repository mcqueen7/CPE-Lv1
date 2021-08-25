#define CheapestBaseOK
#ifdef CheapestBase
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cost[36];
	int total[37]; 
	int ni;
	int a;
	int ar;
	int min;
	int count = 1;
	while (n--)
	{
		cout << "Case " << count << ":" << endl;
	
		for (int  i = 0; i < 36; i++)
		{
			cin >> cost[i];
		}
		cin >> ni;
		while (ni--)
		{
			cin >> a;
			for (int i = 0; i <= 36; i++)
			{
				total[i] = 0;
			}
			for (int  i = 2; i <= 36; i++)
			{
				ar = a;
				while (ar>0)
				{
					total[i] += cost[(ar % i)];
					ar /= i;
				}
			}
			min = total[2];
			for (int  i = 2; i <=36 ; i++)
			{
				if (total[i]<=min)
				{
					min = total[i];
				}
			}
			cout << "Cheapest base(s) for number " << a << ": ";
			for (int  i = 2; i <=36; i++)
			{
				if (total[i]==min)
				{
					cout << " " << i;
				}
			}
			cout << endl;
		}
		count++;
		if (n == 0)break;
		else cout << endl;
	}
	system("pause"); return(0);
}
#endif