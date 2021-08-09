#define SummingDigitsOK
#ifdef SummingDigits
#include<iostream>
#include<string>
using namespace std;
void check(string & tex) {
	int tmp = 0;
	string a="";
	int count = 0;
	for (int  i = 0; i < tex.length(); i++)
	{
		tmp = tmp + tex[i]-48;
		
	}
	tex = "";
	while (tmp!=0)
	{
		a+=( tmp % 10) + 48;
		count++;
		tmp = tmp / 10;
	}
	
	for (int  i = 0; i < a.length(); i++)
	{
		tex+= a[count - 1 - i];
	}
}


int main() {
	string tex;
	while (cin >> tex) {
		if (tex[0] == '0') {
			break;		
		}
		check(tex);
		check(tex);
		check(tex);
		cout << tex<<endl;
		
	}
	system("pause"); return(0);
}
#endif