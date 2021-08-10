#define TEXQuotesOK
#ifdef TEXQuotes
#include<iostream>
#include<string>
using namespace std;
int f = 0;
void check(string &tex) {
	
	for (int  i = 0; i < tex.length(); i++)
	{
		if (f == 0 && tex[i] == '"')
		{
			cout << "``";
			f = 1;
		}
		else if (f == 1 && tex[i] == '"')
		{
			cout << "''";
			f = 0;
		}
		else cout << tex[i];
	}
}
int main() {
	string tex;
	while (getline(cin, tex))
	{
		check(tex);
		cout << endl;
	}
	
	system("pause"); return(0);
}

#endif