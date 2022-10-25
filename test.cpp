/************************************************************
 * You can use this file to test if your code is working
 * properly by designing your own test case and test code.
 *
 * We will only be providing test cases for Lab 1.1.
 *
 * To grade, we will compile your code and run it against
 * our own test suite. You should design your own tests in
 * this file to ensure that your code does what you expect.
 ************************************************************/

#include <iostream>
#include <string>

// Uncomment the .h files when you're ready to start testing
#include "Leet-Coding.h"
//#include "../Leet-Coding.h"

//#include "doubly-linked-list.h"
//#include "polynomial.h"

// Once uncommented, you will need to modify the CMakeLists.txt
// to add the .cpp file to be able to compile again.

// Note: This may require you to "rebuild" or "Reload CMake Project"

using namespace std;


#define ASSERT_TRUE(T) \
    if (!(T))          \
        return false;
#define ASSERT_FALSE(T) \
    if ((T))            \
        return false;


string get_status_str(bool status) {
    return status ? "TEST PASSED" : "TEST FAILED";
}

class RomanNumeralTest {
public:
    bool test1();
    bool test2();
    /*
    bool test3();
    bool test4();
    bool test5();
    bool test6();
    bool test7();
    bool test8();
    bool test9();
    bool test10();
     */
};



int main() {

    int grade = 0;
    RomanNumeralTest seq_test;

    // Some feedback about the tests.
    string seq_test_descriptions[2] = {
            "Test1: New empty list is valid",
            "Test2: insert_front() and insert_back() on zero-element list"
    };

    bool seq_test_results[2];
    seq_test_results[0] = seq_test.test1();
    seq_test_results[1] = seq_test.test2();


    cout << "SEQUENTIAL LIST TESTING RESULTS \n";
    cout << "******************************* \n";
    for (int i = 0; i < 2; ++i) {

        cout << seq_test_descriptions[i] << endl
             << get_status_str(seq_test_results[i]) << endl;

        if (seq_test_results[i])
            grade += 1;
    }
    cout << endl
         << "Total grade: " << grade << endl << endl;


    //
    // Can put additional tests bellow.
    //


    return 0;
}


// New empty list is valid
bool RomanNumeralTest::test1() {

    string rom = "LVIII" ;
    RomanNumeral main(rom);

    ASSERT_TRUE(main.count() == 58)

    return true;
}


// insert_front() and insert_back() on zero-element list
bool RomanNumeralTest::test2() {
/*
    unsigned int capacity = 5;
    SequentialList list1(capacity);
    SequentialList list2(capacity);

    ASSERT_TRUE(list1.insert_front(100))
    ASSERT_TRUE(list2.insert_back(100))

    ASSERT_TRUE(list1.size() == list2.size() && list1.size() == 1)
    ASSERT_TRUE(list1.data_ != NULL)
    ASSERT_TRUE(list2.data_ != NULL)
    ASSERT_TRUE(list1.select(0) == list2.select(0) && list1.select(0) == 100)
*/
    return true;
}


//
// Created by Carly Knibutat on 2022-05-30.
//
