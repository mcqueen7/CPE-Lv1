#define FourthPointOK
#ifdef FourthPoint
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float x1, y1, x2, y2,x3,y3,x4,y4;
	while (cin>>x1>>y1>>x2>>y2>> x3>> y3>> x4>> y4)
	{
		if(x2==x3&&y2==y3)cout<<fixed<<setprecision(3)<< x4 + (x1 - x2) << " " << y4 + (y1 - y2) << endl;
		else if(x1 == x3 && y1 == y3) cout << fixed << setprecision(3) << x4 - (x1 - x2) << " " << y4 - (y1 - y2) << endl;
		else if (x2 == x4 && y2 == y4) cout << fixed << setprecision(3) << x3 + (x1 - x2) << " " << y3 + (y1 - y2) << endl;
		else if (x1 == x4 && y1 == y4) cout << fixed << setprecision(3) << x3 - (x1 - x2) << " " << y3 - (y1 - y2) << endl;

	}
	system("pause"); return(0);
}
#endif