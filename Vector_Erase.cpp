#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    vector<int> arr;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    int a, b, c;
    cin >> a;
    cin >> b >> c;
    arr.erase(arr.begin() + (a - 1));
    arr.erase(arr.begin() + (b-1), arr.begin() + (c - 1));
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
