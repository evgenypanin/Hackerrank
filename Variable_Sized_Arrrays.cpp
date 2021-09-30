#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    vector<vector <int>> m_arr;
    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        vector<int> e_arr;
        for (int j = 0; j < k; j++)
        {
            int c;
            cin >> c;
            e_arr.push_back(c);
        }
        m_arr.push_back(e_arr);
    }
    for (int i = 0; i < b; i++)
    {
        int n, m;
        cin >> n >> m;
        cout << m_arr[n][m] << endl;
    }
    
        
    return 0;
}
