#include <iostream>
using namespace std;

void display(int a, char b){
    for(int i = 0; i < a; i ++){
        cout << b;
    }
}

int main(){
    int a;
    char b;
    cout << "Enter Number: ";
    cin >> a;
    cout << "Enter Character: ";
    cin >> b;
    display(a, b);
}