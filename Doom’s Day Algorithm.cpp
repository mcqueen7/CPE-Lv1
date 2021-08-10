#define DoomsDayAlgorithmOK
#ifdef DoomsDayAlgorithm
#include<iostream>
using namespace std;
int main() {
	int  n;
	int m = 0, d = 0;
	int t = 0;
	cin >> n;
	while (n--)
	{
		t = 0;
		cin>>m>>d;
		for (int  i = 1; i <m; i++)
		{
			if (i == 1 || i == 3 ||i == 5 || i == 7 || i == 8 || i== 10 || i == 12)
			{
				t += 31;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11) {
				t += 30;
			}
			else t += 28;
		}
		t += d;
		switch (t%7)
		{
		case 0:
			cout << "Friday" << endl;
			break;
		case 1:
			cout << "Saturday" << endl;
			break;
		case 2:
			cout << "Sunday" << endl;
			break;
		case 3:
			cout << "Monday" << endl;
			break;
		case 4:
			cout << "Tuesday" << endl;
			break;
		case 5:
			cout << "Wednesday" << endl;
			break;
		case 6:
			cout << "Thursday" << endl;
			break; 
		}

	}
	system("pause"); return(0);
}

#endif