#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rastgeleDiziOlustur(int dizi[][5],int satir, int sutun);
void satirlariTopla(int dizi[][5],int satir, int sutun);
void sutunlariTopla(int dizi[][5],int satir, int sutun);
void diziyiYazdir(int dizi[][5],int satir, int sutun);

int main(){
	int satir,sutun;

	printf("Satir sayisini girin: ");
	scanf("%d",&satir);
	printf("Sutun sayisini girin: ");
	scanf("%d",&sutun);
	int dizi[satir][sutun];
	rastgeleDiziOlustur(dizi,satir,sutun);
	printf("\n%dX%d kare matris:\n\n");
	diziyiYazdir(dizi,satir,sutun);
	printf("\n");
	satirlariTopla(dizi,satir,sutun);
		printf("\n");
	sutunlariTopla(dizi,satir,sutun);
	return 0;}

void rastgeleDiziOlustur(int dizi[][5],int satir, int sutun){
	int i,j;
	srand(time(NULL));
	for(i=0;i<satir;i++){
		for(j=0;j<satir;j++)
			dizi[i][j]=rand()%5;}}
void diziyiYazdir(int dizi[][5],int satir, int sutun){
	int i,j;
	for(i=0;i<satir;i++){
		for(j=0;j<satir;j++)
			printf("%d ",dizi[i][j]);
		printf("\n");}}
void satirlariTopla(int dizi[][5],int satir, int sutun){
	int i,j,satirTopla=0;
	for(i=0;i<satir;i++){
		satirTopla=0;
		for(j=0;j<satir;j++)
			satirTopla+=dizi[i][j];				
		printf("%d. satirin toplami: %d\n",i+1,satirTopla);}}
void sutunlariTopla(int dizi[][5],int satir, int sutun){
	int i,j,sutunTopla=0;
	for(i=0;i<satir;i++){
		sutunTopla=0;
		for(j=0;j<satir;j++)
			sutunTopla+=dizi[j][i];					
		printf("%d. sutunun toplami: %d\n",i+1,sutunTopla);}}
