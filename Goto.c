#include <stdio.h>
int main()
{
	// GoTo örneði
	char user[10]="BARIS"; // charecter türünde bir user deðiþkeni tanýmladýk ve BARIS adlý ismi atadýk.
tekrar:	printf("\nProgramcinin Adini Giriniz : "); // kullanýcýdan cevabý istedik
	scanf("%s",user); // cevabý alýp user e atadýk
	
	if(strcmp(user,"BARIS")==0) // eðer kullanýcýný girdiði cevap BARIS sa
	{
		printf("Dogru!!!\n"); // Onayladýk
	}
	
	else  // eðer yanlissa
	{
		printf("Yanlis!!!\n");// onaylamayýp
		 goto tekrar; // goto komutu kullanarak sorunun baþýna geri gönderdik goto tekrar yazýp tekrarý yinelemek istediðimiz kodun önüne yerleþtirdik.
	}
	
	}
    
