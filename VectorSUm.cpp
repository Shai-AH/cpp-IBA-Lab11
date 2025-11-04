#include <iostream>
#include <vector>
using namespace std;

void insertvector(vector <int>&v1, int n){
    for(int i = 0; i < n; i++){
        int x;
        cout << "Enter Element " << i + 1 << endl;
        cin >> x;
        v1.push_back(x);
    }
}
void sumvector(vector <int> v1){
    int sum = 0;
    for(int i = 0; i < v1.size(); i ++){
        sum = sum + v1[i];
    }
    cout << sum;
}

int main(){
    int n;
    vector <int> v1;
    cout << "How many Numbers?: " << endl;
    cin >> n;
    insertvector(v1, n);
    sumvector(v1);
}