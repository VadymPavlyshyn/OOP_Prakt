#pragma once
#include <iostream>
#include <string>
using namespace std;


class Book {
	int id;
	string title;
	string author;
	string publisher;
	int yearOfPublication;
	int numberOfPages;
	int prise;
	bool availabilityOfHardcover;


public:


	Book(int id, string title, string author, string publisher, int yearOfPublication, int numberOfPages, int prise, bool availabilityOfHardcover);




	void print();

};

class Audiobook {
	int id;
	string title;
	string author;
	string publisher;
	int yearOfPublication;
	int recordingDuration;
	int prise;
	string audioFileFormat;

public:

	Audiobook(int id, string title, string author, string publisher, int yearOfPublication, int recordingDuration, int prise, string audioFileFormat );


};
