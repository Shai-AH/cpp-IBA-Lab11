#include <iostream>
using namespace std;
int volumeCalc(double a, double h){
    double vol = (a * a) * ((1.0/3.0) * h);
    return vol;
}

void getData(int &a, int &h){
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter h" << endl;
    cin >> h;
    cout << volumeCalc((double)a, (double)h);
}


int main(){
    int a, h;
    getData(a, h);
}