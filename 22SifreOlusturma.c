#include <stdio.h>
#include <ctype.h>
int main(void){

	printf("\n\n-Buyuk,kucuk harf kullanilmasi gerek.\n-Sayi kullanilmis olmasi gerek.\n-Sifrenin 8 karakterden uzun olmus olmasi gerek.\n-Sifrenin 16 karakterden kisa olmasi gerek.\n\n\n");
	char ch;
	int kucukHarfSorgu=0,buyukHarfSorgu=0,sayiSorgu=0,karakterSayisi=0;
	printf("Lutfen bir sifre girin: ");
	
	do{
		ch=getchar();
		if(kucukHarfSorgu==0){
			if(islower(ch))
				kucukHarfSorgu=1;}
		if(buyukHarfSorgu==0){
			if(isupper(ch))
				buyukHarfSorgu=1;}
		if(sayiSorgu==0){
			if(isdigit(ch))
				sayiSorgu=1;}
		karakterSayisi++;
	}while(ch!='\n');
	
	if(buyukHarfSorgu && kucukHarfSorgu && sayiSorgu && karakterSayisi>8 && karakterSayisi<16)
		printf("Sifre olusturma islemi basarili");	
	else
		printf("Sifre olusturma islemi basarisiz");
	return 0;}
