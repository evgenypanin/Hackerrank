#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int n, m;
    n = (int) a.size();
    m = (int) b.size();
    cout << n << " " << m << endl;
    cout << a + b << endl;
    string temp;
    temp = a;
    a[0] = b[0];
    b[0] = temp[0];
    cout << a << " " << b;
  
    return 0;
}
