#define GCDOK
#ifdef GCD
#include<iostream>
using namespace std;
int gcd(int i, int j) {
	int a;
	int b=0;
	if (i>j)a = j;
	else a = i;
	for (int  k = 1; k <= a; k++)
	{
		if (i%k==0&&j%k==0)
		{
			b = k;
		}
	}
	return(b);
}
int main() {
	int n;
	int g;
	while (cin>>n)
	{
		if (n == 0)break;
		g= 0;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++)
			{
				g += gcd(i, j);
			}
		}
		
		
		cout << g << endl;


	}
	system("pause"); return(0);
}
#endif