#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int betterrand(int range){
    int num = rand();
    num = num % range;
    return num;
}

int main(){
    srand(time(0));
    int size;
    cout << "Enter Size of Array: " << endl;
    cin >> size;
    int arr[size];
    int numbertime[11] = {0}; //for counting how many times a Number occurs
    for(int i = 0; i < size; i++){
        arr[i] = betterrand(11);
    }

    for(int i = 0; i < size; i++){
        numbertime[arr[i]] = numbertime[arr[i]] + 1;
    }

    for(int i = 0; i < 11; i++){
        if(numbertime[i] != 0){
            cout << i << " => " << numbertime[i] << " times" << endl;
        }
    }
}
