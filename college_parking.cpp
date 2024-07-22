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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1 , n2, val,count=0,lmx=0,gmx=0,R;
    cin >> n1 >> n2;
    int matrix[n1][n2];
    for(int i= 0; i<n1;i++){
        for (int j =0; j<n2;j++){
            cin >> val;
            if (val==1){
                 count++;
            }
        }
        lmx = max(lmx,count);
        if(lmx > gmx){
            gmx=lmx;
            R = i+ 1;
        }
          count=0;
    }
    cout << R;
    return 0;
}
