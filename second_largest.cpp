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
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    //cout << a <<" " << b << " " << c;
    
    if((a > b && a < c) || (a > c && a< b)){
        cout << a;
    }
    else if((b > a && b  < c) || (b >c && b<a)){
        cout << b;
    }
    else{
        cout << c;
    }
    return 0;
}
