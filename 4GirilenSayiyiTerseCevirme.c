#include <stdio.h>

int main(){
	int sayi,temp,kalan,sayininTersi=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	temp = sayi;
	while(temp!=0){
		kalan = temp%10;
		sayininTersi = sayininTersi*10 + kalan;
		temp/=10;}
	printf("%d sayisinin tersi %d'dir.",sayi,sayininTersi);
	return 0;}