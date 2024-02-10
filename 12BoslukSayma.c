#include <stdio.h>

int main(){
    char ch;
	int boslukSayisi=0;
	
	printf("Cumlenizdeki bosluk sayisini ogrenmek icin bir cumle giriniz:");	
	do{
		ch = getchar(); //karakter alma.
		if(ch==' ') //ch kullanirken tek tirnak kullan!!!
			boslukSayisi++;			
	}while(ch!='\n');
		
	printf("Cumlenizde %d adet bosluk bulunmaktadir.",boslukSayisi);
	return 0;
}