#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
//�� say�n�n e�itli�ini bul
int a,b,c ;
cin >>a;
cin >>b;
cin >>c;
if (a==b && a==c) 
{
cout<< "�� Say� e�ittir" <<endl;	// /n alt sat�ra iner endl ile ayn� g�revi var.
                                     // t bir tabl�k bo�luk b�rak.
		
}

else 
{ 

cout<< "�� say� e�it de�ildir" <<endl;
}



return 0;	

}
