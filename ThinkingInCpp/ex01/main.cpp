/**
Write a program that uses two nested for loops and the modulus
operator (%) to detect and print prime numbers (integral numbers
that are not evenly divisible by any other numbers except for themselves and 1).
**/

#include <iostream>

using namespace std;

int main() {

    const int limit = 10;
    int counter;

    for (int number = 2; number < limit; number++) {

        counter = 0;

        for (int i = 1; i <= number; i++)
            if (number % i == 0)
                ++counter;
        cout << "counter= " <<counter <<endl;
        if (2 == counter)
            cout << number << endl;
    }


return 0;
}
