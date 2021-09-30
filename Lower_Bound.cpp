#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m, n, val;
    cin >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vector<int>::iterator j = lower_bound(arr.begin(), arr.end(), val);
        if (arr[j - arr.begin()] == val)
            cout << "Yes " << (j - arr.begin() + 1) << endl;
        else
            cout << "No " << (j - arr.begin() + 1) << endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
