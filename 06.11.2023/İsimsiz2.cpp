#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{


int count =10;

cout << "count=" <<count << endl;      // displays 10
cout << "count=" <<++count << endl;    // displays 11 �ncelik i�lem sonra artt�rma 	
cout << "count=" <<count << endl;      // displays 11
cout << "count=" <<count++ << endl;    // displays 11 �ncelik artt�rma sonra ekrana yazd�r
cout << "count=" <<count << endl;      // displays 12
  
cout << "count=" <<count << endl;      // displays 10
cout << "count=" <<--count << endl;    // displays 11 �ncelik i�lem sonra artt�rma 	
cout << "count=" <<count << endl;      // displays 11
cout << "count=" <<count-- << endl;    // displays 11 �ncelik artt�rma sonra ekrana yazd�r
cout << "count=" <<count << endl;      // displays 12  
  
  
  


return 0;	

}
