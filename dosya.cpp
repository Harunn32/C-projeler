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

// Müþteri ekleyen fonksiyon
void MusteriEkle(ofstream& dosya) {
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
}

// Müþteri silen fonksiyon
void MusteriSil(ifstream& okumaDosyasi, ofstream& yazmaDosyasi) {
    string tc;
    cout << "Silinecek Musterinin Ismini Giriniz: ";
    cin >> tc;

    // Silinecek müþteriyi bul
    bool musteriBulundu = false;
    Musteri silinecekMusteri;
    while (okumaDosyasi >> silinecekMusteri.isim >> silinecekMusteri.soyisim >> silinecekMusteri.cinsiyet >> silinecekMusteri.odaNumarasi) {
        if (silinecekMusteri.isim == tc) {
            musteriBulundu = true;
            break;
        }
    }

    // Dosyayý baþa al
    okumaDosyasi.clear();
    okumaDosyasi.seekg(0, ios::beg);

    // Eðer müþteri bulunduysa, dosyaya geri yazmadan sil
    if (musteriBulundu) {
        yazmaDosyasi.close();
        yazmaDosyasi.open("musteri_bilgileri.txt");

        while (okumaDosyasi >> silinecekMusteri.isim >> silinecekMusteri.soyisim >> silinecekMusteri.cinsiyet >> silinecekMusteri.odaNumarasi) {
            if (silinecekMusteri.isim != tc) {
                DosyayaYaz(yazmaDosyasi, silinecekMusteri);
            }
        }

        cout << "Musteri basariyla silindi!\n";
    } else {
        cout << "Musteri bulunamadi!\n";
    }
}

// Müþteri listeleme fonksiyonu
void MusterileriListele(ifstream& dosya) {
    Musteri musteri;
    while (dosya >> musteri.isim >> musteri.soyisim >> musteri.cinsiyet >> musteri.odaNumarasi) {
        cout << "Isim: " << musteri.isim << "\n"
             << "Soyisim: " << musteri.soyisim << "\n"
             << "Cinsiyet: " << musteri.cinsiyet << "\n"
             << "Oda Numarasi: " << musteri.odaNumarasi << "\n"
             << "------------------------\n";
    }
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
        cout << "2. Musteri Sil\n";
        cout << "3. Musteri Sayisini Goruntule\n";
        cout << "4. Musterileri Listele\n";
        cout << "5. Cikis\n";
        cout << "Seciminizi yapin: ";
        cin >> secim;

        switch (secim) {
            case 1:
                MusteriEkle(yazmaDosyasi);
                kayitliMusteriSayisi++;
                break;
            case 2:
                MusteriSil(okumaDosyasi, yazmaDosyasi);
                kayitliMusteriSayisi--;
                break;
            case 3:
                cout << "Toplam Kayitli Musteri Sayisi: " << kayitliMusteriSayisi << endl;
                break;
            case 4:
                cout << "----- Tum Musteriler -----\n";
                MusterileriListele(okumaDosyasi);
                break;
            case 5:
                cout << "Programdan cikiliyor.\n";
                break;
            default:
                cout << "Gecersiz secim! Tekrar deneyin.\n";
        }
    } while (secim != 5);

    // Dosyalarý kapat
    okumaDosyasi.close();
    yazmaDosyasi.close();

    return 0;
}

