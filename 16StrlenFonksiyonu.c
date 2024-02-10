#include <stdio.h>

int main(){
    char dizi[20];	 
	int karakterSayisi=0;
	
	puts("Lutfen bir string giriniz:");
	gets(dizi);
	//for(karakterSayisi=0;dizi[karakterSayisi]!='\0';karakterSayisi++);	
	while(dizi[karakterSayisi]!='\0')
		karakterSayisi++;
	printf("Stringdeki toplam karakter sayisi: %d",karakterSayisi);
    return 0;}