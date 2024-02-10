#include <stdio.h>

int main(){
    char dizi[40];
	char dizi2[40];
	int i,karakterSayisi,karakterSayisi2;
	
	puts("Bir string giriniz");
	gets(dizi);
	puts("Bir string daha giriniz");
	gets(dizi2);
	for(karakterSayisi=0;dizi[karakterSayisi]!='\0';karakterSayisi++);
	for(karakterSayisi2=0;dizi2[karakterSayisi2]!='\0';karakterSayisi2++);
	//printf("%d",karakterSayisi);
	
	for(i=0;i<karakterSayisi2;i++)
		dizi[i+karakterSayisi]=dizi2[i];
    dizi[karakterSayisi + karakterSayisi2] = '\0';    
	printf("%s",dizi);
    return 0;
}