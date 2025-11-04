#include <iostream>
using namespace std;
int square(int a){
    int res = a * a;
    return res;
}
int cube(int a){
    int res = a * a * a;
    return res;
}
int main(){
    int n;
    cout << "Enter a number: "<< endl;
    cin >> n;

    int result = square(n) + cube(n);
    cout << "Square = " << square(n) << " Cube= " << cube(n) << " ,Sum= " << result;
}