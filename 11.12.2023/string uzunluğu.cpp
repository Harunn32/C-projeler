#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    string isim;

    cout << "Ýsim Giriniz: ";
    cin >> isim;

    for (int i = isim.length() - 1; i >= 0; i--)
    {
        cout << isim[i];
    }

    cout << endl;
    cout << isim;

    return 0;
}


