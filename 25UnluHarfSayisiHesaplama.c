#include <stdio.h>
#include <ctype.h>
void unluSayisi(char kullaniciGirisi[]);

int main(){
	char dizgi[30];
	puts("Bir string giriniz");
	gets(dizgi);
	unluSayisi(dizgi);	
	return 0;}

void unluSayisi(char kullaniciGirisi[]){
	int i=0,j,k;
	char unluHarfler[]={'a','e','i','o','u','\0'};
	int unluSayilari[]={0,0,0,0,0,0};
	while(kullaniciGirisi[i]!='\0'){
		for(k=0;kullaniciGirisi[k]!='\0';k++){
			if(isupper(kullaniciGirisi[k])){
				kullaniciGirisi[k]=tolower(kullaniciGirisi[k]);}}	
		for(j=0;j<5;j++){
			if(kullaniciGirisi[i]==unluHarfler[j]){
				unluSayilari[j]++;
				break;}}
		i++;}
	for(i=0;i<5;i++)
		printf("%c karakteri bu stringde %d adet gecmektedir.\n",unluHarfler[i],unluSayilari[i]);
}
