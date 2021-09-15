#define HardwoodSpeciesOK
#ifdef HardwoodSpecies
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct aaa {
	string name;
	int num;
};
int main() {
	aaa a[10000] = {"",0};
	aaa tmp;
	string tex;
	int s;
	int count;
	int t;
	cin >> t;
	getline(cin, tex);
	getline(cin, tex);
	bool f;
	bool ff;
	bool fff;
	int k;
	while (t--)
	{
		count = 0;
		s = 0;
	
		while (getline(cin, tex))
		{
			if (tex == "")break;
			f = 0;
			for (int  i = 0; i < s; i++)
			{
				if (tex==a[i].name)
				{
					a[i].num++;
					f = 1;
				}
			}
			if (f==0)
			{
				a[s].name = tex;
				a[s].num++;
				s++;
			}
			if(tex!="")count++;
		}

		ff = 1;
		while (ff==1)
		{
			ff = 0;
			for (int  i = 0; i < s-1; i++)
			{
				k = 0;
				fff = 0;
				while (fff==0)
				{
					if (a[i].name[k] > a[i + 1].name[k])
					{
						tmp = a[i];
						a[i] = a[i + 1];
						a[i + 1] = tmp;
						ff = 1;
						fff = 1;
					}
					else if (a[i].name[k] == a[i + 1].name[k])
					{
						k++;
					}
					else fff = 1;
				}
			}
		}
		for (int  i = 0; i < s; i++)
		{
			cout << a[i].name << " " <<fixed<<setprecision(4)<< (float)a[i].num /count*100<< endl;
			a[i].name = "";
			a[i].num = 0;
		}
		
		if (t!=0)
		{
			cout << endl;
		}
	}
	system("pause"); return(0);
}
#endif