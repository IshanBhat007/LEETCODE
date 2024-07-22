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

int fact(int f){
    int ans=1;
    for (int i =1; i<=f;i++){
        ans*=i;
    }
    return ans;
}
int main() {
    int n , r;
    cin >> n >> r;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ans2 = fact(r)/fact(r-n);
    cout<<ans2;
    return 0;
}
