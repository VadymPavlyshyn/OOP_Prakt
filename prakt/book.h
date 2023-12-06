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
    bool availabilityOfHardcover;

public:
    void input();


	




	void print();

};






class Audiobook : public Book {
    int recordingDuration;
  
    string audioFileFormat;

public:
    
    void input();
    void print();
};

