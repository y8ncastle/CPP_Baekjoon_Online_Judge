#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int arr[6], S[12] = {0,}, k;
    
    while (1) {
        for (int i=0; i<6; i++)
            arr[i] = i;
        
        cin >> k;
        
        for (int i=0; i<k; i++)
            cin >> S[i];
        
        while (1) {
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
                cout << '\n';
            }
            
            if (arr[0] > arr[1]) break;
        }
    }
    
    return 0;
}
