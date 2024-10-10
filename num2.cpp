#include<stdio.h>
#include<stdio.h>
int*fumc(int *v,int n)
{
	int i,j,cnt=0,*p;
	for(i=0;i<n;i++)
	if(v[i]%2!=0)
	cnt++;
	p=(int*)malloc(cnt*sizeof(int));
	if(p==NULL)
{
	printf("no memory")
	return(NULL);
}
for(i=j=0;i<n;i++)
if(v[i]%2!=0)
p[j++]=v[i];
return(p);
