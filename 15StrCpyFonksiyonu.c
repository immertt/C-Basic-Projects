#include <stdio.h>

int main(){
    char isim[20],isim2[20];
	int karakterSayisi=0;
	int i;
	
	puts("Bir string giriniz:");
	gets(isim);
	
	while(isim[karakterSayisi]!='\0')
		karakterSayisi++;
	
	for(i=0;i<=karakterSayisi;i++)
		isim2[i]=isim[i];
	printf("Kopyalama islemi basarili\nToplam karakter sayisi:%d",karakterSayisi);
    return 0;
}