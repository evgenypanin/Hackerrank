#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    int N, m;
    cin >> N;
    while (cin >> m)
        arr.push_back(m);
    for (auto a = arr.rbegin(); a != arr.rend(); a++)
        cout << *a << " ";
    return 0;
    
}
