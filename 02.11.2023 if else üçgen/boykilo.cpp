#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
// kullan�c� taraf�ndan girilen boy ve cinsiyet bilgisine g�re ideal kilo hesaplayan program� yaz�n.
// erkek : ideal_kilo = 50+2.3((boy/254)-60 kad�n .ideal_kilo= 45.5 + 2.3 *((boy/254)-60)
char cinsiyet ;
double ideal_kilo,boy;
cin >>"Cinsiyetinizi girin" ;
cin >> "Boyunuzu girin"  ;
if (cinsiyet=='E') 
{
	ideal_kilo= 50 + 2.3 * ((boy/2.54)-60);
    cout<< "�deal Kilo" <<endl;	// /n alt sat�ra iner endl ile ayn� g�revi var.
                                     // /t bir tabl�k bo�luk b�rak.
		
}


else 
{ 
    ideal_kilo = 45.5 +2.3 * (boy/2.54) -60); 
    
cout<< "ideal Kilo" <<endl;
}



return 0;	

}
