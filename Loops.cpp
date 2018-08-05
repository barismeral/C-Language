#include <stdio.h>
  int main()
  {
  	
  	// While Döngüsü Örneði
  	int i=0; // Tamsayý Deðerinde bir sayý tanýmladýk bunu i deðiþkenine atadýk.
  	
  	while(i<10) //Döngümzü Baþlattýk i deðerimiz 10 dan küçük olduðu sürece dönecek
  	{//döngü iþlemlerinin yapacaðýmaz süslü parantezi açtýk
  		i++; // i deðerimiz 1'er artacak artmasa eðer i deðiþkeni 0 kalýp sonsuza dek çalýþýr. her döngü döngü döndüðünde 1 nin deðeri 1 artýp 10 olur ve amaç saðlanýr.
  		printf("Hello World !!!\n");// yapmak istediðimiz konsola 10 adet hello world yazmak.
	  }//döngü iþlemlerini bittiðinde parantezi kapattýk.
  	
  	
  	// Do While döngüsü örneði
  	        int j = 0;
	do  {
		++j;
		printf("Hello World\n");// döngü kontrol edilmeden önce bile 1 kere çalýþýr.
		} 
	while( j < 10 ); // döngü kontrol edilir uyuyorsa çalýþýr
	
  	    // For Döngüsü örneði
  	    
  	    for(int k=0; k<10; k++)// tüm iiþlemleri for içinde yaptýk 
  	
  	    {
  	    	printf("Hello World\n"); // ekrana 10 kere yazýyý basar
		  }
  	    
  	
  }
