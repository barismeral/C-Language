#include <stdio.h>
#include <stdlib.h>
   int main()
   {
   	char secret[20],devam[3];
   	 int secenek;
   	   printf("Platformalar da Kullandiginiz Sifreleri Gosteren Programa Hosgeldiniz!!\n\n");
   	     printf("Guvenlik Icin Lutfen Gizli Sotuya Dogru Cevap Veriniz!!\n\n");
   	      printf("Devam Etmek Istiyormusunuz? Evet Icin [e], HAYIR icin [h] Tuslayiniz... Buyuk Kucuk Harf Duyarlýdýr...\n");
   	     scanf("%s",&devam);
   	       if(strcmp(devam,"e")==0){
			 
   	     printf("En Sevdiginiz Tarihsel Kisilik ?    :");
   	     scanf("%s",&secret);
   	           if (strcmp(secret,"che")==0)
   	           {
   	           	printf("Cevabiniz Dogru Hosgeldiniz Sn. Baris MERAL !\n\n");
   	          	 enbas: printf("(diyarmeral.619@gmail.com) GMAIL Hesap Sifreniz Icin 1'i\n(barismerall)Kullanici Adli Steam Hesap Sifreniz Icin 2'yi\n");
   	            alt: printf("(admin) Kullanici Adli Airties Internet Arayuz Sifreniz Icin 3'u\n(Baris)kullanici adli Windows Sifreniz Icin 4'u\n");
   	           	    
   	           	    scanf("%d",&secenek);
   	           	
   	             switch(secenek)
					{
   	             	  case 1:
   	             	  	printf(" Gmail sifreniz (booyakaPEPE)"); break;
   	             	  	
   	             	  	case 2:
   	             	  	printf(" Steam Hesap Sifreniz (havasavunma619+-)"); break;
   	             	  	
   	             	  	case 3:
   	             	  	printf(" TTNET Arayuz Sfifreniz (booyaka619)"); break;
   	             	  	
   	             	  	case 4:
   	             	  	printf(" Windows Sifreniz (3413)"); break;
   	             	  	
   	             	  	case '\n':
				 	       case '\t':
				 	       case ' ':
				 	       	case ',':
				 	       		case '.':
				 	       			case'-':
				 	       				case'+':
				 	       					case'*':
				 	       						case'/':
				 	       							
				 	       	
				 	       break;
							     	             	
   	             	   	 default:
								printf("Lutfen 1 ile 4 Arasinda Bir Secenek Giriniz...\n\n") ; goto enbas;  goto alt;       	
					}
   	             
   	           	
   	           	
   	           	
   	           	
   	           	
   	           	
   	           	
				  }
   	        else
   	        {
   	        	printf("yanlis\a\a\a");
			  
			  
			  
			  
			   }
			  
			   }
			   
			   
   	 else if(strcmp(devam,"h")==0)
			   {
			   	printf("Hoscakalin Programi Kapatabilirsiniz");
			   	
			   }
   	else {
   		printf("\aHatali Giris Yaptiniz programa Erisim Engellendi...\a\a");
	   }
   	
   	
   	
   	
   	
   	
   	
   }
