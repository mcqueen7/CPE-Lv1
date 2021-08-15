#define BeattheSpreadOK
#ifdef BeattheSpread
#include<iostream>
using namespace std;
int main() {
	int n;
	int a, b;
	int ansa = 0;
	int ansb = 0;
	cin >> n;
	int f = 0;
	while (n--) {
		ansa = 0;
		ansb = 0;
		cin >> a >> b;
		for (int  i = 0; i <= a/2; i++)
		{
			f = 0;
			if (a-i-i==b)
			{
				ansa = a-i;
				ansb = i;
				f = 1;
				break;
			}
		}
		if(f==1)cout << ansa<<" "<<ansb << endl;
		else cout <<"impossible" << endl;
	}
	system("pause"); return(0);
}
#endif