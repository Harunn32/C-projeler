#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//string ad ="ahmet";
// char ad[] = "ahmet" ;
// int a = 'c'; ascii deki sayýsal karþýlýk verir
// char b= 65 ; ascii de sayý karþýlýðý karakter olarak verir.
//(int(int)a[a]) charý int e çevirme             /O SON KARAKTERDEN SONRAKÝ
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;

//parola ÝLE GÝRÝLEN PAROLA EÞÝT MÝ DEÐÝL MÝ 
char parola[10]= "123456" ;
 char girilen[10] ="" ;
 cin >> girilen;
 
if (strcmp(parola,girilen)==0 )

cout << "Parolalar ayný "<< endl;
 else
cout << "Parolalar farklý "<< endl;  



system("pause") ;
return 0;	

}

