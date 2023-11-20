#include<iostream>
#include <conio.h>

//kullanýcý tarafýndan girilen iki sayýnýn arasýndaki asal sayýlarý ekrana yazdýran program
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
int a,b ;
bool asalmi=true;
 
  
  cout << "Küçük sayýyý giriniz :"<< endl;
  cin >> a ;
  cout << "Büyük sayýyý giriniz :"<< endl;
  cin >> b ;
  for(int i=a; i<b ;i++)
 {  asalmi=true;
 	for (int j=2;j<i;j++)
 	
 	{
 		if (i%j==0)
 		
 		asalmi=false ;
 		break;
 		 cout<<"Asal deðil" << endl;
	 }
	 
	 if(asalmi==true)

	{
		cout<<i << endl;
	 } 
 	
 }
   


  
return 0;	

}
