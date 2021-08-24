#define ParityOK
#ifdef Parity
#include<iostream>
using namespace std;
int main() {
	int n;
	int nr;
	bool b[40] = { 0 };
	int j;
	int ans;
	while (cin >> n)
	{
		nr = n;
		j = 0;
		ans = 0;
		if (n == 0)break;
		while (nr>0)
		{
			b[j] = nr % 2;
			nr /= 2;
			j++;
		}
		
		cout << "The parity of ";
		for (int  i = j-1; i >= 0; i--)
		{
			cout << b[i];
			ans += b[i];
		}
		cout << " is " << ans << " (mod 2)." << endl;
	}
	system("pause"); return(0);
}
#endif