#define SymmetricMatrixOK
#ifdef SymmetricMatrix
#include<iostream>
using namespace std;
void check(int a[100][100],int s,int count) {
	int f = 1;
	for (int  i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			if (a[i][j]!=a[s-1-i][s-1-j]|| a[i][j]<0)
			{
				f = 0;
				break;
			}
		}
	}
	if (f==1)cout << "Test #"<<count<<": Symmetric." << endl;
	else cout << "Test #" << count << ": Non-symmetric." << endl;

}
int main() {
	int a[100][100];
	int n ;
	cin >> n;
	char t[2];
	int s;
	int count = 1;
	while (n--)
	{
		cin >> t[0] >> t[1] >> s;

		for (int  i = 0; i < s; i++)
		{
			for (int  j = 0; j < s; j++)
			{
				cin >> a[i][j];
			}
		}
		check(a, s,count);
		count++;
	}

	system("pause"); return(0);
}
#endif