#include <iostream>
#include <iomanip>
#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;
// class Arithmetic
// Needs class Calculator, but not with inheritance
class Arithmetic{
        private:
                // data variables for different data types
                int intData;
                double doubleData;
                float floatData;
                // void printOperations()
                // template function
                template <class T2>
                void printOperations(T2 obj);

        public:
                // constructor to initialize variables
                Arithmetic(){intData=0;
                                doubleData=0;
                                floatData=0;}
                // Constructor to set variable values
                Arithmetic(int i, float f, double d){
                        intData=i;
                        doubleData=d;
                        floatData=f;}
                // functions for operations
                // for each data type
                void intOperations(Arithmetic obj);
                void doubleOperations(Arithmetic obj);
                void floatOperations(Arithmetic obj);
};

// void printOperations
// template function, prints object
template <class T2>
void Arithmetic::printOperations(T2 obj)
{
        // print out sum, logical &&, and greater than values for a given Calculator object
        cout << obj.getValue1() << " + " << obj.getValue2() << " = " << obj.getSum() << endl;
        cout << obj.getValue1() << " && " << obj.getValue2() << " = " << obj.getlogicalAND() << endl;
        cout << obj.getValue1() << " > " << obj.getValue2() << " = ";
        if (obj.isGreater()==1)
        {cout<< "true" << endl;}
        else {cout << "false" << endl; }
}

// void intOperations
// performs operations for type int
void Arithmetic::intOperations(Arithmetic obj){
        cout << "Integer operations for " << intData << ", " << obj.intData << endl;
        // create object Calculator of type Int
        Calculator<int> calcint(intData, obj.intData);
        // call operations for ints using printOperations()
        printOperations<Calculator<int> >(calcint);
}


// performs operations for type double
void Arithmetic::doubleOperations(Arithmetic obj){
        cout << "Double operations for " << doubleData << ", " << obj.doubleData << endl;
        // create object Calculator of type double
        Calculator<double> calcdouble(doubleData, obj.doubleData);
        // call operation for doubles using printOperations()
        printOperations<Calculator<double> >(calcdouble);
}

// void floatOperations
// performs operations for type float
void Arithmetic::floatOperations(Arithmetic obj){
        cout << "Float operations for " << floatData << ", " << obj.floatData << endl;
        // create object Calculator of type float
        Calculator<float> calcfloat(floatData, obj.floatData);
        // call operation for floats using printOperations()
        printOperations<Calculator<float> >(calcfloat);
}


int main()
{
// Create 1st object
 int int1 = 12;
 float f1 = 3.2;
 double d1 = 100.4;
 Arithmetic object1(int1, f1, d1);
 // Create 2nd object
 int int2 = 3;
 float f2 = 6.8;
 double d2 = 0.0;
 Arithmetic object2(int2, f2, d2);
// Check operation on integer data type
cout << "\nPrinting INTEGER operations..." << endl;
object1.intOperations(object2);
// Check operation on float data type
cout << "\nPrinting FLOAT operations..." << endl;
object1.floatOperations(object2);
// Check operation on double data type
cout << "\nPrinting DOUBLE operations..." << endl;
object1.doubleOperations(object2);
// end main
}
