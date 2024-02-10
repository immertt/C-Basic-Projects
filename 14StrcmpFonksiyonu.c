#include <stdio.h>

int main(){

	char dizi[20];
	char dizi2[20];
	int i=0,karakterSayisi,karakterSayisi2,esitlik=1;
	
	puts("Bir string giriniz");
	gets(dizi);
	puts("Bir string daha giriniz");
	gets(dizi2);

	for(karakterSayisi=0;dizi[karakterSayisi]!='\0';karakterSayisi++);
	for(karakterSayisi2=0;dizi2[karakterSayisi2]!='\0';karakterSayisi2++);

	while(dizi[i]!= '\0' && dizi2[i]!= '\0' ){
		if(dizi[i]>dizi2[i]){
			printf("%s stringi %s stringinden alfabetik olarak sonra gelmektedir.",dizi,dizi2);
			esitlik=0;
			break;}	
		else if(dizi[i]<dizi2[i]){
			printf("%s stringi %s stringinden alfabetik olarak once gelmektedir.",dizi,dizi2);
			esitlik=0;
			break;}
		i++;}
	
	if(esitlik){
		if(karakterSayisi==karakterSayisi2)
			printf("%s stringi ile %s stringi tamamen aynidir.",dizi,dizi2);
		else if(karakterSayisi>karakterSayisi2)
			printf("%s stringi %s stringinden alfabetik olarak sonra gelmektedir.",dizi,dizi2);			
		else
			printf("%s stringi %s stringinden alfabetik olarak once gelmektedir.",dizi,dizi2);							}
	return 0;
}
