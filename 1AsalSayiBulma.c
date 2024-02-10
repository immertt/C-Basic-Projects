#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int sayi,i,asalMi=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			asalMi=1;
			break;}}
	if(asalMi==0){
		if(sayi==1)
			printf("Sayi asal degildir.");
		else
			printf("Sayi asaldir.");}
	else
		printf("Sayi asal degildir.");
	return 0;}