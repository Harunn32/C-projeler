#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
//Kullanýcý tarafýndan girilen iki sayýnýn birbirlerine göre durumlarýný inceleyin
int a,b ;
cin >>a;
cin >>b;
if (a==b) 
{
cout<< "Ýki Sayý eþittir" <<endl;	// /n alt satýra iner endl ile ayný görevi var.
                                     // t bir tablýk boþluk býrak.
	
	
}

else 
{ 

cout<< "Ýki sayý eþit deðildir" <<endl;
}



return 0;	

}




