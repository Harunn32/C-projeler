#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    char choice;
    do {
        cout << "STRING KUTUPHANESI UYGULAMASI" << endl;
        cout << "1. Cümlenin kelimelerinin ilk harflerini birleþtirerek kýsaltma yapma" << endl;
        cout << "2. Cümlenin küçük harflerini büyük harfe çevirme" << endl;
        cout << "3. Cümle içerisindeki rakamlarý bulma, rakamlarý cümleden çýkararak yeni string oluþturma" << endl;
        cout << "4. Cümleyi tersten yeni bir cümle olarak deðiþkene atama" << endl;
        cout << "5. Cümle üzerinde kelime arama ve deðiþtirme" << endl;
        cout << "6. Cümleyi tamamen büyük harfe dönüþtürme" << endl;
        cout << "7. Cümleyi tamamen küçük harfe dönüþtürme" << endl;
        cout << "8. Cümledeki rakamlarý bulma ve sayýsýný yazdýrma" << endl;
        cout << "9. Cümledeki ünlü harflerin sayýsýný bulma" << endl;
        cout << "10. Cümledeki kelime sayýsýný yazdýrma" << endl;

        cout << "Lütfen bir seçenek girin (1-10): ";
        int option;
        cin >> option;
        cin.ignore(); // Önceki giriþi temizle

        string sentence;
        cout << "Lütfen bir cümle girin: ";
        getline(cin, sentence);

        switch (option)
        {
        case 1:
        {
            string abbreviation;
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                if (i == 0 || sentence[i - 1] == ' ')
                {
                    abbreviation += toupper(sentence[i]);
                }
            }
            cout << "Kýsaltma: " << abbreviation << endl;
            break;
        }
        case 2:
        {
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                sentence[i] = toupper(sentence[i]);
            }
            cout << "Büyük harfe çevrilen cümle: " << sentence << endl;
            break;
        }
        case 3:
        {
            string digits;
            string withoutDigits;
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                if (isdigit(sentence[i]))
                {
                    digits += sentence[i];
                }
                else
                {
                    withoutDigits += sentence[i];
                }
            }
            cout << "Rakamsýz cümle: " << withoutDigits << endl;
            cout << "Rakamlar: " << digits << endl;
            break;
        }
        case 4:
        {
            string reversedSentence = sentence;
            for (int i = 0, j = reversedSentence.length() - 1; i < j; ++i, --j)
            {
                swap(reversedSentence[i], reversedSentence[j]);
            }
            cout << "Tersten cümle: " << reversedSentence << endl;
            break;
        }
        case 5:
        {
            string searchWord, replaceWord;
            cout << "Aramak istediðiniz kelimeyi girin: ";
            cin >> searchWord;
            cout << "Deðiþtirmek istediðiniz kelimeyi girin: ";
            cin >> replaceWord;
            size_t pos = sentence.find(searchWord);
            while (pos != string::npos)
            {
                sentence.replace(pos, searchWord.length(), replaceWord);
                pos = sentence.find(searchWord, pos + replaceWord.length());
            }
            cout << "Yeni cümle: " << sentence << endl;
            break;
        }
        case 6:
        {
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                sentence[i] = toupper(sentence[i]);
            }
            cout << "Büyük harfe dönüþtürülen cümle: " << sentence << endl;
            break;
        }
        case 7:
        {
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                sentence[i] = tolower(sentence[i]);
            }
            cout << "Küçük harfe dönüþtürülen cümle: " << sentence << endl;
            break;
        }
        case 8:
        {
            int digitCount = 0;
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                if (isdigit(sentence[i]))
                {
                    digitCount++;
                }
            }
            cout << "Cümledeki rakam sayýsý: " << digitCount << endl;
            break;
        }
        case 9:
        {
            int vowelCount = 0;
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                if (tolower(sentence[i]) == 'a' || tolower(sentence[i]) == 'e' || tolower(sentence[i]) == 'i' || tolower(sentence[i]) == 'o' || tolower(sentence[i]) == 'u')
                {
                    vowelCount++;
                }
            }
            cout << "Cümledeki ünlü harf sayýsý: " << vowelCount << endl;
            break;
        }
        case 10:
        {
            int wordCount = 0;
            istringstream ss(sentence);
            string word;
            while (ss >> word)
            {
                wordCount++;
            }
            cout << "Cümledeki kelime sayýsý: " << wordCount << endl;
            break;
        }
        default:
            cout << "Geçersiz seçenek!" << endl;
        }

        cout << "Tekrar seçmek ister misiniz? (e/h): ";
        cin >> choice;

    } while (tolower(choice) == 'e');

    cout << "Programdan çýkýlýyor." << endl;

    return 0;
}

