//kullan�c�dan al�nan iki ya� bilgisine g�re e�er birinci ya� b�y�k ise 10 ekle ekrana yazd�r 2. ya� b�y�k ise 2.ye 10 ekle ekrana yazd�r.
#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{


int a,b ;
cout <<"Birinci say�y� girin :";
cin >> a ;
cout <<"�kinci say�y� girin :";
cin >> b ;
if (a>b)
{
 a+= 10 ;	
cout<< "sonu� ="<< a <<endl;	
                                     
	
	
}

else 
{ 
 b+= 10 ;	
cout<< "sonu� ="<< b <<endl;	
}



return 0;	

}
