#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dizi[10],i,j,eleman;
	srand(time(NULL));
	printf("Sirasiz dizi\n");
	
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n");
	
	for(i=1;i<10;i++){
		eleman=dizi[i];
		for(j=i-1;dizi[j]>=eleman && j>=0;j--)
			dizi[j+1]=dizi[j];
		dizi[j+1]=eleman;}
	printf("\n");
	printf("Sirali dizi\n");
	for(i=0;i<10;i++)
		printf("%d ",dizi[i]);	
    return 0;}