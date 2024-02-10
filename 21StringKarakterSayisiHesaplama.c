#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void harfFrekansiHesaplama(char []);
void kullanicadanIste(char []);

int main(){
	char dizgi[50];	
	kullanicadanIste(dizgi);
	harfFrekansiHesaplama(dizgi);		
	return 0;}
void harfFrekansiHesaplama(char dizgi[]){
	char karakter,harfFrekansi[26]={0};
	int i=0,sayac=0;
	while(dizgi[i]!='\0'){
		karakter=dizgi[i];
		if(karakter>='A' && karakter<='Z'){
			karakter += 'a' - 'A';}
		if(karakter>='a' && karakter<='z'){
			harfFrekansi[karakter-'a']++;}
		i++;}
	for(i=0;i<26;i++){
		if(harfFrekansi[i]>0){
			printf("%c karakteri bu stringte %d adet gecmektedir.\n",i+'a',harfFrekansi[i]);
			sayac++;}}
	printf("\nBu stringde %d adet farkli karakter gecmektedir.",sayac);		}
void kullanicadanIste(char dizgi[]){
	int kelimeUzunlugu;
	puts("Bir string giriniz");
	gets(dizgi);
	kelimeUzunlugu=strlen(dizgi);}