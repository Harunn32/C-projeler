#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std; 

int main(int argc,char** argv)

{
setlocale(LC_ALL,"Turkish")	;
char a []="a bir karakter dizisidir" ;
int i,j ;
cout <<a << endl ;
cout << "an�n 3. karakteri :" << a[3] << endl;

for (i=0; a[i] != '\0' ; i++) // diziyi karakter karakter yazd�rma
cout <<a[i];
cout << endl;

for (j=i-1; j>=0 ; j--)  // diziyi tersten yazd�rma
cout <<a[j];
cout << endl;

for (i=3; 8>=i ; i++)  // 3 ile 8. karakterler aras�n� yazd�rma
cout <<a[i];
cout << endl;


system("pause") ;
return 0;	

}
