#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziDoldur(int dizi[], int elemanSayisi);
void diziSirala(int dizi[], int elemanSayisi);
void diziYazdir(int dizi[], int elemanSayisi);
void buyuguGetir(int dizi[], int elemanSayisi, int sayi);
void kucuguGetir(int dizi[], int elemanSayisi, int sayi);

int main(){
	int elemanSayisi=5,dizi[elemanSayisi],sayi;
	
	diziDoldur(dizi,elemanSayisi);
	printf("Sirasiz Dizi\n");
	diziYazdir(dizi,elemanSayisi);
	printf("\n");
	diziSirala(dizi,elemanSayisi);
	printf("\nSirali Dizi\n");
	diziYazdir(dizi,elemanSayisi);
	printf("\n\nDizideki en buyuk kacinci elemani ogrenmek istiyorsunuz?\n");
	scanf("%d",&sayi);
	buyuguGetir(dizi,elemanSayisi,sayi);
	printf("Dizideki en kucuk kacinci elemani ogrenmek istiyorsunuz?\n");
	scanf("%d",&sayi);
	kucuguGetir(dizi,elemanSayisi,sayi);
	printf("\n");
		
	return 0;
}

void diziDoldur(int dizi[], int elemanSayisi){
	int i;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){
		dizi[i]=rand()%100;}}
void diziSirala(int dizi[], int elemanSayisi){
	int i,j,temp;
	for(i=0;i<elemanSayisi-1;i++){
		for(j=0;j<elemanSayisi-1-i;j++){
			if(dizi[j]>dizi[j+1]){
				temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;}}}}

void diziYazdir(int dizi[], int elemanSayisi){
	int i;
	for(i=0;i<elemanSayisi;i++){
		printf("%d ",dizi[i]);}}
		
void buyuguGetir(int dizi[],int elemanSayisi,int sayi){
	diziSirala(dizi,elemanSayisi);
	diziYazdir(dizi,elemanSayisi);
	printf("\n");
	printf("%d\n",dizi[elemanSayisi-sayi]);}
	
void kucuguGetir(int dizi[],int elemanSayisi,int sayi){
	diziSirala(dizi,elemanSayisi);
	diziYazdir(dizi,elemanSayisi);
	printf("\n");
	printf("%d",dizi[sayi-1]);}	
