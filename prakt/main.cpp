#include <iostream>
#include "book.h"
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "uk_UA.utf8");
	int id;
	string title;
	string author;
	string publisher;
	int yearOfPublication;
	int numberOfPages;
	int prise;
	bool availabilityOfHardcover;




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



	Book book(id, title, author, publisher, yearOfPublication, numberOfPages, prise, availabilityOfHardcover);

	book.print();




	return 0;
}
