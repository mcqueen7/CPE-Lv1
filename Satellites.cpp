#define SatellitesOK
#ifdef Satellites
#include<iostream>
#include<iomanip>
#define PI 3.14159265358
using namespace std;
int main() {
	int s, t;
	char a[3];
	while (cin>>s>>t)
	{
		for (int  i = 0; i < 3; i++)
		{
			cin >> a[i];
		}
		if (a[0] == 'd') {
			cout <<  fixed <<setprecision(6) << 2 * (6440 + s) *PI * t / 360 << " " << fixed << setprecision(6) << 2 * (6440 + s) * sin(t*PI/180/2) << endl;
		}
		else cout << fixed << setprecision(6) << 2 * (6440 + s) * PI * t/60/360  << " " << fixed << setprecision(6) << 2 * (6440 + s) * sin(t*PI/60 / 180/2) << endl;


	}


	system("pause"); return(0);
}
#endif