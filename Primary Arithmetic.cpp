#define PrimaryArithmeticOK
#ifdef PrimaryArithmetic
#include<iostream>
using namespace std;
int main() {
	int a, b,s;
	int c = 0;
	int ta, tb, ts;
	while (cin>>a>>b)
	{
		if (a==0&&b==0)
		{
			break;
		}
		c = 0;
		s = a + b;
		while (s!=0)
		{
			ta = a % 10;
			tb = b % 10;
			ts = s % 10;
			if (ts >= ta && ts >= tb);
			else c++;

			if (a == 0);
			else a = a / 10;

			if (b == 0);
			else b = b / 10;
		  s = s / 10;		
		}
		if (c==0)cout << "No carry operation." << endl;
		else if (c>1)cout <<c<<" carry operations."<<endl;
		else cout << c << " carry operation." << endl;
	}
	system("pause"); return(0);
}

#endif