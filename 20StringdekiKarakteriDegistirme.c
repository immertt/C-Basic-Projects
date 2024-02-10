#include <stdio.h>
#include <string.h>

int main(){
	char dizi[100],ch,ch2;
	int i=0,sayac=0;
	puts("Bir string giriniz");
	gets(dizi);
	printf("Hangi harfi degistirmek istiyorsunuz?");
	scanf("%c",&ch);
	printf("Hangi harfle degistirmek istiyorsunuz?");
	fflush(stdin);//buffer'i bosalttik
	scanf("%c",&ch2);
	while(dizi[i]!='\0'){
		if(dizi[i]==ch){
			sayac++;
			dizi[i]=ch2;}
		i++;}
	printf("%s\n\n%c harfi %c harfi ile degistirilmis olup bu stringte %d defa gecmistir.",dizi,ch,ch2,sayac);
	return 0;}