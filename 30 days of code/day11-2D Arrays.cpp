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
using namespace std;


int main(){
    int result, max;
    bool flag = true; 
    vector< vector<int> > arr(6,vector<int>(6));
    result = 0;
    max = 0;
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    for (int i = 0; i <= 3; ++i){
        for (int j = 0; j <= 3; ++j){
            result = arr[i][j];
            //cout << arr[i][j] << endl;
            result = result + arr[i][j+1];
            result = result + arr[i][j+2];
            result = result + arr[i+1][j+1];
            result = result + arr[i+2][j];
            result = result + arr[i+2][j+1];
            result = result + arr[i+2][j+2];
            //cout << "HI" << endl;
            if(flag == true){
                max = result;
                flag = false;
            }
            if(result > max)
                max = result;
        }
        //cout << max << endl;
    }
    cout << max << endl;
    return 0;
}
