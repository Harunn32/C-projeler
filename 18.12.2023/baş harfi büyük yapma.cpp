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

//girilen isimin  harflerini b�y��e �evirme
string isim ;
cin >> isim ;
string yeni ;
 for (int i =0;i<isim.size(); i++)
  yeni+=(int)isim[i]-32 ;

cout << yeni<< endl;










 


system("pause") ;
return 0;	

}
