
#include <iostream>
#include <string>
#include "book.h"
using namespace std;






void Audiobook::input() {
	cout << "Запиc аудіокниги" << endl;
	cout << "id" << endl;
	cin >> id;
	cout << "Назва" << endl;
	cin >> title;
	cout << "Автор" << endl;
	cin >> author;
	cout << "Видавництво" << endl;
	cin >> publisher;
	cout << "Рік публікації" << endl;
	cin >> yearOfPublication;
	cout << "Тривалість запису" << endl;
	cin >> recordingDuration;
	cout << "Ціна" << endl;
	cin >> prise;
	cout << "Формат аудіо файлу" << endl;
	cin >> audioFileFormat;

}


void Audiobook::print() {
	cout << endl;
	cout << "Аудіо книга" << endl;
	cout << "id                    " << " " << id << endl;
	cout << "назва аудіо книги     " << " " << title << endl;
	cout << "автор                 " << " " << author << endl;
	cout << "видавництво           " << " " << publisher << endl;
	cout << "рік публікації        " << " " << yearOfPublication << endl;
	cout << "Тривалість запису     " << " " << recordingDuration << endl;
	cout << "ціна                  " << " " << prise << endl;
	cout << "формат аудіо файлу    " << " " << audioFileFormat << endl;
};