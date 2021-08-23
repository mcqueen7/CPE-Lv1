#define AnEasyProblemOK
#ifdef AnEasyProblem
#include<iostream>
#include<string>
using namespace std;
void check(string &tex,long long int &t,int max) {
	for (int i = 0; i < tex.length(); i++)
	{
		if (tex[i] >= 49 && tex[i] <= 57)
		{
			t += (tex[i] - 48) ;
		}
		else if (tex[i] >= 65 && tex[i] <= 90)
		{
			t += (tex[i] - 55) ;
		}
		else if (tex[i] >= 97 && tex[i] <= 122)
		{
			t += (tex[i] - 61) ;
		}
	}
}
int main() {
	string tex;
	int max=0;
	long long int t = 0;
	int f = 0;
	while (getline(cin,tex))
	{
	
		max = 0;
		for (int  i = 0; i < tex.length(); i++)
		{
			if (tex[i]>max)
			{
				max = tex[i];
			}
		}
		if (max == 48)
		{
			max = 2;
		}
		else if (max >= 49 && max <= 57)
		{
			max = max - 47;
		}
		else if (max >= 65 && max <= 90)
		{
			max = max - 54;
		}
		else if (max >= 97 && max <= 122)
		{
			max = max - 60;
		}
		t = 0;
		check(tex, t, max);
		f = 0;
		while (f == 0)
		{
			if (t % (max - 1) == 0)
			{
				f = 1;
			}
			else {
				max++;
				t = 0;
				check(tex, t, max);
			}
		}
		if (max <= 62 && max >= 2)cout << max << endl;
		else cout << "such number is impossible!" << endl;
		
	}

	system("pause"); return(0);
}
#endif