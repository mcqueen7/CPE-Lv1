#define YoucansayOK
#ifdef Youcansay 
#include<iostream>
#include<string.h>
using namespace std;
int check(char n[]) {
	int o = 0;
	int e = 0;
	int i = 0;
	while (n[i]>=48&&n[i]<=57)
	{
		o = o + n[i]-48;
		i += 2;
	}
	i = 1;
	while (n[i] >= 48 && n[i] <= 57)
	{
		e = e + n[i]-48;
		i += 2;
	}
	if (abs(o - e) % 11 == 0)return(1);
	else return(0);
}
int main() {
	char n[1000] ;
	int f = 0;
	while (cin >> n)
	{
		if (n[0]==48)
		{
			break;
		}
		f = check(n);
		if (f==1)cout<<n<<" is a multiple of 11." << endl;
		else cout << n << " is not a multiple of 11." << endl;
		memset(n, '\0', 1000);
	}
	system("pause"); return(0);
}

#endif