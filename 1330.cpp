#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a, b;
    
    cin >> a >> b;
    
    if (a > b)
        cout << ">";
    else if (a < b)
        cout << "<";
    else
        cout << "==";
        
    return 0;
}
