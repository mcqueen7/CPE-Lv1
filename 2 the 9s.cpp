#define q2the9sOK
#ifdef q2the9s
#include<iostream>
#include<string>
using namespace std;
int main() {
	string t;
	int a;
	int b;
	int count;
	while (getline(cin, t))
	{
		if (t == "0")break;
		count = 1;
		a = 0;
		for (int  i = 0; i < t.length(); i++)
		{
			a += t[i] - 48;
		}
		if (a % 9 != 0)cout << t << " is not a multiple of 9." << endl;
		else if(a==9)cout << t << " is a multiple of 9 and has 9-degree " << count << "." << endl;
		else {
			b = 0;
			while (a>9) {
				while (a>0)
				{
					b += a % 10;
					a = a / 10;
				}
				a = b;
				if (a % 9 != 0)count++;
			}
			cout << t << " is a multiple of 9 and has 9-degree " << count + 1 << "." << endl;
		}
	}
	system("pause"); return(0);
}
#endif