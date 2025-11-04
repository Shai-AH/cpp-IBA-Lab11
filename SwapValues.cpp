#include <iostream>
using namespace std;

void Swap(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "After Swap: a = " << a << ", b = " << b << endl;
}