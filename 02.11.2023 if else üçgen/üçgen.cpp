#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
//��genin kenar uzunluklar� girildi�inde ��gen �zelliklerini yazd�r.
int a,b,c ;
cin >>a;
cin >>b;
cin >>c;
if (a==b && a==c && b==c) 
{
cout<< "��gen e�kenard�r" <<endl;	// /n alt sat�ra iner endl ile ayn� g�revi var.
                                     // /t bir tabl�k bo�luk b�rak.
		
}

else if (a==b || b==c || a==c)
{ 

cout<< "��gen ikizkenard�r" <<endl;
}

else 
{ 

cout<< "��gen �e�itkenard�r" <<endl;
}



return 0;	

}
