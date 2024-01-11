#include <iostream>
#include <locale.h>

using namespace std;

int faktoryel(int n);

int main() {
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int sonuc;

    cout << "Fakt�riyelini hesaplamak istedi�iniz say�y� giriniz: ";
    cin >> sayi;
    sonuc = faktoryel(sayi);
    cout << sayi << " say�s�n�n fakt�riyeli: " << sonuc << endl;
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

