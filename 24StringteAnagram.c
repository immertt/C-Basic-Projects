#include <stdio.h>
#include <string.h>

int main(){
    char kelime[20],kelime2[20],karakter;
    int harfFrekans[26]={0},harfFrekans2[26]={0}; 
	int i,anagramMi=1;
    puts("Bir kelime giriniz");
    gets(kelime);
    puts("Ikinci bir kelime giriniz");
    gets(kelime2);
    int kelimeUzunluk = strlen(kelime);
    int kelimeUzunluk2 = strlen(kelime2);
	if(kelimeUzunluk!=kelimeUzunluk2)
		puts("Anagram degil");
	else{	
	    for(i=0;i<kelimeUzunluk;i++){
	        karakter = kelime[i];
	        // kucuk harf yaptik
	        if(karakter >= 'A' && karakter <= 'Z')
	            karakter += 'a' - 'A';
			// harf kac defa tekrarlandi onu ekliyoruz		
			if(karakter>='a' && karakter <='z')
				harfFrekans[karakter-'a']++;}
		for(i=0;i<kelimeUzunluk2;i++){
	        karakter = kelime2[i];
	        if(karakter >= 'A' && karakter <= 'Z')
	            karakter += 'a' - 'A';		
			if(karakter>='a' && karakter <='z')
				harfFrekans2[karakter-'a']++;}
		for(i=0;i<26;i++){
			if(harfFrekans[i]!=harfFrekans2[i]){
				anagramMi=0;
				break;}}
		if(anagramMi)
			puts("Anagram");
		else
			puts("Anagram degil.");}
    return 0;}