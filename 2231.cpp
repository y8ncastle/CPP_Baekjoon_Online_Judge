#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, m, sum, small=0, cnt=0, i=1;
    
    cin >> n;
    
    while (i < n) {
        if (i/1000000 == 1) cnt=7;
        else if (i/100000 > 0) cnt=6;
        else if (i/10000 > 0) cnt=5;
        else if (i/1000 > 0) cnt=4;
        else if (i/100 > 0) cnt=3;
        else if (i/10 > 0) cnt=2;
        else cnt=1;
        
        m = i;
        sum = m;
        
        for (int j=0; j<cnt; j++) {
            sum += m % 10;
            m /= 10;
        }                
            
        if (n == sum) {
            small = i;
            break;
        } else i++;
    }
    
    cout << small;  
    
    return 0;
}
