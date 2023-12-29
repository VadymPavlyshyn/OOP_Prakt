
#pragma once
#include <iostream>
#include <string>
using namespace std;


class Book {
protected:
	int id;
	string title;
	string author;
	string publisher;
	int yearOfPublication;
	int numberOfPages;
	int prise;
	string availabilityOfHardcover;

public:
	virtual void input();
	virtual void print();
};






class Audiobook : public Book {
	int recordingDuration;
	string audioFileFormat;

public:
	void input() override;
	void print() override;
};



template <typename T>
class Vector {
	T array[10];
	int size;
	int capacity;
public:

	Vector() : size(0), capacity(10) {}

	int getSize(){
		return size;
	}

	int getCapacity(){
		return capacity;
	}

	

};