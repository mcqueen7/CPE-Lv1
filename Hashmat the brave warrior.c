#define HashmatthebravewarriorOK
#ifdef Hashmatthebravewarrior
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main() {
	long long  a, b,c;
	while (scanf("%lld%lld",&a,&b)!=EOF) {
		c = abs(a - b);
		printf("%lld\n",c);
		//rewind(stdin);
	}
	system("pause"); return(0);
}

#endif