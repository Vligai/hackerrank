#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a;
    string b;
    string c;
    string x;
    string y;
    char n;
    char m;
    
    int len1;
    int len2;
    
    cin >> a;
    cin >> b;
    c = a + b;
    x = a;
    y = b;
    
    n = x[0];
    m = y[0];
    x[0] = m;
    y[0] = n;
    len1 = a.size();
    len2 = b.size();
    cout << len1 <<" "<< len2 << endl;
    cout << c << endl;
    cout << x << " " << y << endl;
    
    return 0;
}
