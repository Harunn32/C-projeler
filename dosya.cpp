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

// Dosyadan müþteri sayýsýný okuyan fonksiyon
int DosyadanMusteriSayisiniOku(ifstream& dosya) {
    int musteriSayisi = 0;
    string satir;
    while (getline(dosya, satir)) {
        musteriSayisi++;
    }
    return musteriSayisi;
}

int main() {
    // Dosyayý aç
    setlocale (LC_ALL,"Turkish") ;
    ifstream okumaDosyasi("musteri_bilgileri.txt");
    ofstream yazmaDosyasi("musteri_bilgileri.txt", ios::app);

    // Dosya açýlýp açýlamadýðýný kontrol et
    if (!yazmaDosyasi.is_open() || !okumaDosyasi.is_open()) {
        cout << "Dosya acma hatasi!" << endl;
        return 1;
    }

    // Baþlangýçta kayýtlý müþteri sayýsýný al
    int kayitliMusteriSayisi = DosyadanMusteriSayisiniOku(okumaDosyasi);
    cout << "Baslangicta Kayitli Musteri Sayisi: " << kayitliMusteriSayisi << endl;

    // Ana menü
    int secim;
    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Rezervasyon yap\n";
        cout << "2. Musteri Sayisini Goruntule\n";
        cout << "3. Cikis\n";
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
                DosyayaYaz(yazmaDosyasi, yeniMusteri);

                // Müþteri sayýsýný artýr
                kayitliMusteriSayisi++;

                cout << "Rezervasyon tamamlandi!\n";
                break;
            }
            case 2:
                cout << "Toplam Kayitli Musteri Sayisi: " << kayitliMusteriSayisi << endl;
                break;
            case 3:
                cout << "Programdan cikiliyor.\n";
                break;
            default:
                cout << "Gecersiz secim! Tekrar deneyin.\n";
        }
    } while (secim != 3);

    // Dosyalarý kapat
    okumaDosyasi.close();
    yazmaDosyasi.close();

    return 0;
}

