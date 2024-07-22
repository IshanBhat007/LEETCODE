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
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    bool carry = true;
    for (int i = n - 1; i >= 0; --i) {
        if (carry) {
            if (digits[i] < 9) {
                digits[i]++;
                carry = false;
            } else {
                digits[i] = 0;
            }}}
    if (carry) {
        digits.insert(digits.begin(), 1);
    }
    for (int i = 0; i < digits.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << digits[i];
    }
    cout << endl;
    return 0;
}
