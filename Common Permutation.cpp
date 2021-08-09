#define CommonPermutationOK
#ifdef CommonPermutation
#include<iostream>
#include<string>
using namespace std;
void check(string a, string b) {
	int an[26] = { 0 };
	int bn[26] = { 0 };
	int tn[26] = { 0 };
	char tmp;
	for (int  i = 0; i < a.length(); i++)
	{
		an[a[i] - 97]++;
	}
	for (int i = 0; i < b.length(); i++)
	{
		bn[b[i] - 97]++;
	}
	for (int  i = 0; i < 26; i++)
	{
		if (an[i] == 0 || bn[i] == 0);
		else if (an[i]==bn[i])
		{
			for (int  j = 0; j < an[i]; j++)
			{
				tmp = 97 + i;
				cout <<tmp;
			}
		}
		else if (an[i] < bn[i])
		{
			for (int j = 0; j < an[i]; j++)
			{
				tmp = 97 + i;
				cout << tmp;
			}
		}
		else if (an[i] >bn[i])
		{
			for (int j = 0; j < bn[i]; j++)
			{
				tmp = 97 + i;
				cout << tmp;
			}
		}
	}
	cout << endl;
}
int main() {
	string a, b;

	while (cin >> a >> b)
	{
		check(a,b);
	}
	
	system("pause"); return(0);
}
#endif