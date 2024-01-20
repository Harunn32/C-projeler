#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
// kullanýcý tarafýndan girilen boy ve cinsiyet bilgisine göre ideal kilo hesaplayan programý yazýn.
// erkek : ideal_kilo = 50+2.3((boy/254)-60 kadýn .ideal_kilo= 45.5 + 2.3 *((boy/254)-60)
char cinsiyet ;
double ideal_kilo,boy;
cin >>"Cinsiyetinizi girin" ;
cin >> "Boyunuzu girin"  ;
if (cinsiyet=='E') 
{
	ideal_kilo= 50 + 2.3 * ((boy/2.54)-60);
    cout<< "Ýdeal Kilo" <<endl;	// /n alt satýra iner endl ile ayný görevi var.
                                     // /t bir tablýk boþluk býrak.
		
}


else 
{ 
    ideal_kilo = 45.5 +2.3 * (boy/2.54) -60); 
    
cout<< "ideal Kilo" <<endl;
}



return 0;	

}
