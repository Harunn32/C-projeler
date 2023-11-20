#include<iostream>
#include <conio.h>

//while döngüsü
//kullanýcý tarafýndan girilen iki sayý aralðýndakisayýlarý ekranda göster
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
int a,b  ;

 
  
  cout << "Küçük sayýyý giriniz :"<< endl;
  cin >> a ;
  cout << "Büyük sayýyý giriniz :"<< endl;
  cin >> b ;
  int i= a;
  while(b>=i)
 {  cout <<i << endl;
 i++;
 }
   


  
return 0;	

}
