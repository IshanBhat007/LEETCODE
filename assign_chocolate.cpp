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
    int n1;
    cin >> n1;
    vector<int>s(n1);
    for(int i = 0; i<n1; i++){
        cin>>s[i];
    }
    int n2;
    cin >> n2;
    vector<int>g(n2);
    for (int j =0; j<n2; j++){
        cin >> g[j];
    }
    sort(s.begin(),s.end());
    sort(g.begin(),g.end());
    int i = 0;
    int j =0;
    while(i< s.size() && j < g.size()){
         if (g[j] >= s[i]){
             j++;
         }
        i++;
    }
    cout << j;

    return 0;
}
