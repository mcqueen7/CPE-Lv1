#define CanYouSolveItOK
#ifdef CanYouSolveIt
#include<iostream>
using namespace std;
int main() {
	int t;
	int x1, y1, x2, y2;
	int s1, s2;
	int t1, t2;
	int count=1;
	cin >> t;
	while (t--)
	{
		t1 = t2 = 0;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		s1 = x1 + y1;
		s2 = x2 + y2;
		for (int  i = 1; i <= s1; i++)
		{
			t1 += i;
		}
		t1 += x1 + 1;
		for (int i = 1; i <= s2; i++)
		{
			t2 += i;
		}
		t2 += x2 + 1;
		
		cout <<"Case "<<count<<": "<< abs(t1 - t2) << endl;
		count++;

	}
	system("pause"); return(0);
}
#endif