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
    int num;
    string res="";
    cin >> num;
    while(num != 0){
        int digit = num%10;
        if(digit%2!=0){
            res += digit;     
    }
        num = num/10;
    }
    int finall=0;
        for (int i=res.length(); i>=0; i--){
            finall = finall *10 + res[i];
    }
    cout << finall;
    return 0;
}
