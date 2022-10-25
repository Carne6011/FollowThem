#include "Leet-Coding.h"
#include <iostream>
using namespace std;

RomanNumeral::RomanNumeral(string rom) {
    rom_ = rom;

}

RomanNumeral::~RomanNumeral(){

}

unsigned int RomanNumeral::larger(unsigned char A, unsigned char B) const {
    int num[2] ;
    char let[2];
    let[0] = A;
    let[1] = B;

    for (int i = 0; i <= 1; i++){

        switch (let[i]) {
            case 'I':
                num[i] = 1;
                break;
            case 'V':
                num[i] = 5;
                break;
            case 'X':
                num[i] = 10;
                break;
            case 'L':
                num[i] = 50;
                break;
            case 'C':
                num[i] = 100;
                break;
            case 'D':
                num[i] = 500;
                break;
            case 'M':
                num[i] = 1000;
                break;

        }

        if (num[0] >= num[1]){
            return (1);
        }
        else {
            return (0);
        }

    }

    return true;
}

unsigned int RomanNumeral::value(unsigned char ch) const {
    switch (ch) {
        case 'I':
            return (1);
            break;
        case 'V':
            return (5);
            break;
        case 'X':
            return (10);
            break;
        case 'L':
            return (50);
            break;
        case 'C':
            return (100);
            break;
        case 'D':
            return (500);
            break;
        case 'M':
            return (1000);
            break;

    }
}

unsigned int RomanNumeral::count() const{
        int check = 0;
        int num = 0;

        char A = 'n';
        char B = 'n';

        for (int i = 0; i < (rom_.length() -1 ); i ++){
            A = rom_[i];
            B = rom_[i+1];
            check = larger(A,B);

            switch (check){
                case '1':
                    num = num + value(A);
                    break;
                case '0':
                    num = num - value(A);
                    break;

            }

        }
        num = num + value(rom_[(rom_.length()-1)]);

        cout <<  num << endl;

        return num;
    }


