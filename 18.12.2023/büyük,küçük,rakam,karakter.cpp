#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

//string ad ="ahmet";
// char ad[] = "ahmet" ;
// int a = 'c'; ascii deki say�sal kar��l�k verir
// char b= 65 ; ascii de say� kar��l��� karakter olarak verir.
//(int(int)a[a]) char� int e �evirme
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;

//girilen parolan�n karakter say�s� ka� rakam ka� b�y�k harf var
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

cout << "B�y�k Harf Say�s� : "<<buyuk<< endl;
cout << "K���k Harf Say�s� : "<<kucuk<< endl;
cout << "Karakter Harf Say�s� : "<<karakter<< endl;
cout << "Rakam Harf Say�s� : "<<rakam<< endl;


system("pause") ;
return 0;	

}


