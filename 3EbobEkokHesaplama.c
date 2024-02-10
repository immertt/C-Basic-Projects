#include <stdio.h>

int main(){
    int sayi1,sayi2,i,ebob=1,ekok;
	
	printf("Birinci sayiyi girin: ");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi girin: ");
	scanf("%d",&sayi2);
	
	for(i=1;i<=sayi1 && i<=sayi2;i++){
		
		if(sayi1%i==0 && sayi2%i==0){
			ebob = i;
		}
	}
	ekok = (sayi1 * sayi2)/ebob;
	printf("%d ve %d sayilarinin ekoku: %d\n",sayi1,sayi2,ekok);
	printf("%d ve %d sayilarinin ebobu: %d",sayi1,sayi2,ebob);
    return 0;
}