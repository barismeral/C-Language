#include <stdio.h>  // printf & scanf gibi temel giri� c�k�� fonksiyonlar� kullanmay� sa�lar..
#include <stdlib.h>   // system fonksiyonunu kullan�r..
int main() // program burdan ba�lar geriye de�er d�nd�rmez void dir.
{
	             // program yaz�m� bar�� mnerale aittir.. 
	printf("Merhaba !  Bu program Ogrencilerin Not Ortalamalarini Hesaplar... \nsonlandirmak Icin -1 sayisini giriniz\n");  // yaz�l�m ba�l���
	int ogrenci_notu,ortalama=0,toplam=0,sayac=0;  // de�i�kenleri tan�mlad�k (��renci notlar�n� saklayaca��m�z de�i�ken),(notlar�n bolumunden kalan say�),(ogrenci notunu toplayaca��m�z de�i�ken)
	
	 for ( int j=1; ;  )  // d�ng� 1 den ba�lar 3 oluncaya kadar d�ner..
	 {
	 if (ogrenci_notu == -1) break;
	 	printf("%d. Ogrencinin Notunu Giriniz : ",j++);//  not ister (i) ��rencileri temsil eder...
	 	scanf("%d",&ogrenci_notu);  //(ogrenci_notu) de�i�keni her 3 kere girilen say�y� kaydeder...
	 sayac++;
                toplam+=ogrenci_notu;  // ogrenc� notlar�n� tek tek toplam adl� de�i�kene kaydeder 1'er 1'er kay�t olur �rn.95+95+95 toplamda 3 girilen say� tutulur...
	 	 		      
	 	     
	 }
	                 ortalama = toplam/sayac;    // girilen ogrenci notlar� toplam da kay�t edildikten sonra 3'e b�l�n�p c�kan say� ortalama adl� de�i�kene aktar�l�r...
   	          printf("girilen ogrenci sayisi = %d Ogrencilerin Not Ortalamasi = %d'dir...\n\n",sayac,ortalama); // printf yard�m� ile c�kan sonuc ekrana yazd�r�l�r %d ortalamay� temsil eder..
	          
	          
	system("pause");   // yaz�l�m pc deki a��ld�ktan hemen sonra kapanmaz kullan�c�dan komuty bekler bu kod yaz�lmasa idi yaz�l�m �al���p i�lem yapmadan kapanacakt�..
	     return 0;  // bo� de�er g�nderdik yaz�lmasa da olur
	
	
}
