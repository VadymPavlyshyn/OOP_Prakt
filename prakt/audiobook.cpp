
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
	cout << "\t\t  " << id << "\t" << title << "\t " << author << "\t  " << publisher << "\t\t "<< yearOfPublication << "\t\t   " << recordingDuration << "\t\t\t" << prise << "\t" << audioFileFormat << endl;
};