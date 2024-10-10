#include <stdio.h>
#include <string.h>

int main(){
int main(){
	 char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   
 
	return 0;
}
void func(int n){ // 3 8 1 4 5   -> 38145
	prinf("even number is :");
	getNumberEven(n);
	prinf("odd number is :");
	getNumberEven(n);
}
int getNumberEven(int n){  // even avg  -> 
int sum =0;
int index =0;
	while(n > 0){
		if((n%10) % 2 == 0){
			sum +=  n%10;
			index++;
		}
		n = n/10;
	}
	printf("%d", sum /index);
	return 0;
}


int getNumberOdd(int n){  // even avg  -> 
int sum =0;
int index =0;
	while(n > 0){
		if((n%10) % 2 != 0){
			sum +=  n%10;
			index++;
		}
		n = n/10;
	}
	printf("%d", sum /index);
	return 0;
}
