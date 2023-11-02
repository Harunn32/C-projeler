#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
//üç sayýnýn eþitliðini bul
int a,b,c ;
cin >>a;
cin >>b;
cin >>c;
if (a==b && a==c) 
{
cout<< "Üç Sayý eþittir" <<endl;	// /n alt satýra iner endl ile ayný görevi var.
                                     // t bir tablýk boþluk býrak.
		
}

else 
{ 

cout<< "Üç sayý eþit deðildir" <<endl;
}



return 0;	

}
