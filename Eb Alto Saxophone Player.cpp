#define EbAltoSaxophonePlayerOK
#ifdef EbAltoSaxophonePlayer
#include<iostream>
#include<string>
using namespace std;
int main() {
	int t;
	cin >> t;
	bool f;
	int count;
	string tex;
	getline(cin, tex);

	while (t--)
	{
		getline(cin, tex);
		//1
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] == 'D' || tex[i] == 'E' || tex[i] == 'F' || tex[i] == 'G' || tex[i] == 'A' || tex[i] == 'B') && f == 0) { f = 1; count++; }
			else if ((tex[i] == 'D' || tex[i] == 'E' || tex[i] == 'F' || tex[i] == 'G' || tex[i] == 'A' || tex[i] == 'B') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//2
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] != 'C') && f == 0) { f = 1; count++; }
			else if ((tex[i] != 'C') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//3
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] != 'b'&& tex[i] != 'B') && f == 0) { f = 1; count++; }
			else if ((tex[i] != 'b' && tex[i] != 'B') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//4
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] != 'a' && tex[i] != 'b' && tex[i] != 'C' && tex[i] != 'A' && tex[i] != 'B') && f == 0) { f = 1; count++; }
			else if ((tex[i] != 'a' && tex[i] != 'b' && tex[i] != 'C' && tex[i] != 'A' && tex[i] != 'B') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//5
		cout << 0 << " ";
		//6
		cout << 0 << " ";
		//7
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] == 'D' || tex[i] == 'E' || tex[i] == 'F' || tex[i] == 'c' || tex[i] == 'd' || tex[i] == 'e' || tex[i] == 'f') && f == 0) { f = 1; count++; }
			else if ((tex[i] == 'D' || tex[i] == 'E' || tex[i] == 'F' || tex[i] == 'c' || tex[i] == 'd' || tex[i] == 'e' || tex[i] == 'f') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//8
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] == 'D' || tex[i] == 'E'  || tex[i] == 'c' || tex[i] == 'd' || tex[i] == 'e' ) && f == 0) { f = 1; count++; }
			else if ((tex[i] == 'D' || tex[i] == 'E' || tex[i] == 'c' || tex[i] == 'd' || tex[i] == 'e') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//9
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if ((tex[i] == 'D' || tex[i] == 'c' || tex[i] == 'd' ) && f == 0) { f = 1; count++; }
			else if ((tex[i] == 'D' || tex[i] == 'c' || tex[i] == 'd') && f == 1);
			else f = 0;
		}
		cout << count << " ";
		//10
		f = 0;
		count = 0;
		for (int i = 0; i < tex.length(); i++)
		{
			if (( tex[i] == 'c' ) && f == 0) { f = 1; count++; }
			else if ((tex[i] == 'c' ) && f == 1);
			else f = 0;
		}
		cout << count << endl;
	}
	system("pause"); return(0);
}
#endif