#define WhatsCryptanalysisOK
#ifdef WhatsCryptanalysis
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
struct Sans{
	char let;
	int num;
};
Sans ans[26];
void anssort() {
	int f = 1;
	Sans temp;
	while (f==1)
	{
		f = 0;
		for (int i = 0; i <= 25-1; i++)
		{
			if ((ans+i)->num< (ans + i+1)->num)
			{
				temp = ans[i + 1];
				ans[i + 1] = ans[i];
				ans[i] = temp;
				f = 1;
			}
		}
	}

}
void pp() {
	for (int  i = 0; i <= 25; i++)
	{
		if ((ans+i)->num!=0)
		{
			cout << (ans + i)->let << " " << (ans + i)->num<<endl;
		}
	}

}

void check(string tex) {
	for (int  i = 0; i < tex.length(); i++)
	{
		if ((tex[i]<=90&& tex[i] >= 65))
		{
			(ans + tex[i] - 65)->num++;
		}
		else if (tex[i] <= 122 && tex[i] >= 97) 
		{	
			(ans + tex[i] - 97)->num++;		
		}
	}


}
int main() {
	int n = 0;
	string tex,trash;
	cin >> n;
	getline(cin, trash);
	
	for (int  i = 0; i <= 25; i++)
	{
		(ans + i)->let = (65 + i);
	}
	while (n--)
	{
		getline(cin,tex);
		check(tex);
	}
	anssort();
	pp();
	
	system("pause"); return(0);
}

#endif