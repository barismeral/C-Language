    #include <stdio.h> // standart Giri�-��k�� fonksiyonlar� k�t�phanesini Dahil ettik.
    // Bu Program De�i�kenin Bellekteki Adresini G�sterir.	 
  int main() 
  
   {
   	
   	  int sayi=10; // integer sayi diye bir de�i�ken tan�mlad�k ve de�er olarak 10 atad�k.	
   	  int *ptr;  // Bir Integer t�r�nde pointer tan�mlad�k.
   	  ptr = &sayi;  // Tan�mlad���m�z Pointer'a de�eri 10 olan sayi de�i�keninin adresini atad�k & operat�r�n� kullanarak.	
   	         // %p operat�r� pointer g�sterici operat�r�d�r. %x olarakta kullan�l�r %x 0 say�lar�n� g�stermez.
   	    printf("%p \n",ptr);  // ptr de�i�kenimiz art�k sayi de�i�keninin haf�zada olan adresini tutar bunu ise printf kullanarak ekrana yazd�rd�k.
   	
   	printf("%x",ptr); //Ayn� �ekilde %x kullanarak 0'lar� g�stermemi� olduk
   	
   	            
   }
