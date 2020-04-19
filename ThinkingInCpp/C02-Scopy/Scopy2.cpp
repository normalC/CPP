//: C02:Scopy.cpp//: C02:Scopy.cpp≤‚ ‘
// Copy one file to another, a line at a time// Copy one file to another, a line at a time≤‚ ‘
#include <string>#include <string>≤‚ ‘
#include <fstream>#include <fstream>≤‚ ‘
#include <iostream>#include <iostream>≤‚ ‘
using namespace std;using namespace std;≤‚ ‘
≤‚ ‘
int main() {int main() {≤‚ ‘
  ifstream in("main.cpp"); // Open for reading  ifstream in("main.cpp"); // Open for reading≤‚ ‘
  ofstream out("Scopy2.cpp"); // Open for writing  ofstream out("Scopy2.cpp"); // Open for writing≤‚ ‘
  string s="";  string s="";≤‚ ‘
  while(getline(in, s)) // Discards newline char  while(getline(in, s)) // Discards newline char≤‚ ‘
  {  {≤‚ ‘
≤‚ ‘
    s+=s+"ÊµãËØï"+"\n";    s+=s+"ÊµãËØï"+"\n";≤‚ ‘
/*    s+="dfsf";*//*    s+="dfsf";*/≤‚ ‘
    out<<s;    out<<s;≤‚ ‘
    std::cout<<s<<std::endl;    std::cout<<s<<std::endl;≤‚ ‘
  }  }≤‚ ‘
≤‚ ‘
} ///:~} ///:~≤‚ ‘
