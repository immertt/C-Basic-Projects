#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrisDegerleriniAta(int satir,int sutun);

int main(){
	int satir,sutun;
	printf("Satir sayisini girin:");
	scanf("%d",&satir);
	printf("Sutun sayisini girin:");
	scanf("%d",&sutun);
	matrisDegerleriniAta(satir,sutun);
	return 0;}
	
void matrisDegerleriniAta(int satir, int sutun){
	int i,j,sayi,carpim=1,carpim2=1;
	int dizi[satir][sutun];
	srand(time(NULL));
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			dizi[i][j]=rand()%10;}} //dizinin degerlerini rastgele atadim.
	printf("Matris asagidaki gibidir:\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d ",dizi[i][j]);}
		printf("\n");}
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(i==j){
				carpim*=dizi[i][j];}}}
	printf("\nSoldan saga diagonal carpimlari:%d\n",carpim);
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(i+j==satir-1){
				carpim2*=dizi[i][j];}}}
	printf("Sagdan sola diagonal carpimlari:%d\n\n",carpim2);}