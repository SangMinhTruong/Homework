#include <iostream>
#include <conio.h>

using namespace std;

float pow(float x, int n){
    if (n == 0)
        return 1;
    else
        return x*pow(x, n - 1);
}

float tong(float s, float x, int n){
    if (n == 0)
        return s;
    else
        return tong(s + pow(x,n), x, n - 1);
}

int main(){
    float x;
    int n;
    cout << "Nhap x(float), n(int): ";
    cin >> x >> n;

    cout << "Tong la: " << tong(0, x, n) << endl;

    getch();
    return 0;
}
