#include<stdio.h>
#define N 7
int func7(int vec[N])
{
	int i,j,sum1,sum2;
	sum1=0;
	for(i=0;i<N;i++)
	{
		sum1+=vec[i];
		for(sum2=0,j=i+1;j<N&&sum2<=sum1;j++)
		sum2+=vec[j];
		if(sum1==sum2)
		return(i);
	}
	return(-1);
}
