#define TrainSwappingOK
#ifdef TrainSwapping
#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int n;
	int a[50];
	int tmp=0;
	bool f;
	int count;
	while (t--)
	{
		count = 0;
		cin >> n;
		for (int  i = 0; i <n; i++)
		{
			cin >> a[i];
		}
		f = 1;
		while (f==1)
		{
			f = 0;
			for (int  i = 0; i < n-1; i++)
			{
				if (a[i] > a[1 + i]) {
					tmp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = tmp;
					f = 1;
					count++;
				}	
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << endl;


	}
	system("pause"); return(0);
}
#endif