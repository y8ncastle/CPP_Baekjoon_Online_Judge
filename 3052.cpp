#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a, a_rmd, result=0, cnt[42]={0,};
    
    for (int i=0; i<10; i++) {
        cin >> a;
        a_rmd = a % 42;
        cnt[a_rmd]++;
    }
    
    for (int i=0; i<42; i++)
        if (cnt[i] > 0)
            result++;
            
    cout << result;
            
    return 0;
}
