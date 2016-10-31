#ifndef Calculator_h
#define Calculator_h

// Class Calculator
// of template type T
template <class T>
class Calculator{
        private:
                // two variables of type T
                T value1;
                T value2;
        public:
                // constructor initializes to given values
                Calculator(){value1=0;
                             value2=0;}
                // Sets values from input
                Calculator (T v1, T v2){value1=v1;
                                        value2=v2;}
                // return value1
                T getValue1();
                // return value2
                T getValue2();
                // return sum
                T getSum();
                // uses logical &&
                int getlogicalAND();
                // uses relational operator <
                bool isGreater();
};


#endif
