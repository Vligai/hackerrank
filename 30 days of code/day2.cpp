#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float n;
    float n1, n2;
    float tip, tax, total;
    total = 0;
    tip = 0;
    tax = 0;
    cin >> n;
    cin >> n1;
    cin >> n2;
    tip = n1/100;
    tip = n * tip;
    //cout << "Tip is " << tip << endl;
    tax = n2/100;
    tax = n * tax;
    //cout << "Tax is " << tax << endl;
    total = round(n + tax + tip);
    cout << "The total meal cost is " << total << " dollars."<< endl;
    return 0;
}