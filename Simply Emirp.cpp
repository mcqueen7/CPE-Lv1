#define SimplyEmirpOK
#ifdef SimplyEmirp
#include<iostream>
#include<string>
using namespace std;
int main() {
	string t;
	int n;
	int a;
	int ar;
	bool f;
	bool ff;
	while (getline(cin,t))
	{
		f = 0;
		ff = 0;
		a = 0;
		for (int i = 0; i < t.length(); i++)
		{
			a += (t[i] - 48) * pow(10, t.length()-1-i);
		}
		for (int  i = 2; i < a; i++)
		{
			if (a % i == 0)f = 1;
		}
		ar = a;
	
		if (f == 1)cout << t << " is not prime." << endl;
		else {
		
			a = 0;
			for (int i = t.length() - 1; i >= 0; i--)
			{
				a += (t[i] - 48) * pow(10, i);
			}
			for (int i = 3; i < a; i++)
			{
				if (a % i == 0)ff = 1;
			}
			if (a == ar)ff = 1;
			if (ff==1)cout << t << " is prime." << endl;
			else cout << t << " is emirp." << endl;
		}
	}
	system("pause"); return(0);
}
#endif