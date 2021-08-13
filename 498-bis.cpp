#define a498bisOK
#ifdef a498bis
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main() {
	float x;
	string s;
	stringstream a;
	int b[100];
	int k = 0;
	int count = 0;
	long long ans = 0;
	while (cin>>x)
	{
		count = 0;
		k = 0;
		ans = 0;
		a.clear();
		getline(cin, s);
		getline(cin, s);
		a << s;
		while (a>>(b[k]))
		{
			k++; 
			count++;
		}
		for (int  i = 0; i < count; i++)
		{
			ans += b[i] * (count - i - 1) * pow(x, count - i - 2);
		}
		cout << ans << endl;
	}
	
	system("pause"); return(0);
}
#endif