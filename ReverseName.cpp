#include <iostream>
#include <string>
using namespace std;

void reverse(string Sres, int size){
    for(int i = size - 1; i >= 0; i--){
        cout << Sres[i];
    }
}

int main(){
    string S1, S2, Sres;
    cout << "Enter First Name" << endl;
    cin >> S1;
    cout << "Enter Second Name" << endl;
    cin >> S2;
    Sres = S1 + ' ' + S2;
    int size = Sres.size();
    reverse(Sres, size);
}

