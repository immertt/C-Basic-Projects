#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int dizi[10],sayi,i,bulunduMu=0;
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);}
	printf("\n");
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=0;i<10;i++){
		if(sayi==dizi[i]){
			bulunduMu=1;
			printf("%d sayisi dizinin %d. elemanidir.\n",sayi,i+1);
			continue;}}
	if(bulunduMu==0)
		printf("%d sayisi dizinin icinde bulunmamaktadir.",sayi);
	return 0;}