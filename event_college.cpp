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
    int n;
    cin >> n;
    int student_enter[n],student_leave[n];
    for (int i=0;i<n;i++){
        cin >> student_enter[i];
    }
    for (int i=0;i<n;i++){
        cin >> student_leave[i];
    }
    int current_std=0 , ans=0;
    for (int i = 0; i<n;i++){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    current_std += student_enter[i];
    current_std -= student_leave[i];
    ans = max(ans , current_std);
    }
    cout << ans;
    return 0;
}
