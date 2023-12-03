#include "book.h"
#include <iostream>
#include <string>
using namespace std;



Book::Book(int id, string title, string author, string publisher, int yearOfPublication, int numberOfPages, int prise, bool availabilityOfHardcover) {
	this->id = id;
	this->title = title;
	this->author = author;
	this->publisher = publisher;
	this->yearOfPublication = yearOfPublication;
	this->numberOfPages = numberOfPages;
	this->prise = prise;
	this->availabilityOfHardcover = availabilityOfHardcover;
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
		cout << "З твердою обкладинкою.\n" << endl;
	else
		cout << "З м'якою обкладинкою.\n" << endl;

};
