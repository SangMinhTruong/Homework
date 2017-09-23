#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#define PI 3.14159265359

int fact(int n){
    if (n == 0)
        return 1;
    else
        return n*fact(n - 1);
}

float quidoi(float x){
    while (PI/2 < x || x < -PI/2){
        if (PI/2 < x && x < 3*PI/2) x = PI - x;
        else {
            if(PI/2 < x) x -= 2*PI;
            else x += 2*PI;
        }
    }
    return x;
}

int main(){
    float x;
    cout << "Nhap so do goc x do bang degree: ";
    cin >> x;

    float rad = x*PI/180;
    rad = quidoi(rad);
    float sine = rad;
    float t = rad;


    for (int i = 1; i <= 10; i++){
        t *= rad*rad*(-1);
        sine += t/fact(2*i + 1);
    }
    cout << "sin(" << x << ") = " << fixed << setprecision(2) << sine << endl;

    getch();
    return 0;
}
