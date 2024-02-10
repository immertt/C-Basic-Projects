#include <stdio.h>
#include <string.h>

typedef struct{
	char sembol[3];
	char tamAdi[20];
	int atomNumarasi;	
}element;

void bilgileriGoster(element elementListesi[], char *sembol, int elementSayisi);

int main(){
	element elementListesi[]={
		{"H", "Hidrojen", 1},
        {"He", "Helyum", 2},
        {"Li", "Lityum", 3},
        {"Be", "Berilyum", 4},
        {"B", "Bor", 5},
        {"C", "Karbon", 6},
        {"N", "Azot", 7},
        {"O", "Oksijen", 8},
        {"F", "Flor", 9},
        {"Ne", "Neon", 10},
        {"Na", "Sodyum", 11},
        {"Mg", "Magnezyum", 12},
        {"Al", "Aluminyum", 13},
        {"Si", "Silisyum", 14},
        {"P", "Fosfor", 15},
        {"S", "Sulfur", 16},
        {"Cl", "Klor", 17},
        {"K", "Potasyum", 19},
        {"Ar", "Argon", 18},
        {"Ca", "Kalsiyum", 20},
        {"Sc", "Skandiyum", 21},
        {"Ti", "Titanyum", 22},
        {"V", "Vanadyum", 23},
        {"Cr", "Krom", 24},
        {"Mn", "Mangan", 25},
        {"Fe", "Demir", 26},
        {"Ni", "Nikel", 28},
        {"Co", "Kobalt", 27},
        {"Cu", "Bakir", 29},
        {"Zn", "Cinko", 30},
        {"Ga", "Galyum", 31},
        {"Ge", "Germanium", 32},
        {"As", "Arsenik", 33},
        {"Se", "Selenyum", 34},
        {"Br", "Brom", 35},
        {"Kr", "Kripton", 36},
        {"Rb", "Rubidyum", 37},
        {"Sr", "Stronsiyum", 38},
        {"Y", "Yttrium", 39},
        {"Zr", "Zirkonyum", 40},
        {"Nb", "Niobyum", 41},
        {"Mo", "Molibden", 42},
        {"Tc", "Teknesyum", 43},
        {"Ru", "Rutenyum", 44},
        {"Rh", "Rodiyum", 45},
        {"Pd", "Paladyum", 46},
        {"Ag", "Gumus", 47},
        {"Cd", "Kadmiyum", 48},
        {"In", "Indiyum", 49},
        {"Sn", "Kalay", 50},
        {"Sb", "Antimon", 51},
        {"I", "Iyot", 53},
        {"Te", "Telur", 52},
        {"Xe", "Ksenon", 54},
        {"Cs", "Seryum", 55},
        {"Ba", "Baryum", 56},
        {"La", "Lantan", 57},
        {"Ce", "Seriyum", 58},
        {"Pr", "Prazyodyum", 59},
        {"Nd", "Neodimyum", 60},
        {"Pm", "Prometyum", 61},
        {"Sm", "Samarium", 62},
        {"Eu", "Avrupiyum", 63},
        {"Gd", "Gadolinyum", 64},
        {"Tb", "Terbiyum", 65},
        {"Dy", "Dysprosium", 66},
        {"Ho", "Holmiyum", 67},
        {"Er", "Erbiyum", 68},
        {"Tm", "Tulyum", 69},
        {"Yb", "Ytterbium", 70},
        {"Lu", "Lutetyum", 71},
        {"Hf", "Hafniyum", 72},
        {"Ta", "Tantal", 73},
        {"W", "Tungsten", 74},
        {"Re", "Reniyum", 75},
        {"Os", "Osmiyum", 76},
        {"Ir", "Iridyum", 77},
        {"Pt", "Platin", 78},
        {"Au", "Altin", 79},
        {"Hg", "Civa", 80},
        {"Tl", "Talyum", 81},
        {"Pb", "Kursun", 82},
        {"Bi", "Bismut", 83},
        {"Th", "Toryum", 90},
        {"Pa", "Prosiyum", 91},
        {"U", "Uranyum", 92},
        {"Np", "Neptinyum", 93},
        {"Pu", "Plutonyum", 94},
        {"Am", "Amerikyum", 95},
        {"Cm", "Kuriyum", 96},
        {"Bk", "Berkelyum", 97},
        {"Cf", "Kaliforniyum", 98},
        {"Es", "Aynstaynyum", 99},
        {"Fm", "Fermiyum", 100},
        {"Md", "Mendeleviyum", 101},
        {"No", "Nobelyum", 102},
        {"Lr", "Lawrensiyum", 103},
        {"Rf", "Rutherfordiyum", 104},
        {"Db", "Dubniyum", 105},
        {"Sg", "Seaborgiyum", 106},
        {"Bh", "Bohriyum", 107},
        {"Hs", "Hasyum", 108},
        {"Mt", "Meitneriyum", 109},
        {"Ds", "Darmstadyum", 110},
        {"Rg", "Roentgeniyum", 111},
        {"Cn", "Copernicyum", 112},
        {"Nh", "Nihonyum", 113},
        {"Fl", "Flerovyum", 114},
        {"Mc", "Moscoviyum", 115},
        {"Lv", "Livermonyum", 116},
        {"Ts", "Tenesin", 117},
        {"Og", "Oganesson", 118},};
//Veri tabaninini kullanmadan yapiyoruz.        
	char kullaniciGirisi[3];
	while(1){
		printf("Aramak istediginiz elementin sembolunu bas harfi buyuk olacak sekilde giriniz:(Cikis icin q'ya basiniz.)\n");
		scanf("%s",&kullaniciGirisi);
		if(strcmp(kullaniciGirisi,"Q")==0 || strcmp(kullaniciGirisi,"q")==0){
			printf("Cikis basariyla gerceklestirildi.");
			break;}
		bilgileriGoster(elementListesi,kullaniciGirisi,sizeof(elementListesi)/sizeof(elementListesi[0]));}
	return 0;}

void bilgileriGoster(element elementListesi[], char *sembol, int elementSayisi){
	int i;
	int bulunduMu=0;
	for(i=0;i<elementSayisi;i++){
		if(strcmp(elementListesi[i].sembol,sembol)==0){
			printf("\nSembol:%s\n",elementListesi[i].sembol);
			printf("Tam adi:%s\n",elementListesi[i].tamAdi);
			printf("Atom numarasi:%d\n\n",elementListesi[i].atomNumarasi);
			bulunduMu=1;
			break;}}
	if(!bulunduMu)
		printf("Aradiginiz element listede bulunmamaktadir.\n");}
