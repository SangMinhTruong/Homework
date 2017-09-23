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
    while (PI < x || x < 0){
        if (PI < x && x < 2*PI) x = - x;
        else{
            if (x > PI) x -= 2*PI;
            else if(x < 0) x += 2*PI;
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
    float cosine = 1;
    float t = 1;


    for (int i = 1; i <= 5; i++){
        t *= rad*rad*(-1);
        cosine += t/fact(2*i);
    }
    cout << "cos(" << x << ") = " << fixed << setprecision(2) << cosine << endl;

    getch();
    return 0;
}
