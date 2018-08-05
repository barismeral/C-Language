    #include <stdio.h> // standart Giriþ-Çýkýþ fonksiyonlarý kütüphanesini Dahil ettik.
    // Bu Program Deðiþkenin Bellekteki Adresini Gösterir.	 
  int main() 
  
   {
   	
   	  int sayi=10; // integer sayi diye bir deðiþken tanýmladýk ve deðer olarak 10 atadýk.	
   	  int *ptr;  // Bir Integer türünde pointer tanýmladýk.
   	  ptr = &sayi;  // Tanýmladýðýmýz Pointer'a deðeri 10 olan sayi deðiþkeninin adresini atadýk & operatörünü kullanarak.	
   	         // %p operatörü pointer gösterici operatörüdür. %x olarakta kullanýlýr %x 0 sayýlarýný göstermez.
   	    printf("%p \n",ptr);  // ptr deðiþkenimiz artýk sayi deðiþkeninin hafýzada olan adresini tutar bunu ise printf kullanarak ekrana yazdýrdýk.
   	
   	printf("%x",ptr); //Ayný þekilde %x kullanarak 0'larý göstermemiþ olduk
   	
   	            
   }
