//
// Created by Carly Knibutat on 2022-05-30.
//

#ifndef LEETCODINGFUN_LEET_CODING_H
#define LEETCODINGFUN_LEET_CODING_H

#include <iostream>
using namespace std;

class RomanNumeral {
public:
    // Can be seen outside as SequentialList::DataType
    //typedef int DataType;


private:
    friend class RomanNumeralTest;     // Befriend so tests have access to variables.
    string rom_;
    unsigned int index;

    //RomanNumeral();


    // Copy constructor. Declared private so we don't use it incorrectly.
    // RomanNumeral(const RomanNumeral& rhs) {}

    // Assignment operator. Declared private so we don't use it incorrectly.
    //RomanNumeral& operator=(const RomanNumeral& rhs) {}


public:
    // CONSTRUCTORS/DESTRUCTOR
    // Create a new SequentialList with the given number of elements.
    RomanNumeral(string rom);

    //Destroy this SequentialList, freeing all dynamically allocated memory.
    ~RomanNumeral();

    // ACCESSORS
    // Returns the number of elements in the list.
   // unsigned int size() const;

    // Returns the maximum number of elements the list can hold.
    //unsigned int capacity() const;

    unsigned int larger(unsigned char A, unsigned char B) const;
    unsigned int value(unsigned char ch) const;
    unsigned int count() const;
    //unsigned int main(unsigned string rom) const;


};



#endif //LEETCODINGFUN_LEET_CODING_H
