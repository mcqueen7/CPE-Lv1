#define DecodetheMadmanOK
#ifdef DecodetheMadman
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void check(string &sim, string &tex) {
	for (int  i = 0; i < tex.length(); i++)
	{
		if (tex[i]>=65&&tex[i]<=90)
		{
			tex[i] = (tex[i] + 32);
		}
		for (int j = 0; j < sim.length(); j++) {
			if (tex[i]==sim[j])
			{
				tex[i] = sim[j-2];
				break;
			}
		}
	}
}
int main() {
	string sim = "1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string tex;
	while (getline(cin, tex)) {
		check(sim,tex);
		cout << tex<<endl;
	}
	system("pause"); return(0);
}

#endif