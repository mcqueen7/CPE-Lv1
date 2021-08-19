#define B2SequenceOK
#ifdef B2Sequence
#include<iostream>
using namespace std;
void clear(bool a[20001]) {
	for (int  i = 0; i < 20001; i++)
	{
		a[i] = 0;
	}

}
int main() {
	int n = 0;
	bool a[20001] = { 0 };
	int t[100];
	int f = 0;
	int count = 1;
	while (cin>>n)
	{
		f = 0;
		for (int  i = 0; i < n; i++)
		{
			cin >> t[i];
		}
		
		clear(a);
		for (int  i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
			{
				if (a[t[i] + t[j]] == 0)
				{
					a[t[i] + t[j]] = 1;
				}
				else { f = 1; break; }
			}
		}
		
		if (f==1)
		{
			cout << "Case #" << count << ": It is not a B2-Sequence." << endl << endl;
		}
		else cout << "Case #" << count << ": It is a B2 - Sequence." << endl << endl;
		count++;
	
	}
	
	system("pause"); return(0);
}
#endif