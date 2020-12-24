#include <iostream>

using namespace std;

int main(){
    int N;

    cin >> N;

    for(int i=2;N>1;){
        if(N%i ==0){
            cout << i << endl;
            N = N/i;
        } else i++;
    }

    return 0;
}