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
    int n ,maxx=0;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if (arr[i] > maxx){
            maxx = arr[i];
            cnt++;
        }
    }
        cout << cnt;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
