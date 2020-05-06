/**
Modify FunctionTable.cpp so that each function returns a string (instead of printing out a message)
and so that this value is printed inside of main().
**/

#include <iostream>
#include <string>

using namespace std;

// A macro to define dummy functions:
#define DF(N) string N() { \
   return "function " #N " called..."; }

DF(a)
DF(b)
DF(c)
DF(d)
/*
string a() { return "function " "a" " called..."; }
string b() { return "function " "b" " called..."; }
string c() { return "function " "c" " called..."; }
string d() { return "function " "d" " called..."; }
*/
string (*func_table[])() = { a, b, c, d };

int main() {

  while(1) {
    cout << "press a key from 'a' to 'd' "
      "or q to quit" << endl;
    char c, cr;
    cin.get(c); cin.get(cr); // second one for CR
    if ( c == 'q' )
      break; // ... out of while(1)
    if ( c < 'a' || c > 'd' )
      continue;
    
    cout << (*func_table[c - 'a'])() << endl;
	cout<<&func_table[c - 'a']<<endl;
  }
}
