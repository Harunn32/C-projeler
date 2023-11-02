#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
//üçgenin kenar uzunluklarý girildiðinde üçgen özelliklerini yazdýr.
int a,b,c ;
cin >>a;
cin >>b;
cin >>c;
if (a==b && a==c && b==c) 
{
cout<< "Üçgen eþkenardýr" <<endl;	// /n alt satýra iner endl ile ayný görevi var.
                                     // /t bir tablýk boþluk býrak.
		
}

else if (a==b || b==c || a==c)
{ 

cout<< "Üçgen ikizkenardýr" <<endl;
}

else 
{ 

cout<< "Üçgen çeþitkenardýr" <<endl;
}



return 0;	

}
