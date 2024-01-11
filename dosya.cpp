#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

// M��teri bilgilerini tutan struct
struct Musteri {
    string isim;
    string soyisim;
    char cinsiyet;
    int odaNumarasi;
};

// Dosyaya m��teri bilgilerini yazan fonksiyon
void DosyayaYaz(ofstream& dosya, const Musteri& musteri) {
    dosya << musteri.isim << " " << musteri.soyisim << " " << musteri.cinsiyet << " " << musteri.odaNumarasi << endl;
}

int main() {
    // Dosyay� a�
     setlocale(LC_ALL, "Turkish");
    ofstream dosya("musteri_bilgileri.txt", ios::app); // ios::app, dosyan�n sonuna ekleme yapmay� sa�lar

    // Dosya a��l�p a��lamad���n� kontrol et
    if (!dosya.is_open()) {
        cout << "Dosya a�ma hatasi!" << endl;
        return 1;
    }

    // M��teri bilgilerini giri�i i�in switch-case yap�s�
    int secim;
    do {
        cout << "1. Rezervasyon yap\n";
        cout << "2. ��k��\n";
        cout << "Seciminizi yapin: ";
        cin >> secim;

        switch (secim) {
            case 1: {
                Musteri yeniMusteri;
                cout << "Isim: ";
                cin >> yeniMusteri.isim;
                cout << "Soyisim: ";
                cin >> yeniMusteri.soyisim;
                cout << "Cinsiyet (E/K): ";
                cin >> yeniMusteri.cinsiyet;
                cout << "Oda Numarasi: ";
                cin >> yeniMusteri.odaNumarasi;

                // Dosyaya yaz
                DosyayaYaz(dosya, yeniMusteri);

                cout << "Rezervasyon tamamlandi!\n";
                break;
            }
            case 2:
                cout << "Programdan cikiliyor.\n";
                break;
            default:
                cout << "Ge�ersiz secim! Tekrar deneyin.\n";
        }
    } while (secim != 2);

    // Dosyay� kapat
    dosya.close();

    return 0;
}

