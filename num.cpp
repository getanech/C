#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,*p,i;
	printf("enter num");
	scanf("%d",&num);
	if(num <0)
	printf("Error");
	else{
		p=(int*)malloc(num*sizeof(int));
		if(p=NULL){
		
			
			printf("no memory left");
			return(NULL);}
			
			else{
				for(i=0;i<num;i++)
				scanf("%d",&p[i]);
				free(p);
			}
		}
	}
	

