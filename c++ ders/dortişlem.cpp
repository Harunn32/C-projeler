#include<iostream>
#include<locale.h>
using namespace std ;

int main()

{
setlocale(LC_ALL,"Turkish")	;
int sayi1 =65;
int sayi2 =25;

	
cout<< "Toplam  = "<<  sayi1 +  sayi2  << endl;
cout<< "�arp�m  = "<<  sayi1 *  sayi2  << endl;
cout<< "B�l�m   = "<<  sayi1 /  sayi2  << endl;
cout<< "Fark    = "<<  sayi1 -  sayi2  << endl;

return 0;
	

}
