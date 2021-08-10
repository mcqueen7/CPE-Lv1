#define JollyJumpersOK
#ifdef JollyJumpers
#include<iostream>
using namespace std;
void check(int a[3000],int n) {
	for (int  i = 0; i < n-1; i++)
	{
		if (abs(a[i]-a[i+1])>10&& abs(a[i] - a[i + 1])<0)
		{
			cout << "Not jolly" << endl;
			return;
		}
	}
	cout<< "Jolly" << endl;
}
int main() {
	int a[3000] = { -1 };
	int n = 0;
	while (cin>>n) {
		for (int  i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		check(a, n);
	}


	system("pause"); return(0);
}
#endif