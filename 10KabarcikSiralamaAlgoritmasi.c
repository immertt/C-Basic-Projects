#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int dizi[10],i,j,gecici;
	srand(time(NULL));
	printf("Sirasiz dizi:\n");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);}
	printf("\n");

	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(dizi[j]>dizi[j+1]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;}}}
	printf("\nSirali dizi:\n");
	for(i=0;i<10;i++)
		printf("%d ",dizi[i]);
    return 0;}