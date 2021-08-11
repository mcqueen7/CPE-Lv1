#define WhatistheProbabilityOK
#ifdef WhatistheProbability
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	float p = 0.0;
	float np = 1.0;
	float ans=0.0;
	int t = 0;
	int m;
	int ni = 0;
	while (n--)
	{
		t = 0;
		ans = 0.0;
		cin >>m>> p >> ni;
		do
		{
			np = 1.0;
			
			for (int  i = 0; i < t; i++)
			{
				for (int  j = 0; j < m; j++)
				{
					np *= (1 - p);
				}
			}
			for (int  i = 1; i < ni; i++)
			{
				np *= (1 - p);
			}
			np *= p;
			ans += np;
			t++;
		} while (np>0.0000000001);


		cout<<fixed<<setprecision(4) << ans<<endl;
	}
	system("pause"); return(0);
}

#endif