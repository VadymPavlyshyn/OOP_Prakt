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
	int recordingDuration;
	int numberOfPages;
	int prise;
	bool availabilityOfHardcover;
	string audioFileFormat;

	Book book;
	
	Audiobook audiobook;
	audiobook.input();
	book.input();
	
	book.print();
	audiobook.print();

	return 0;
}
