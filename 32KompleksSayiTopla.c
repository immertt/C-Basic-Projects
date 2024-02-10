#include <stdio.h>

typedef struct{
	float gercekKisim;
	float sanalKisim;	
}kompleksSayi;

void toplaKompleks(kompleksSayi sayi1,kompleksSayi sayi2,kompleksSayi *sonuc){
	sonuc->gercekKisim=sayi1.gercekKisim+sayi2.gercekKisim;
	sonuc->sanalKisim=sayi1.sanalKisim+sayi2.sanalKisim;}

int main(){
	kompleksSayi sayi1,sayi2,sonuc;
	printf("Birinci sayinin gercek ve sanal kismini sirasiyla giriniz: Ex (4 5)");
	scanf("%f%f",&sayi1.gercekKisim,&sayi1.sanalKisim);
	printf("Ikinci sayinin gercek ve sanal kismini sirasiyla giriniz: Ex (4 5)");
	scanf("%f%f",&sayi2.gercekKisim,&sayi2.sanalKisim);
		
	toplaKompleks(sayi1,sayi2,&sonuc);
	
	printf("Kompleks sayilarin toplami: %.1f + %1.fi\n",sonuc.gercekKisim,sonuc.sanalKisim);
	return 0;}
