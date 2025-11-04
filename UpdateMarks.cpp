#include <iostream>

using namespace std;

void Update(int &marks){
    marks = marks + 10;
}
int main(){
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    Update(marks);
    cout << "Updated Marks = " << marks;
}