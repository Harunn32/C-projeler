#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

// Müþteri bilgilerini tutan struct
struct Musteri {
    string isim;
    string soyisim;
    char cinsiyet;
    int odaNumarasi;
};

// Dosyaya müþteri bilgilerini yazan fonksiyon
void DosyayaYaz(ofstream& dosya, const Musteri& musteri) {
    dosya << musteri.isim << " " << musteri.soyisim << " " << musteri.cinsiyet << " " << musteri.odaNumarasi << endl;
}

int main() {
    // Dosyayý aç
     setlocale(LC_ALL, "Turkish");
    ofstream dosya("musteri_bilgileri.txt", ios::app); // ios::app, dosyanýn sonuna ekleme yapmayý saðlar

    // Dosya açýlýp açýlamadýðýný kontrol et
    if (!dosya.is_open()) {
        cout << "Dosya açma hatasi!" << endl;
        return 1;
    }

    // Müþteri bilgilerini giriþi için switch-case yapýsý
    int secim;
    do {
        cout << "1. Rezervasyon yap\n";
        cout << "2. Çýkýþ\n";
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
                cout << "Geçersiz secim! Tekrar deneyin.\n";
        }
    } while (secim != 2);

    // Dosyayý kapat
    dosya.close();

    return 0;
}

