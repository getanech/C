#include<stdio.h>
#include<math.h>
int main(){
int num,sum;
printf("enter a 3 digit number");
scanf("%d",&num);
int ahadot = num % 10;
int asarot = num /10%10;
int meot = num / 100;
 sum = ahadot+asarot+meot;
int sum1 = pow(sum,3);
if(sum1==num)
printf("stikils");
else
printf("not stiklis");
}
