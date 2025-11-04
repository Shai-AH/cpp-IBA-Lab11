#include <iostream>
#include <string>
using namespace std;
void Compare(string str1, string str2){
    int flag = true;
    int size1 = str1.size();
    int size2 = str2.size();
    if(size1 < size2){
        for(int i = 0; i < size1; i ++){
            if(str1[i] != str2[i]){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << str2 << " is greater!";
        }
        else{
            cout << "Strings are equal";
        }
    }
    else if(size2 < size1){
        for(int i = 0; i < size2; i ++){
            if(str1[i] != str2[i]){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << str1 << " is greater!";
        }
        else{
            cout << "Strings are equal";
        }
    }
    else if(size2 = size1){
        for(int i = 0; i < size2; i ++){
            if(str1[i] != str2[i]){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << "Although Both strs has same size, but the are NOT EQUAL!";
        }
        else{
            cout << "Strings are equal";
        }
    }
}

int main(){
    string s1, s2;
    cout << "Enter first String;" << endl;
    cin >> s1;
    cout << "Enter second String;" << endl;
    cin >> s2;

    Compare(s1, s2);
}