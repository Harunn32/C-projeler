#include <iostream>

using namespace std ;

int main()

{

int a ,b ,c ;
cin >> a ;
cin >> b ;
cin >> c ;

	
if(a>b && a>c)
{
	
	cout <<"a en b�y�k say�d�r" << endl;
}
 else if( b>a && b>c)
 {
 cout <<"b en b�y�k say�d�r" << endl;
	
 }

 else if( c>a && c>b)
 {
 cout <<"c en b�y�k say�d�r" << endl;
	
 }

else 
 {
 cout <<"sayilar esittir." << endl;
	
 }



	system("pause") ;
	return 0 ;	
	
	
}
