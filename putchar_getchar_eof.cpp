#include <stdio.h>


int main(){

            // getchar putchar ve EOF �rne�i 
            // Baris Meral
        char a;
     rtrn: a= getchar();
      
       if(a!=EOF){
	   
	   putchar(a); goto rtrn;
	   
	   }
	   else{
	   puts("EOF tuslandi");
	   }
      


}
