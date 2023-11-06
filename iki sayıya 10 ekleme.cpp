//kullanýcýdan alýnan iki yaþ bilgisine göre eðer birinci yaþ büyük ise 10 ekle ekrana yazdýr 2. yaþ büyük ise 2.ye 10 ekle ekrana yazdýr.
#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{


int a,b ;
cout <<"Birinci sayýyý girin :";
cin >> a ;
cout <<"Ýkinci sayýyý girin :";
cin >> b ;
if (a>b)
{
 a+= 10 ;	
cout<< "sonuç ="<< a <<endl;	
                                     
	
	
}

else 
{ 
 b+= 10 ;	
cout<< "sonuç ="<< b <<endl;	
}



return 0;	

}
