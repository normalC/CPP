//: C03:FunctionTable.cpp
// Using an array of pointers to functions
#include <iostream>
using namespace std;

// A macro to define dummy functions:
#define DF(N) void N() { \
   cout << "function " #N " called..." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void (*func_table[])() = { a, b, c, d, e, f, g };

int main() {
  while(1) {
    cout << "press a key from 'a' to 'g' "
      "or q to quit" << endl;
    char c, cr;
    cin.get(c); cin.get(cr); // second one for CR
    if ( c == 'q' ) 
      break; // ... out of while(1)
    if ( c < 'a' || c > 'g' ) 
      continue;
    cout << "c - 'a':"<<c - 'a'<< endl;
	cout <<func_table[c - 'a']<< endl;
    (*func_table[c - 'a'])();
  }
} ///:~


