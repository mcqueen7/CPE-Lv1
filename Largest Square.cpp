#define LargestSquareOK
#ifdef LargestSquare
#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int q;
	int m, n;
	int x, y;
	int count;
	bool f;
	char a[100][100];
	while (t--)
	{
		cin >> m >> n;
		cin >> q;
		for (int  i = 0; i < m; i++)
		{
			for (int  j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		cout << m << " " << n << " " << q << endl;
		while (q--)
		{
			cin >> x>> y;
			count = 0;
			f = 1;
			while (f==1)
			{
				for (int i = x - count; i <= x + count; i++)
				{
					for (int j = y - count; j <= y + count; j++)
					{
						if (a[i][j] != a[x][y]) { f = 0; count--; break; }
					}
				}
				if(f==1)count++;
			}
			cout << count * 2 + 1 << endl;

		}

	}

	system("pause"); return(0);
}
#endif