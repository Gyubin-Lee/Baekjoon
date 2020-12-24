#include <iostream>

using namespace std;

void helper(int n, long *zero, long *one){
    if(n <= 1) return;
    else{
        int i = 2;
        while(i<n+1){
            zero[i] = zero[i-1] + zero[i-2];
            one[i] = one[i-1] + one[i-2];
            i++;
        }
    }
}

void solve(int* p, int n){
    int i=0;

    while(i<n){
        if(p[i] <= 1){
            if(p[i] == 0) cout << "1 0" << endl;
            else cout << "0 1" << endl;
            i++;
        } else{
            int t = p[i];
            long zero[t+1] = {1, 0,};
            long one[t+1] = {0, 1,};
            helper(t, zero, one);
            cout << zero[t] << " " << one[t] << endl;
            i++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    int i = 0;
    int temp;
    while(i<n){
        cin >> arr[i];
        i++;
    }
    solve(arr, n);
    return 0;
}