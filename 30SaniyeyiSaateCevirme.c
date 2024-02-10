#include <stdio.h>

typedef struct{
	int saat;
	int dakika;
	double saniye;//saniye + ondalikli kisim(salise)	
}saatBilgileri;

saatBilgileri saatiAyir(double kullaniciSaati){
	saatBilgileri donusturulenSaat;
	
	int tamSayiKismi= (int)kullaniciSaati;
	double ondalikliKisim=kullaniciSaati-tamSayiKismi;
	
	donusturulenSaat.saat=tamSayiKismi/3600;
	donusturulenSaat.dakika=(tamSayiKismi%3600)/60;
	donusturulenSaat.saniye=(tamSayiKismi%3600)%60+ondalikliKisim;
	
	return donusturulenSaat;}

int main(){
	double kullaniciGirisi;
	saatBilgileri kullaniciSaati;
	
	puts("Sayinizi saniye cinsinden giriniz: ");
	scanf("%lf",&kullaniciGirisi);
	
	kullaniciSaati=saatiAyir(kullaniciGirisi);
	
	printf("%d saat %d dakika %.2lf saniye",kullaniciSaati.saat,kullaniciSaati.dakika,kullaniciSaati.saniye);
	
	return 0;}


