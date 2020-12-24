#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;

    cin >> N;
    int arr[N];

    int m;
    for(int i=0;i<N;i++){
        cin >> m;
        arr[i] = m;
    }
    sort(arr, arr+N);
    cout << arr[0]*arr[N-1] << endl;

    return 0;
}