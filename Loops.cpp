#include <stdio.h>
  int main()
  {
  	
  	// While D�ng�s� �rne�i
  	int i=0; // Tamsay� De�erinde bir say� tan�mlad�k bunu i de�i�kenine atad�k.
  	
  	while(i<10) //D�ng�mz� Ba�latt�k i de�erimiz 10 dan k���k oldu�u s�rece d�necek
  	{//d�ng� i�lemlerinin yapaca��maz s�sl� parantezi a�t�k
  		i++; // i de�erimiz 1'er artacak artmasa e�er i de�i�keni 0 kal�p sonsuza dek �al���r. her d�ng� d�ng� d�nd���nde 1 nin de�eri 1 art�p 10 olur ve ama� sa�lan�r.
  		printf("Hello World !!!\n");// yapmak istedi�imiz konsola 10 adet hello world yazmak.
	  }//d�ng� i�lemlerini bitti�inde parantezi kapatt�k.
  	
  	
  	// Do While d�ng�s� �rne�i
  	        int j = 0;
	do  {
		++j;
		printf("Hello World\n");// d�ng� kontrol edilmeden �nce bile 1 kere �al���r.
		} 
	while( j < 10 ); // d�ng� kontrol edilir uyuyorsa �al���r
	
  	    // For D�ng�s� �rne�i
  	    
  	    for(int k=0; k<10; k++)// t�m ii�lemleri for i�inde yapt�k 
  	
  	    {
  	    	printf("Hello World\n"); // ekrana 10 kere yaz�y� basar
		  }
  	    
  	
  }
