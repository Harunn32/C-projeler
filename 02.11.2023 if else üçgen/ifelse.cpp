#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
//Kullan�c� taraf�ndan girilen iki say�n�n birbirlerine g�re durumlar�n� inceleyin
int a=50,b=10 ;
cin >>a;
cin >>b;
if (a==b) 
{
cout<< "�ki Say� e�ittir" <<endl;	// /n alt sat�ra iner endl ile ayn� g�revi var.
                                     // t bir tabl�k bo�luk b�rak.
	
	
}

else 
{ 

cout<< "�ki say� e�it de�ildir" <<endl;
}



return 0;	

}




