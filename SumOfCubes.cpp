#include <iostream>
using namespace std;

void sumcubes(int n){
    int sum = 0;
    for(int i = n; i > 0; i--){
        sum = sum + (i * i * i);
    }
    cout << sum;
}

int main(){
    cout << "Enter Number: " << endl;
    int n;
    cin >> n;
    sumcubes(n);
}