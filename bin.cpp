#include<stdio.h>
int main(){//binary number
	int bin = 0,k=1,num;
	scanf("%d",&num);
	while(num)
{
	bin+=(num%2)*k;
	k*=10;
	num/=2;}
	printf("%d\n",bin);
}


