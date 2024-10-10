#include<stdio.h>
#include <stdlib.h>

int* add(int  arr[], int n){
	int *p;

	p = (int *) malloc(n * sizeof(int));
 	for(int i = 0 ; i< n ; i++){
		if(arr[i] % 2 != 0){
			p[i] = arr[i];
		}else {
			p [i] = -1;
		}
	}
	return p;
}
void print(int * arr,int n){
	for(int i = 0; i<n ; i++){
		printf("%d \n", arr[i]);
	}
}

int main(){
	int  arr[] = {1,2,3,4,5,6};
	int * p;
	p = add(arr, 6);
	print(p,6);
	free(p);
	return 0;
}

