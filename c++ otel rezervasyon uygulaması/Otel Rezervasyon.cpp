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
    dosya.clear(); // Dosya durumunu sýfýrla
    dosya.seekg(0, ios::beg); // Dosyayý baþa al
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
    dosya.clear();
    dosya.seekg(0, ios::beg); // Dosyayý baþa al

    Musteri musteri;
    while (dosya >> musteri.isim >> musteri.soyisim >> musteri.cinsiyet >> musteri.odaNumarasi) {
        cout << "Isim: " << musteri.isim << "\n"
             << "Soyisim: " << musteri.soyisim << "\n"
             << "Cinsiyet: " << musteri.cinsiyet << "\n"
             << "Oda Numarasi: " << musteri.odaNumarasi << "\n"
             << "------------------------\n";
    }
}

// Müþteri arama fonksiyonu
void MusteriAra(ifstream& dosya) {
    string arananIsim;
    cout << "Aranacak Musterinin Ismini Giriniz: ";
    cin >> arananIsim;

    dosya.clear();
    dosya.seekg(0, ios::beg); // Dosyayý baþa al

    Musteri musteri;
    bool bulundu = false;
    while (dosya >> musteri.isim >> musteri.soyisim >> musteri.cinsiyet >> musteri.odaNumarasi) {
        if (musteri.isim == arananIsim) {
            bulundu = true;
            cout << "Isim: " << musteri.isim << "\n"
                 << "Soyisim: " << musteri.soyisim << "\n"
                 << "Cinsiyet: " << musteri.cinsiyet << "\n"
                 << "Oda Numarasi: " << musteri.odaNumarasi << "\n"
                 << "------------------------\n";
            break;
        }
    }

    if (!bulundu) {
        cout << "Musteri bulunamadi!\n";
    }
}

// Müþteri sayýsýný sorgulayan fonksiyon
void MusteriSayisiniSorgula(ifstream& dosya) {
    int musteriSayisi = DosyadanMusteriSayisiniOku(dosya);
    cout << "Toplam Kayitli Musteri Sayisi: " << musteriSayisi << endl;
}

// Ana menüyü tasarlayan fonksiyon
void MusteriMenu() {
    // Dosyayý aç
    setlocale(LC_ALL, "Turkish");
    ifstream okumaDosyasi("musteri_bilgileri.txt");
    ofstream yazmaDosyasi("musteri_bilgileri.txt", ios::app);

    // Dosya açýlýp açýlamadýðýný kontrol et
    if (!yazmaDosyasi.is_open() || !okumaDosyasi.is_open()) {
        cout << "Dosya acma hatasi!" << endl;
        return;
    }

    // Baþlangýçta kayýtlý müþteri sayýsýný al
    int kayitliMusteriSayisi = DosyadanMusteriSayisiniOku(okumaDosyasi);
    cout << "Baslangicta Kayitli Musteri Sayisi: " << kayitliMusteriSayisi << endl;

    // Ana menü
    int secim;
    do {
        cout <<      "\n********************\n";
        cout <<      "*       MENU         *\n";
        cout <<      "* 1. Rezervasyon     *\n";
        cout <<      "* 2. Musteri Sil     *\n";
        cout <<      "* 3. Musteri Sayisi  *\n";
        cout <<      "* 4. Musteri Listele *\n";
        cout <<      "* 5. Musteri Ara     *\n";
        cout <<      "* 6. Cikis           *\n";
        cout <<      "**********************\n";
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
            MusteriSayisiniSorgula(okumaDosyasi);
            break;
        case 4:
            cout << "----- Tum Musteriler -----\n";
            MusterileriListele(okumaDosyasi);
            break;
        case 5:
            MusteriAra(okumaDosyasi);
            break;
        case 6:
            cout << "Programdan cikiliyor.\n";
            break;
        default:
            cout << "Gecersiz secim! Tekrar deneyin.\n";
        }
    } while (secim != 6);

    // Dosyalarý kapat
    okumaDosyasi.close();
    yazmaDosyasi.close();
}

int main() {
    MusteriMenu();
    return 0;
}


