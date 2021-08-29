#define AllYouNeedIsLoveOK
#ifdef AllYouNeedIsLove
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a, b;
	string ta, tb;
	int f = 0;
	int count = 1;
	while (n--)
	{
		a = 0;
		b = 0;
		f = 0;
		cin >> ta >> tb;
		for (int  i = 0; i < ta.length(); i++)
		{
			a += (ta[i]-48) * pow(2.0, ta.length() - i - 1);
		}
		for (int i = 0; i < tb.length(); i++)
		{
			b += (tb[i]-48) * pow(2.0, tb.length() - i - 1);
		}
		if (a>b)
		{
			for (int  i = 2; i <= a; i++)
			{
				if (a%i==0&&b%i==0)
				{
					cout << "Pair #" << count << ": All you need is love!" << endl;
					f = 1;
					break;

				}
			}
		}
		else
		{
			for (int i = 2; i <= b; i++)
			{
				if (a % i == 0 && b % i == 0)
				{
					cout << "Pair #" << count << ": All you need is love!" << endl;
					f = 1;
					break;
				}
			}
		}
		if(f!=1)cout << "Pair #" << count << ":  Love is not all you need!" << endl;
		count++;
	}
	system("pause"); return(0);
}
#endif