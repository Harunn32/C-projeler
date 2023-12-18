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

//girilen isimin ascii karþýlýðý
string isim ;
cin >> isim ;

 for (int i =0;i<isim.size(); i++)
  

cout << ((int)isim[i]) << endl;










 


system("pause") ;
return 0;	

}
