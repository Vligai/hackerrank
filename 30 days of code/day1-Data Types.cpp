//Day 1
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	// Declare second integer, double, and String variables.
    int num;
    double num2;
    string str;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> num;
    cin >> num2;
    getline(cin >> ws, str);
    // Print the sum of both integer variables on a new line.
    cout << i+num << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + num2 << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    str = s + str;
    cout << str << endl;
	return 0;
}