#include <stdio.h>
int main()
 {
  int s1,i;
  
  
  //for döngüsü örneði kullanýcýnýn girdiði sayiyi sýralar
      printf("sayi giriniz : "); scanf("%d",&s1);
	  for(i=1;i<=s1;i++)// for döngüsü i yi 1e eþitler i küçükse girilen sayýdan döngü çalýþýr i++ komutu döngüyü bir arttýrýr
	  {
	  	printf("%d\n",i);
		  }	
		  system("pause");
		  return 0;
 }
