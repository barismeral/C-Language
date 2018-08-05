#include <stdio.h>


int main(){

            // getchar putchar ve EOF örneði 
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
