#include<iostream>
#include <conio.h>

//while d�ng�s�
//kullan�c� taraf�ndan girilen iki say� aral��ndakisay�lar� ekranda g�ster
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
int a,b  ;

 
  
  cout << "K���k say�y� giriniz :"<< endl;
  cin >> a ;
  cout << "B�y�k say�y� giriniz :"<< endl;
  cin >> b ;
  int i= a;
  while(b>=i)
 {  cout <<i << endl;
 i++;
 }
   


  
return 0;	

}
