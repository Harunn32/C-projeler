#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    string isim;

    // Get user input for the name
    cout << "Ýsim Giriniz: ";
    cin >> isim;

    // Print the reversed string
    for (int i = isim.size() - 1; i >= 0; i--)
    {
        cout << isim[i];
    }

    cout << endl;

    return 0;
}

