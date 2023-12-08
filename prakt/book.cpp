#include "book.h"
#include <iostream>
#include <string>
using namespace std;





void Book::input() {
	cout << "Запис книги" << endl;
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
	cout << "Кількість сторінок" << endl;
	cin >> numberOfPages;
	cout << "Ціна" << endl;
	cin >> prise;
	cout << "Наявність тверої обкладинки  Так/ні" << endl;
	cin >> availabilityOfHardcover;

};




void Book::print() {
	cout <<"\t\t  " << id << "\t" << title << "\t " << author << "\t  " << publisher << "\t\t " << yearOfPublication << "\t\t   " << numberOfPages << "\t\t\t" << prise << "\t" << availabilityOfHardcover << endl;

};