#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

//string ad ="ahmet";
// char ad[] = "ahmet" ;
// int a = 'c'; ascii deki sayýsal karþýlýk verir
// char b= 65 ; ascii de sayý karþýlýðý karakter olarak verir.
//(int(int)a[a]) charý int e çevirme
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;

//girilen parolanýn karakter sayýsý kaç rakam kaç büyük harf var
string parola;
cin >> parola ;
int sayi, karakter=0,rakam =0, buyuk=0, kucuk=0;
 for (int i =0;i<parola.size(); i++)
  {
  	sayi = (int)parola[i];
  	
  	if (sayi >= 65 && sayi<=90)
  	 buyuk++;
  	 else if(sayi >= 97 && sayi<=121)
  	 kucuk++;  
  	 else if(sayi >= 32 && sayi<=47)
  	 karakter++;   
     else if(sayi >= 48 && sayi<=57)
  	 rakam++;     
  	
  }

cout << "Büyük Harf Sayýsý : "<<buyuk<< endl;
cout << "Küçük Harf Sayýsý : "<<kucuk<< endl;
cout << "Karakter Harf Sayýsý : "<<karakter<< endl;
cout << "Rakam Harf Sayýsý : "<<rakam<< endl;


system("pause") ;
return 0;	

}


