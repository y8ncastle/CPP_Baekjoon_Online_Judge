#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int arr[6], S[12], k;
    
    while (1) {
        cin >> k;
        
        if (k == 0) break;
        
        for (int i=0; i<6; i++)
            arr[i] = i;
        
        for (int i=0; i<k; i++)
            S[i] = 0;
        
        for (int i=0; i<k; i++)
            cin >> S[i];
        
        while (arr[0] <= arr[1]) {
            int check = 0;
            
            for (int i=1; i<6; i++) {
                if (arr[i] >= k) {
                    arr[i-1] += 1;
                    arr[i] = arr[i-1] + 1;
                    check = 1;
                }
            }
            
            if (check == 0) {
                for (int i=0; i<6; i++)
                    cout << S[arr[i]] << " ";
                arr[k-2] += 1;
            }
        }
    }
    
    return 0;
}
