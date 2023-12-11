#include <iostream>
#include <cstring> // Bu baþlýk dosyasýný eklemeyi unutmayýn

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    char strl[] = "Teknoloji Fakültesi \n"
	                       "Bilgisayar Mühendisliði";
	                       
	const int  [MAX=80] ;                       
    char str2[MAX]; // Hedef dizi boyutu kaynaktan büyük olmalý

    strcpy(str2, str1);

    cout << str2 << endl;
    

    return 0;
}

