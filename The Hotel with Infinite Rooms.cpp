#define TheHotelwithInfiniteRoomsOK
#ifdef TheHotelwithInfiniteRooms
#include<iostream>
using namespace std;
int main() {
	long long int m = 0;
	long long int d = 1;
	long long int ad = 0;
	while (cin>>m)
	{
		d = 0;
		while (d < ad)
		{
			d += m;
			m++;
		} 
		
		cout << m-1<<endl;
	}
	
	system("pause"); return(0);
}

#endif