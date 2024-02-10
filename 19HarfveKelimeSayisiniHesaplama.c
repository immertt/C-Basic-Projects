#include <stdio.h>

int main(){
    char dizi[100];
	int i=0,harfSayisi=0,kelimeSayisi=1,stringUzunlugu;
	puts("Bir cumle giriniz:");
	gets(dizi);
	while(dizi[i]!='\0'){
		if(dizi[i]!=' ')
			harfSayisi++;
		else
			kelimeSayisi++;
		i++;}	
	printf("Bu cumledeki harf sayisi: %d\nBu cumledeki kelime sayisi: %d",harfSayisi,kelimeSayisi);	
    return 0;}