#include<iostream>
#include <conio.h>

//kullan�c� taraf�ndan girilen iki say�n�n aras�ndaki asal say�lar� ekrana yazd�ran program
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
int a,b ;
bool asalmi=true;
 
  
  cout << "K���k say�y� giriniz :"<< endl;
  cin >> a ;
  cout << "B�y�k say�y� giriniz :"<< endl;
  cin >> b ;
  for(int i=a; i<b ;i++)
 {  asalmi=true;
 	for (int j=2;j<i;j++)
 	
 	{
 		if (i%j==0)
 		
 		asalmi=false ;
 		break;
 		 cout<<"Asal de�il" << endl;
	 }
	 
	 if(asalmi==true)

	{
		cout<<i << endl;
	 } 
 	
 }
   


  
return 0;	

}
