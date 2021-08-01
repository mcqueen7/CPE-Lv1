#define VitosfamilyOK
#ifdef Vitosfamily
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main() {
	int n, a = 0, l = 0, s = 0, fs = 0;
	int r[500] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		memset(r,0,500);
		a = 0;
		s = 0;
		fs = 0;
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &r[j]);
		}
		l = 1;
		for (int j = 0; j < a; j++)
		{
			fs = fs + abs(r[j] - l);
		}
		for (int k = 2; k <= 30000; k++)
		{
			l = k;
			s = 0;
			for (int j = 0; j < a; j++)
			{
				s = s + abs(r[j] - l);
			}
			if (s < fs)
			{
				fs = s;
			}

		}
		printf("%d\n", fs);
	}

	system("pause"); return(0);
}

#endif