#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n, counter, whole, rem, result;
    counter = 0;
    whole = 0;
    rem = 0;
    result = 0;
    cin >> n;
    while(n!=0){
        whole = n/2;
        rem = n-2*whole;
        n = whole;
        if(rem == 1){
            counter++;
            result = max(counter, result);
        }
        else
            counter = 0;
    }
    cout << result << endl;
    return 0;
}
