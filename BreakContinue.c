#include <stdio.h>
int main()
{
	// break örneði*
		int sayi,i; 
	printf("Kaca Kadar Sayilsin? :");// kaçta döngünün biteceðini sorduk
	scanf("%d",&sayi); // cevabý alýp sayi deðiþkenine atadýk
	  for(i=1; i>0;) // döngü baþlattýk
	  {
	  	if(i==sayi) break; // eðer girilen sayi döngü sayýsýna eþit olursa break ile döngüyü kýrdýk
	  	printf("%d\n",i++); // girilen sayýya kadar döngü döndü ve sayýlarý 1'er arttýrdýk
	  }
	  
	printf("%d Dongu Sonu!",sayi); // döngü bittiðini bildirdik girilen sayi ile beraber.
    ////////////-----------------//////////// 
    
               // continue örneði
               // tek sayýlarý bulup yazdýrmak
        int d;
           for( d= 0; d < 10; d++ ) { //döngüyü baþlattýk 10 oluncaya kadar devam edecek 
		
	         if( d%2 == 0 ) //eðer i yani döngü sayýsý her seferinde 2 ye bölünüp kalan sayý 0 ise çift sayýdýr.
			 continue; //continue kullanarak devam et dedik ve tek sayýlarý bulup yazdýr
	          	printf("%d\n",d);// tek sayýlarý yazdýrma
	}
















}



