#include <stdio.h>

struct Aile
{
	char Ad[50];
	char Soyad[50];
	char Cinsiyet[50];
	int  DogumTarihi;
	int  Yas;
	char Meslek[50];
	char MedeniDurumu[50];
}
Baba ={"Sait","Meral","Erkek",1975,42,"Manavcilik","Evli"},
Anne ={"Yildiz","Meral","Kadin",1979,38,"Ev Hanimi","Evli"},
Baris={"Baris","Meral","Erkek",1995,22,"Matbaacilik","Bekar"},
Irem ={"Irem","Meral","Kadin",2005,12,"Ogrenci","Bekar"},
Yusuf={"Yusuf","Meral","Erkek",2006,11,"Ogrenci","Bekar"};

int main()
{
	printf("\t\t-------------------Aile----------------\n\n");
	printf("Adi           :%s\n",Baba.Ad);
    printf("Soyadi        :%s\n",Baba.Soyad);
	printf("Cinsiyet      :%s\n",Baba.Cinsiyet);
	printf("Dogum Tarihi  :%d\n",Baba.DogumTarihi);
	printf("Yasi          :%d\n",Baba.Yas);
	printf("Meslegi       :%s\n",Baba.Meslek);
	printf("Medeni Durumu :%s\n",Baba.MedeniDurumu);
	printf("\n\n-----------------------\n\n");

    printf("Adi           :%s\n",Anne.Ad);
    printf("Soyadi        :%s\n",Anne.Soyad);
	printf("Cinsiyet      :%s\n",Anne.Cinsiyet);
	printf("Dogum Tarihi  :%d\n",Anne.DogumTarihi);
	printf("Yasi          :%d\n",Anne.Yas);
	printf("Meslegi       :%s\n",Anne.Meslek);
	printf("Medeni Durumu :%s\n",Anne.MedeniDurumu);
	printf("\n\n-----------------------\n\n");

    printf("Adi           :%s\n",Baris.Ad);
    printf("Soyadi        :%s\n",Baris.Soyad);
	printf("Cinsiyet      :%s\n",Baris.Cinsiyet);
	printf("Dogum Tarihi  :%d\n",Baris.DogumTarihi);
	printf("Yasi          :%d\n",Baris.Yas);
	printf("Meslegi       :%s\n",Baris.Meslek);
	printf("Medeni Durumu :%s\n",Baris.MedeniDurumu);
	printf("\n\n-----------------------\n\n");
	
    printf("Adi           :%s\n",Irem.Ad);
    printf("Soyadi        :%s\n",Irem.Soyad);
	printf("Cinsiyet      :%s\n",Irem.Cinsiyet);
	printf("Dogum Tarihi  :%d\n",Irem.DogumTarihi);
	printf("Yasi          :%d\n",Irem.Yas);
	printf("Meslegi       :%s\n",Irem.Meslek);
	printf("Medeni Durumu :%s\n",Irem.MedeniDurumu);
	printf("\n\n-----------------------\n\n");
	
    printf("Adi           :%s\n",Yusuf.Ad);
    printf("Soyadi        :%s\n",Yusuf.Soyad);
	printf("Cinsiyet      :%s\n",Yusuf.Cinsiyet);
	printf("Dogum Tarihi  :%d\n",Yusuf.DogumTarihi);
	printf("Yasi          :%d\n",Yusuf.Yas);
	printf("Meslegi       :%s\n",Yusuf.Meslek);
	printf("Medeni Durumu :%s\n",Yusuf.MedeniDurumu);
	printf("\n\n-----------------------\n\n");
	
	
	
	

	
	
	
	
	
}

