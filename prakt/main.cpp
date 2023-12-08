#include <iostream>
#include "book.h"
#include <string>
using namespace std;

const int MAX_BOOKS = 5;
const int MAX_AUDIOBOOKS = 5; 

void Menu() {
    cout << "Меню:" << endl;
    cout << "1. Добавити книгу" << endl;
    cout << "2. Добавити аудіо книгу" << endl;
    cout << "3. Асортимент" << endl;
}

int main() {
    setlocale(LC_ALL, "uk_UA.utf8");

    Book books[MAX_BOOKS];
    Audiobook audiobooks[MAX_AUDIOBOOKS];

    int choice;
    int numBooks = 0;       
    int numAudiobooks = 0;  

    do {
        Menu();
        cout << "Введіть номер опції: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Добавити книгу" << endl;

            if (numBooks < MAX_BOOKS) {
                cout << "Введіть кількість книг: ";
                int numNewBooks;
                cin >> numNewBooks;

                for (int i = 0; i < numNewBooks; ++i) {
                    books[numBooks].input();
                    ++numBooks;
                }
            }
            else {
                cout << "Досягнуто максимальну кількість книг." << endl;
            }

            break;
        case 2:
            cout << "Добавити аудіокнигу" << endl;

            if (numAudiobooks < MAX_AUDIOBOOKS) {
                cout << "Введіть кількість аудіокниг: ";
                int numNewAudiobooks;
                cin >> numNewAudiobooks;

                for (int i = 0; i < numNewAudiobooks; ++i) {
                    audiobooks[numAudiobooks].input();
                    ++numAudiobooks;
                }
            }
            else {
                cout << "Досягнуто максимальну кількість аудіокниг." << endl;
            }

            break;
        case 3:
            cout << "Асортимент" << endl;
            cout << endl;
            cout << "Книги\t\t  " << "id\t" << "назва\t " << "автор\t  " << "видавництво    " << "рік публікації    " << "номер сторінки       " << "ціна    " << "Тверд.обклад." << endl;
            for (int i = 0; i < numBooks; ++i) {
                books[i].print();
            }
            cout << endl;
            cout << "Аудіо книга\t  " << "id\t" << "назва\t " << "автор\t  " << "видавництво\t " << "рік публікації    " << "тривалість запису    " << "ціна\t" << "Формат аудіозапису" << endl;
            for (int i = 0; i < numAudiobooks; ++i) {
                audiobooks[i].print();
            }

            break;
        default:
            cout << "Невірний вибір. Спробуйте знову." << endl;
            break;
        }

    } while (choice != 3);

    return 0;
}
