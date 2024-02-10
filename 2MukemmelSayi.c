#include <stdio.h>

int main(void){
	
	//Mukemmel sayi,kendisi haric butun pozitif bolen sayilari topladiginiz zaman kendisini
	//veren sayidir. 3 + 2 + 1 = 6
	int sayi,i,toplam=0;
	
	printf("Bir sayi girin: ");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++){
		if(sayi%i==0)
			toplam+=i;}
	if(sayi==toplam)
		printf("%d sayisi mukemmel bir sayidir.",sayi);
	else
		printf("%d sayisi mukemmel bir sayi degildir.",sayi);	
	return 0;}