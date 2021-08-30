#define DivideButNotQuiteConquerOK
#ifdef DivideButNotQuiteConquer
#include<iostream>
using namespace std;
int main() {
	int s[60];
	int a, b;
	int count;
	bool f ;
	while (cin>>a>>b)
	{
		f = 1;
		if (b > a||a==1)f = 0;
		count = 1;
		s[0] = a;
		while (a>1)
		{
			if (a%b!=0 || b == 1)
			{
				f = 0;
				break;
			}
			s[count] = a / b;
			a = a / b;
			if (s[count]%b!=0&& s[count]!=1)
			{
				f = 0;
				break;
			}
			count++;
		}
		if (f == 1) {
			cout << s[0];
			for (int i = 1; i < count; i++)
			{
				cout <<" " <<s[i] ;
			}
			cout << endl;
		}
		else cout << "Boring!" << endl;
	}
	system("pause"); return(0);
}
#endif