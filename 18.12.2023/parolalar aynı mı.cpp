#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//string ad ="ahmet";
// char ad[] = "ahmet" ;
// int a = 'c'; ascii deki say�sal kar��l�k verir
// char b= 65 ; ascii de say� kar��l��� karakter olarak verir.
//(int(int)a[a]) char� int e �evirme             /O SON KARAKTERDEN SONRAK�
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;

//parola �LE G�R�LEN PAROLA E��T M� DE��L M� 
char parola[10]= "123456" ;
 char girilen[10] ="" ;
 cin >> girilen;
 
if (strcmp(parola,girilen)==0 )

cout << "Parolalar ayn� "<< endl;
 else
cout << "Parolalar farkl� "<< endl;  



system("pause") ;
return 0;	

}

