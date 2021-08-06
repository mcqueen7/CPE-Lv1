#define _CRT_SECURE_NO_WARNINGS
#define ListofConquestsOK
#ifdef ListofConquests
#include<iostream>
#include<string.h>
using namespace std;
int nowcon = 0;
struct Sfans
{
	char ans[75]  ;
	int wm ;
};
Sfans fans[2000];

void check(char a[75]) {
	int i = 0;
	int f = 0;
	while (i<nowcon)
	{
		if (strncmp((fans + i)->ans,a,75)==0)
		{
			f = 1;
			((fans + i)->wm)++;
		}
		i++;
	}
	if (f==0)
	{
		strcpy(((fans + nowcon)->ans), a);
		((fans + nowcon)->wm)++;
		nowcon++;
	}

}
void fsort() {
	Sfans temp;
	int f = 1;
	while (f==1)
	{
		f = 0;
		for (int  i = 0; i <nowcon-1; i++)
		{
			if (strncmp((fans + i)->ans, (fans + i+1)->ans, 75) >0)
			{
				temp = fans[i + 1];
				fans[i + 1] = fans[i];
				fans[i] = temp;
				f = 1;
			}
		}
	}

}
int main() {
	int n = 0;
	int j = 0;
	cin >> n; 
	char con[2000][75] = { 0 };
	
	while (n--)
	{
		cin >> con[j];
		rewind(stdin);
		j++;
	}
	for (int  i = 0; i < j; i++)
	{
		check(con[i]);
	}
	fsort();
	for (int  i = 0; i < nowcon; i++)
	{
		cout << (fans+i)->ans << " " << (fans + i)->wm << endl;
	}
	system("pause"); return(0);
}

#endif