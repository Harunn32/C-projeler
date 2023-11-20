#include<iostream>
#include <conio.h>

//while döngüsü
//1 ile 100 arasýndaki sayýlardan 5 e bölünüp üçe bölünmeyenlerin kaç adet olduðunu bulunuz
//toplam ve adet soruluyorsu for ve whilw in içine yazýlmaz.
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
int i=0  ;
int adet=0;
 
  
  
  while(i<100)
 {  
 
   if (i%5==0 && i%3!=0)
   {
   	adet++ ;
   	
   }
   i++;
   
}
  cout << adet; 
 
 
   


  
return 0;	

}
