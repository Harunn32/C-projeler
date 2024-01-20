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
	
	cout <<"a en büyük sayýdýr" << endl;
}
 else if( b>a && b>c)
 {
 cout <<"b en büyük sayýdýr" << endl;
	
 }

 else if( c>a && c>b)
 {
 cout <<"c en büyük sayýdýr" << endl;
	
 }

else 
 {
 cout <<"sayilar esittir." << endl;
	
 }



	system("pause") ;
	return 0 ;	
	
	
}
