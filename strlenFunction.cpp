#include <stdio.h>  //standart giri� c�k�� fonksiyon k�t�phanesi
#include <string.h>  // karakter dizilerini saymak i�in gerekli k�t�phane
int main() {
          
		  //kac karakter oldu�unu sayan yaz�l�m	
 	  char ad[]="baris";   // char ad de�i�keni tan�mlad�k ismine baris verdik
	  int uzunluk=strlen(ad); // ad de�i�keni strlen ile sayd�rd�k uzunlu�a atad�k
	  printf("%d karakter\n",uzunluk); //karakterin uzunlu�unu yazmak i�in %d karakter yazd�k sonucu yazd�

	  printf("%d\n",strlen(ad)); // bu �rnekte direk olarak strlen kulland�k ad de�i�keni olarak
	printf("%d",strlen("meral")); // %d den sonra strlen yaz�p parantez i�in de saymak istedi�imiz karakter dizisini sayd�r�p yazd�k



       // bu �rnek kullan�c�dan karakter dizisi  al�p sayd�rmak
	char adiniz[10]; // adiniz de�i�keni tan�mlad�k en az 10 karakter olaca��n� belirledik
	printf("karakter girin :"); scanf("%s",adiniz); // printf ile karakter istedik scanf ile karakteri ad de�i�kenine kay�t ettik
	printf("girilen karakter uzunlugu = %d",strlen(adiniz)); // strlen kullanarak ad dei�kenine kay�t olunan kullan�c�n�n girdi�i karakterin uzunlu�unu ekrana yazd�rd�k 



      // bu �rnek de�i�kenin tek tek karakterlerini ekrana yazd�rmak 
	char sehir[]="istanbul"; // sehir de�i�keni  tan�mlad�k ve istanbul de�erini verdik
	
	for(int i=0; i<strlen(sehir); i++) // for d�ng�s� kullanarak d�ng�y� 0 dan ba�latt�k strlen kullanarak d�ng�n�n d�nece�i uzunlu�u belirledik ve d�ng�y� 1,1 artt�rd�k
	
	{
		printf("%c\n",sehir[i]); // printf ile sehir de�i�keninin karakterlerini tek tek ekrana yazd�rd�k
	}



          // bu �rnek tan�mlanm�� de�i�kend eki b�t�n karakterleri  tersten yazar
	char kitap[]="da vinci'nin sifresi";  // kitap adl� de�i�ken tan�mlad�k ve davinci �ifresi dizisini atad�k

	for(int i=strlen(kitap); i>=0; i--)// for d�ng�s� olu�turarak d�ng�y� de�i�ken deki uzunluk kadar tan�mlad�k ve d�ng� 0'a e�it olana kadar d�nmesini sa�lad�k d�ng�m�z� 1,1 eksilttik
	{
		printf("%c",kitap[i]); // printf ile kitap adl� de�i�kenin i�ine yazd���m�z ismi tersten ba�layarak yazd�k
	}
	
 // bu �rnek kullan�c� veritaban�na kay�t yap�l�rken girilen kullan�c� uzunlu�unun sistem taraf�ndan k�s�tlanmas�n� g�sterir
	char k_adi[10]; // k_adi de�i�keni tan�mlad�k ve en fazla 10 karkter olabilece�ini belirledik

	printf("Kullanici Adi :"); // kullan�c�dan kullan�c� ad� istedik
	scanf("%s",&k_adi); //svanf ile kullan�c�n�n girdi�i kullan�c� ad�n� k_adi adl�  de�i�kene ntan�mlad�k ve saklad�k

	if(strlen(k_adi)<8) { // if blo�u olu�turup girilen kullan�c� ad� 8 karakterden uzunmu de�ilmi kontrol ettik 8 karakter alt�nda ise kullan�c� ad� kay�t� iptal ettik
		printf("Kullanici adiniz enaz 8 Karakterden Olusmalidir."); // 8 karakter alt�nbda girildi�i i�in kullan�c�y� uyard�k 
	}
	
	else // e�er kullan�c� 8 karakter �st�nde bir karaktere girdiyse onaylay�p mesaj yazd�rd�k
	{
		printf("Kayit Basarili %s",k_adi); // basar�l� mesaj�n� yazd�r�p verilen kullanc� ad�n� kullanc�ya geri d�nd�rd�k
	}




























}
