#include<stdio.h>
int main()
{
	int yas; // Yaş değişkeni tanımladık
	printf("Yasinizi Girin : "); // kullanıcıdan yaşını istedik
	scanf("%d",&yas); // girilen sayıyı kayıt ettik
	 if(yas>0 && yas<=3) // eğer yas 0 dan büyük 3 ve 3 ten küçükse 
	 {
	 	printf("Yas %d  Bebek",yas); // yaşını ve karşılığını yazdırdık
	 }
	else if(yas>3 && yas<=9)         // "
	{
		printf("Yas %d Cocuk",yas);   //"
	}
	else if(yas>9 && yas<=17)
	{
		printf("Yas %d Genc",yas);
	}
	else if(yas>17 && yas<=25)
	{
		printf("Yas %d Yetiskin",yas);   //""
	}
	else if(yas>25 && yas<=40)
	{
		printf("Yas %d Orta Yas",yas);
	}
	else if(yas>40 && yas<=60)
	{
		printf("Yas %d Yasli",yas);
	}
	else if(yas>60 && yas<=80)
	{
		printf("Yas %d Ihitiyar",yas);
	}
	else if (yas>80 && yas<=100)
	{
		printf("Yas %d Ahiretlik",yas);
	}
	else   // en son 100 den fazla bir sayı girildiğinde yanlış olarak işlem gördürüp
	{
		printf("Yas %d Yanlis Girdi",yas); // kullanıcıya bildirdik
	}
}
