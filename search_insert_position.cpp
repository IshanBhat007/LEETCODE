#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int first = 0;
    int last = n-1;
    while(first<=last){
        int middle = first+ (last-first)/ 2;
        if (arr[middle] == target){
            cout << middle;
            return 0;
        }
        else if (target >= arr[middle]){
            first = middle+1;
        }
        else{
            last =middle - 1;
        } 
    }
    cout << first;
    return 0;
