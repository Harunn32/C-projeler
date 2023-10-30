#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
string ad ="Ahmet";
string soyad="SÜZEN";
int boy=172;
int kilo=90 ;	
int yas=37;
char cinsiyet='E';
	
cout<< "Adý     :"<< ad << endl;
cout<< "Soyad   :"<< soyad << endl ;
cout<< "Boy     :"<< yas << endl ;
cout<< "Kilo    :"<< 90 << endl ;	
cout<< "Yas     :"<< 37 << endl;
cout<< "Cinsiyet:"<<"E"<< endl;
return 0;	

}
