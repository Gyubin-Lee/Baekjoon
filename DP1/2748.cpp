#include <iostream>

using namespace std;

long solve(int n){
    long dp[n+1];
    long t=0;
    
    while(t<n+1){
        if(t == 0) dp[t] = 0;
        else if(t==1) dp[t] = 1;
        else dp[t] = dp[t-1]+dp[t-2];
        t++;
    }
    return dp[n];
}


int main(){
    int n;
    cin >> n;

    cout << solve(n) << endl;
    return 0;
}