#include <iostream>
#include <locale.h>

using namespace std;

int faktoryel(int n);

int main() {
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int sonuc;

    cout << "Faktöriyelini hesaplamak istediðiniz sayýyý giriniz: ";
    cin >> sayi;
    sonuc = faktoryel(sayi);
    cout << sayi << " sayýsýnýn faktöriyeli: " << sonuc << endl;
    cout << endl;

    system("pause");
    return 0;
}

int faktoryel(int n) {
    if (n > 0) {
        return n * faktoryel(n - 1);
    } else {
        return 1;
    }
}

