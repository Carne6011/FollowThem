#include "Palindrome.h"
#include <iostream>

Palindrome::Palindrome();{

}

Palindrome::~Palindrome();{

}

bool Palindrome::Check(int x) {
    string var = x;
    int end = len(x);
    int start  = 0;
    int half = end/2;

    for(int i=0; i <= half ; i++){
        if (var[start] =! var[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;


}



//
// Created by Carly Knibutat on 2022-09-11.
//
