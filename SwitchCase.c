#include<stdio.h>
int main()
{	
 
         int secim;
enbas:	printf("Asagidakilerden hangisi Nesneye Dayali Programlama Dilidir?\n");
enbas2:	printf("C Dili icin 1'i\nBasic Dili Icin 2'yi\nC# Dili Icin 3'u\nPascal Dili Icin 4'u\nTuslayiniz...\n");
	       
	       scanf("%d",&secim);
	
	  switch(secim)
	  {
	  	case 1:
	  		printf("Yanlis Dogru Cevap C# dir\n"); break;
	  		case 2:
	  			printf("Yanlis Dogru Cevap C# dir\n"); break;
	  			case 3:
	  				printf("Tebrikler Dogru Cevap C# dir\n"); break;
	  				case 4:
	  					printf("Yanlis Dogru Cevap C# Dir\n"); break;
	                    default:printf("Lutfen 1 ve 3 arasinda bir Secim Yapin...\n\n");goto enbas; goto enbas2;
	  			
	  	
	  	
	  }
	
	
}
