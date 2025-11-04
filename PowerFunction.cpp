#include <iostream>
using namespace std;
void powerfunc(int a, int b){
    int prod = 1;
    for(int i = 0; i < b; i ++){
        prod = prod * a;
    }
    cout << prod << endl;
    
}
int main(){
    int a , b;
    cout << "Enter Number: " << endl;
    cin >> a;
    cout << "Enter Power: " << endl;
    cin >> b;
    powerfunc(a, b);
}