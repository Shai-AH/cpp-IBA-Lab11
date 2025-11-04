#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector <int> v1){
    vector <int> v2;
    for(int i = v1.size() - 1; i >= 0; i--){
        v2.push_back(v1[i]);
    }
    cout << "Reversed Order: " << endl;
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << endl;
    }
}
int main(){
    vector <int> v1;
    for(int i = 0; i < 4; i++){
        int x;
        cout << "Enter Element " << i + 1 << endl;
        cin >> x;
        v1.push_back(x);
    }
    Reverse(v1);
}