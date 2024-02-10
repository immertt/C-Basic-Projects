#include <stdio.h>
#include <stdlib.h>

int recursiveEBOB(int x, int y);
int recursiveEKOK(int x, int y);

int main(){
	int x,y;
	puts("1.Sayiyi girin:");
	scanf("%d",&x);
	puts("2.Sayiyi girin:");
	scanf("%d",&y);
	recursiveEBOB(x,y);
	recursiveEKOK(x,y);
	printf("%d ve %d sayilarinin EBOB'u %d EKOK'u %d'dir.",x,y,recursiveEBOB(x,y),recursiveEKOK(x,y));
	return 0;}

int recursiveEBOB(int x,int y){
	if(y==0)
		return x;
	return recursiveEBOB(y,x%y);}

int recursiveEKOK(int x, int y){
	return x*y/recursiveEBOB(x,y);}