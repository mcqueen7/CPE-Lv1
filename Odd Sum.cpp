#define OddSumOK
#ifdef OddSum
#include<iostream>
using namespace std;
int main() {
	int n;
	int a, b;
	int count = 1;
	int ans = 0;
	cin >> n;
	while (n--) {
		ans = 0;
		cin >> a >> b;
		for (int  i = a; i <= b; i++)
		{
			if (i%2==1)
			{
				ans += i;
			}
		}
		cout << "Case " << count << ": " << ans << endl;
			count++;
	}


	system("pause"); return(0);
}
#endif