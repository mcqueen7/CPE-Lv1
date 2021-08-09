#define RotatingSentencesOK
#ifdef RotatingSentences
#include<iostream>
#include<string>
using namespace std;
void check(string tex,char n[100][100],int nl) {
	for (int  i = nl; i >= 0; i--)
	{
		for (int  j = 0; j < 100; j++)
		{
			n[j][i + 1] = n[j][i];
			n[j][i] = '\0';
		}
	}
	for (int  i = 0; i < tex.length(); i++)
	{
		n[i][0] = tex[i];
	}
	
}
int main() {
	char n[100][100] = {'NULL'};
	string tex;
	int nl = 0;
	int maxlong = 0;
	int load = 0;
	while (getline(cin,tex))
	{
		check(tex,n,nl);
		if (tex.length()>maxlong)
		{
			maxlong = tex.length();
		}
		nl++;
		tex = "";
	}
	for (int i = 0; i < maxlong; i++)
	{
		for (load = 0; load < nl; load++)
		{
			if (n[i][load]!='\0')
			{
				for (int  j = 0; j < load; j++)
				{
					if (n[i][j] == '\0')
					{
						n[i][j] = ' ';
					}
				}
			}
		}
	}
	for (int  i = 0; i < maxlong; i++)
	{
		for (int  j = 0; j < nl; j++)
		{
			if (n[i][j]!='\0')
			{
				cout << n[i][j];
			}
		}
		cout << endl;
	}


	system("pause"); return(0);
}

#endif