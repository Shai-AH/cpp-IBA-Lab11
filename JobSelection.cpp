#include <iostream>
using namespace std;
void jobselect(int marks, int exp){
    if(marks >= 70 && exp >=2){
        cout << "Selected as Associate Developer";
    }
    else if(marks >= 60 && exp >= 1){
        cout << "Selected as Assistant Developer";
    }
    else if(marks >= 50 && exp == 1){
        cout << "Selected as Trainee Engineer";
    }
    else if(marks < 50 || exp < 1){
        cout << "Not Eligible";
    }
}
int main(){
    int exp, marks;
    cout << "Enter Experience 1-2 or Greater: " << endl;
    cin >> exp;
    cout << "Enter Marks: " << endl;
    cin >> marks;
    jobselect(marks, exp);
}