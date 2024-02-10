#include <stdio.h>
#include <stdlib.h>

int fibonacciRecursive(int sayi);

int main(){

	int i,ustLimit;
	printf("Fibonacci serisi kac elemanli olsun?\n"); 
	scanf("%d",&ustLimit);
	for(i=0;i<ustLimit;i++)
		printf("%d ",fibonacciRecursive(i));
	return 0;
}
int fibonacciRecursive(int sayi){
	if(sayi==0 || sayi==1)
		return sayi;
	else
		return fibonacciRecursive(sayi-1)+fibonacciRecursive(sayi-2);
}