#include <iostream>
#include <cmath>
#include "Calculator.h"
using namespace std;

// getValue1()
// returns value1
template <class T>
T Calculator<T>::getValue1(){
        // return value1
        return value1;
}
// getValue2()
// returns value2
template <class T>
T Calculator<T>::getValue2(){
        // return value2
        return value2;
}

// getSum()
// returns sum
template <class T>
T Calculator<T>::getSum(){
        // creates variable sum of type T
        // returns this value as
        // the sum of value 1 and value 2
        T sum;
        sum = value1 + value2;
        return (sum);
}


// int getlogicalAND()
// uses operator &&
template <class T>
int Calculator<T>::getlogicalAND(){
        // check if both value1 and value2
        // are greater than zero
        // if true, return 1
        // else, return 0
        if (value1 > 0 && value2 > 0)
        { return 1; }
        else
        { return 0; }
}

// bool isGreater()
// returns if value1 is greater value using <
template <class T>
bool Calculator<T>::isGreater(){
        // if value1 is greater than value2, return false
        // if value1 is less than value2, return true
        if (value1 > value2){
        return true; }
        else {
        return false; }
}