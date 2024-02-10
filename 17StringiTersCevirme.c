#include <stdio.h>
#include <string.h>

int main(){
    char dizi[20],ch,temp;
	int i,diziBoyutu;
	
	puts("Bir isim giriniz");
	gets(dizi);
	printf("\n*****Stringin ters cevrilmemis hali:*****\n%s\n\n",dizi);
	diziBoyutu=strlen(dizi);
	
	for(i=0;i<diziBoyutu/2;i++){
		temp=dizi[i];
		dizi[i]=dizi[diziBoyutu-i-1];
		dizi[diziBoyutu-i-1]=temp;}
	printf("*****Stringin ters cevrilmis hali:*****\n%s",dizi);
    return 0;}