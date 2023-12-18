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

//girilen isimin  harflerinden  küçüðe çevirme
string isim ;
cin >> isim ;
string yeni ;
int sayi ;
 for (int i =0;i<isim.size(); i++)
  {
  	sayi = (int)isim[i];
  	
  	if (sayi >= 65 && sayi<=90)
  	yeni += (int)isim[i]+32;
  	 else
  	 yeni +=isim[i];
  	
  }

cout << yeni<< endl;










 


system("pause") ;
return 0;	

}
