#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{


int count =10;

cout << "count=" <<count << endl;      // displays 10
cout << "count=" <<++count << endl;    // displays 11 öncelik iþlem sonra arttýrma 	
cout << "count=" <<count << endl;      // displays 11
cout << "count=" <<count++ << endl;    // displays 11 öncelik arttýrma sonra ekrana yazdýr
cout << "count=" <<count << endl;      // displays 12
  
cout << "count=" <<count << endl;      // displays 10
cout << "count=" <<--count << endl;    // displays 11 öncelik iþlem sonra arttýrma 	
cout << "count=" <<count << endl;      // displays 11
cout << "count=" <<count-- << endl;    // displays 11 öncelik arttýrma sonra ekrana yazdýr
cout << "count=" <<count << endl;      // displays 12  
  
  
  


return 0;	

}
