#include <stdio.h>
#include <string.h>

int main(){
    char dizi[20];
	int i=0,karakterSayisi,palindromMu=1;
	puts("Bir string giriniz");
	gets(dizi);
	karakterSayisi=strlen(dizi);
	while(dizi[i]!='\0'){
		if(dizi[i]!=dizi[karakterSayisi-1-i]){
			palindromMu=0;
			break;}
		if(dizi[i]==dizi[karakterSayisi/2])
			break;
		i++;}
	if(palindromMu)
		printf("%s stringi bir palindrom sozcuktur",dizi);
	else
		printf("%s stringi bir palindrom sozcuk degildir",dizi);	
	return 0;}