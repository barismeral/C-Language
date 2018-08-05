#include <stdio.h>
#include <stdlib.h>
 int main()
 {
 	
 	char userid[15],password[15];
 	
 	printf(" Merhaba Kullanici Oturumuna Hosgeldiniz!\n\n");
 	
 	printf("Lutfen Kullanici Adinizi Girin   :");
 	
 	scanf("%s",userid);
 	
 	printf("Lutfen Sifrenizi Giriniz    :");
 	
 	scanf("%s",password);
 	
 	       if (strcmp(userid,"barismeral")==0 && strcmp(password,"programmer")==0)
 	       
 	       {
 	       	printf("Giris Basarili Hosgeldiniz Sayin Baris Meral"); 
 	       	
			}
			else
			{
				printf("Yanlis Kullanici Adi veya Sifre!\a\n\n");
			}
			
			
 	                     system("pause");
 	            return 0;
 	
 	
 }
