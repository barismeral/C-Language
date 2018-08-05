#include <stdio.h>

 struct TelRehber
 {
 	char ad[30];
 	char sehir[30];
 	int tel;
 	
 	
 }tel[3];
 
 int main()
 {
 	int i,say=0,sayi;
 	for(i=1; sayi!=0; i++){
	 
 	
		 printf("bitirmek icin 0 ");scanf("%d",&sayi);
 		printf("%d. Ismi Girin  :",i); scanf("%s",&tel[i].ad);
 		printf("%s'in Yasadigi Sehir  :",tel[i].ad); scanf("%s",&tel[i].sehir);
 		printf("%s'in Telefon Numarasi  :",tel[i].ad); scanf("%s",&tel[i].tel);
 		say++;
      printf("\n\n-----------REHBER----------\n\n");
 	
 	for(i=1; i<=say; i++)
 	{
 		printf("%s\t\t%s\t\t%d\n",tel[i].ad,tel[i].sehir,tel[i].tel);
	 }
	 
 		
	 }
 	
 	
 	
 }
 
