#define SquareNumbersOK
#ifdef SquareNumbers
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b;
	int ans;
	float t = 0;
	int tmp = 0;
	while (cin>>a>>b)
	{
		ans = 0;
		if (a == 0 && b == 0)break;
		for (int  i = a; i <= b; i++)
		{
			//tmp = (int)sqrt(i);
			if ((int)sqrt(i) * (int)sqrt(i) ==i)
			{
				ans++;
			}
		}
		
		cout << ans << endl;
	}
	
	system("pause"); return(0);
}
#endif