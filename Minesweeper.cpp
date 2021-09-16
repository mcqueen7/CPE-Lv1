#define MinesweeperOK
#ifdef Minesweeper
#include<iostream>
using namespace std;
int main() {
	int n, m;
	int count = 1;
	char a[101][101];
	int b[101][101];
	while (cin>>n>>m)
	{
		if (n == 0 && m == 0)break;
		if (count!=1)cout << endl;
		for (int  i = 1; i <= n; i++)
		{
			for (int  j = 1; j <= m; j++)
			{
				cin >> a[i][j];
				b[i][j] = 0;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (a[i][j] == '*') { b[i][j] = -1;}
				else {
					if (a[i - 1][j - 1] == '*')b[i][j]++;
					if (a[i - 1][j + 0] == '*')b[i][j]++;
					if (a[i - 1][j + 1] == '*')b[i][j]++;
					if (a[i + 0][j - 1] == '*')b[i][j]++;
					if (a[i + 0][j + 1] == '*')b[i][j]++;
					if (a[i + 1][j - 1] == '*')b[i][j]++;
					if (a[i + 1][j + 0] == '*')b[i][j]++;
					if (a[i + 1][j + 1] == '*')b[i][j]++;
				}
			}
		}
		cout << "Field #" << count <<":"<< endl;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (b[i][j] == -1)cout << '*';
				else cout << b[i][j];
			
			}
			cout << endl;
		}
		count++;
	}
	
	system("pause"); return(0);
}
#endif