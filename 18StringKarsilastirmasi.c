#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char ilkString[20],ikinciString[20];
	int i,karakterSayisi,karakterSayisi2,sorgu=1;
 
	puts("Ilk stringi giriniz");
	gets(ilkString);
	puts("Ikinci stringi giriniz");
	gets(ikinciString);
	
	karakterSayisi=strlen(ilkString);
	karakterSayisi2=strlen(ikinciString);
	
	if(karakterSayisi!=karakterSayisi2)
		puts("Iki string birbirinden farklidir.");
	else{
		for(i=0;i<karakterSayisi;i++){
			if(tolower(ilkString[i])!=tolower(ikinciString[i])){
				sorgu=0;
				break;}}
		if(sorgu)
			puts("Iki string birbirinin aynisidir.");
		else
			puts("Iki string birbirinden farklidir.");}	
	return 0;}