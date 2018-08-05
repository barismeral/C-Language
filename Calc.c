#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sayi1,sayi2;
	printf("Toplamak Istediginiz 1. Sayiyi Giriniz:");
	scanf("%d",&sayi1);
	printf("Toplamak Istediginiz 2. Sayiyi Giriniz:");
	scanf("%d",&sayi2);
	
	int toplam=sayi1+sayi2;
	 printf("Sayilarin Toplami:%d\n",toplam);
	
	system("pause");
	return 0;
}
