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
        cout << "1. C�mlenin kelimelerinin ilk harflerini birle�tirerek k�saltma yapma" << endl;
        cout << "2. C�mlenin k���k harflerini b�y�k harfe �evirme" << endl;
        cout << "3. C�mle i�erisindeki rakamlar� bulma, rakamlar� c�mleden ��kararak yeni string olu�turma" << endl;
        cout << "4. C�mleyi tersten yeni bir c�mle olarak de�i�kene atama" << endl;
        cout << "5. C�mle �zerinde kelime arama ve de�i�tirme" << endl;
        cout << "6. C�mleyi tamamen b�y�k harfe d�n��t�rme" << endl;
        cout << "7. C�mleyi tamamen k���k harfe d�n��t�rme" << endl;
        cout << "8. C�mledeki rakamlar� bulma ve say�s�n� yazd�rma" << endl;
        cout << "9. C�mledeki �nl� harflerin say�s�n� bulma" << endl;
        cout << "10. C�mledeki kelime say�s�n� yazd�rma" << endl;

        cout << "L�tfen bir se�enek girin (1-10): ";
        int option;
        cin >> option;
        cin.ignore(); // �nceki giri�i temizle

        string sentence;
        cout << "L�tfen bir c�mle girin: ";
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
            cout << "K�saltma: " << abbreviation << endl;
            break;
        }
        case 2:
        {
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                sentence[i] = toupper(sentence[i]);
            }
            cout << "B�y�k harfe �evrilen c�mle: " << sentence << endl;
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
            cout << "Rakams�z c�mle: " << withoutDigits << endl;
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
            cout << "Tersten c�mle: " << reversedSentence << endl;
            break;
        }
        case 5:
        {
            string searchWord, replaceWord;
            cout << "Aramak istedi�iniz kelimeyi girin: ";
            cin >> searchWord;
            cout << "De�i�tirmek istedi�iniz kelimeyi girin: ";
            cin >> replaceWord;
            size_t pos = sentence.find(searchWord);
            while (pos != string::npos)
            {
                sentence.replace(pos, searchWord.length(), replaceWord);
                pos = sentence.find(searchWord, pos + replaceWord.length());
            }
            cout << "Yeni c�mle: " << sentence << endl;
            break;
        }
        case 6:
        {
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                sentence[i] = toupper(sentence[i]);
            }
            cout << "B�y�k harfe d�n��t�r�len c�mle: " << sentence << endl;
            break;
        }
        case 7:
        {
            for (size_t i = 0; i < sentence.length(); ++i)
            {
                sentence[i] = tolower(sentence[i]);
            }
            cout << "K���k harfe d�n��t�r�len c�mle: " << sentence << endl;
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
            cout << "C�mledeki rakam say�s�: " << digitCount << endl;
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
            cout << "C�mledeki �nl� harf say�s�: " << vowelCount << endl;
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
            cout << "C�mledeki kelime say�s�: " << wordCount << endl;
            break;
        }
        default:
            cout << "Ge�ersiz se�enek!" << endl;
        }

        cout << "Tekrar se�mek ister misiniz? (e/h): ";
        cin >> choice;

    } while (tolower(choice) == 'e');

    cout << "Programdan ��k�l�yor." << endl;

    return 0;
}

