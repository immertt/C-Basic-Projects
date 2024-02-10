#include <stdio.h>
#include <string.h>

struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};
int main(void){
	int i=0;
	struct Ogrenci ogrenciler[3];
	for(i=0;i<3;i++){
		printf("%d.ogrencinin adini giriniz:",i+1);
		scanf(" %[^\n]",&ogrenciler[i].isim);
		printf("%d.ogrencinin soyadini giriniz:",i+1);
		scanf(" %[^\n]",&ogrenciler[i].soyisim);
		printf("%d.ogrencinin ortalamasini giriniz:",i+1);
		scanf("%f",&ogrenciler[i].ortalama);
	}
	for(i=0;i<3;i++){
		printf("%d.ogrencinin adi ve soyadi %s %s ortalamasi %.2f\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].ortalama);
	}
	return 0;
}
