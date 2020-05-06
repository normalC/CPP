//: C03:PointerToFunction.cpp
// Defining and using a pointer to a function
#include <iostream>
using namespace std;

void func(void) {
  cout << "func() called..." << endl;
}

int main() {
  void (*fp)(void);  // Define a function pointer
  fp = func;  // Initialize it
  (*fp)();    // Dereferencing calls the function
  void (*fp2)(void) = func;  // Define and initialize
  (*fp2)();
} ///:~
// After the pointer 