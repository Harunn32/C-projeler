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

//parola g��l�,zay�f. enaz 1 b�y�k harf,bir k���k harf ,1 rakam  i�ermeli
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

if (buyuk>0 && kucuk>0 && karakter>0 && rakam>0)
cout << "Sa�lam Parola ...!! "<< endl;
 else
cout << "Daha G��l� Bir Parola Bulmal�s�n.. !! "<< endl;


system("pause") ;
return 0;	

}

