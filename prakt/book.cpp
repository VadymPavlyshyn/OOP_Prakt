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
	cout << "Наявність тверої обкладинки  true/false" << endl;
	cin >> availabilityOfHardcover;
	
};




void Book::print() {
	cout << endl;
	cout << "id            " << " " << id << endl;
	cout << "назва книги   " << " " << title << endl;
	cout << "автор         " << " " << author << endl;
	cout << "видавництво   " << " " << publisher << endl;
	cout << "рік публікації" << " " << yearOfPublication << endl;
	cout << "номер сторінки" << " " << numberOfPages << endl;
	cout << "ціна          " << " " << prise << endl;
	if (this->availabilityOfHardcover)
		cout << "З твердою обкладинкою\n" << endl;
	else
		cout << "З м'якою обкладинкою\n" << endl;

};
