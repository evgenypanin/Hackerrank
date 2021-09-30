#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    vector<int> arr = {a, b, c , d};
    int max = *max_element(arr.begin(), arr.end());
    return max;
    
}
