#include<iostream>
#include <conio.h>

//while d�ng�s�
//1 ile 100 aras�ndaki say�lardan 5 e b�l�n�p ��e b�l�nmeyenlerin ka� adet oldu�unu bulunuz
//toplam ve adet soruluyorsu for ve whilw in i�ine yaz�lmaz.
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
