#include <stdio.h>  //standart giriþ cýkýþ fonksiyon kütüphanesi
#include <string.h>  // karakter dizilerini saymak için gerekli kütüphane
int main() {
          
		  //kac karakter olduðunu sayan yazýlým	
 	  char ad[]="baris";   // char ad deðiþkeni tanýmladýk ismine baris verdik
	  int uzunluk=strlen(ad); // ad deðiþkeni strlen ile saydýrdýk uzunluða atadýk
	  printf("%d karakter\n",uzunluk); //karakterin uzunluðunu yazmak için %d karakter yazdýk sonucu yazdý

	  printf("%d\n",strlen(ad)); // bu örnekte direk olarak strlen kullandýk ad deðiþkeni olarak
	printf("%d",strlen("meral")); // %d den sonra strlen yazýp parantez için de saymak istediðimiz karakter dizisini saydýrýp yazdýk



       // bu örnek kullanýcýdan karakter dizisi  alýp saydýrmak
	char adiniz[10]; // adiniz deðiþkeni tanýmladýk en az 10 karakter olacaðýný belirledik
	printf("karakter girin :"); scanf("%s",adiniz); // printf ile karakter istedik scanf ile karakteri ad deðiþkenine kayýt ettik
	printf("girilen karakter uzunlugu = %d",strlen(adiniz)); // strlen kullanarak ad deiþkenine kayýt olunan kullanýcýnýn girdiði karakterin uzunluðunu ekrana yazdýrdýk 



      // bu örnek deðiþkenin tek tek karakterlerini ekrana yazdýrmak 
	char sehir[]="istanbul"; // sehir deðiþkeni  tanýmladýk ve istanbul deðerini verdik
	
	for(int i=0; i<strlen(sehir); i++) // for döngüsü kullanarak döngüyü 0 dan baþlattýk strlen kullanarak döngünün döneceði uzunluðu belirledik ve döngüyü 1,1 arttýrdýk
	
	{
		printf("%c\n",sehir[i]); // printf ile sehir deðiþkeninin karakterlerini tek tek ekrana yazdýrdýk
	}



          // bu örnek tanýmlanmýþ deðiþkend eki bütün karakterleri  tersten yazar
	char kitap[]="da vinci'nin sifresi";  // kitap adlý deðiþken tanýmladýk ve davinci þifresi dizisini atadýk

	for(int i=strlen(kitap); i>=0; i--)// for döngüsü oluþturarak döngüyü deðiþken deki uzunluk kadar tanýmladýk ve döngü 0'a eþit olana kadar dönmesini saðladýk döngümüzü 1,1 eksilttik
	{
		printf("%c",kitap[i]); // printf ile kitap adlý deðiþkenin içine yazdýðýmýz ismi tersten baþlayarak yazdýk
	}
	
 // bu örnek kullanýcý veritabanýna kayýt yapýlýrken girilen kullanýcý uzunluðunun sistem tarafýndan kýsýtlanmasýný gösterir
	char k_adi[10]; // k_adi deðiþkeni tanýmladýk ve en fazla 10 karkter olabileceðini belirledik

	printf("Kullanici Adi :"); // kullanýcýdan kullanýcý adý istedik
	scanf("%s",&k_adi); //svanf ile kullanýcýnýn girdiði kullanýcý adýný k_adi adlý  deðiþkene ntanýmladýk ve sakladýk

	if(strlen(k_adi)<8) { // if bloðu oluþturup girilen kullanýcý adý 8 karakterden uzunmu deðilmi kontrol ettik 8 karakter altýnda ise kullanýcý adý kayýtý iptal ettik
		printf("Kullanici adiniz enaz 8 Karakterden Olusmalidir."); // 8 karakter altýnbda girildiði için kullanýcýyý uyardýk 
	}
	
	else // eðer kullanýcý 8 karakter üstünde bir karaktere girdiyse onaylayýp mesaj yazdýrdýk
	{
		printf("Kayit Basarili %s",k_adi); // basarýlý mesajýný yazdýrýp verilen kullancý adýný kullancýya geri döndürdük
	}




























}
