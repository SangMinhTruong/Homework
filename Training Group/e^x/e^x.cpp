#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

//int fact(int n){
//    if (n == 0)
//        return 1;
//    else
//        return n*fact(n - 1);
//}

float phantu(float x, int i){
    float r = 1.;
    for (int j = 1; j <= i; j++){
        r *= x/j;
    }
    return r;
}

int main(){
    float x;
    cout << "Nhap x: ";
    cin >> x;

    double s = 1.;
    double t;
//    long m = 1;
    for (int i = 1; i <= 30; i++){
        t = phantu(x, i);
        s += t;
    }

    cout << "Ket qua: " << s << " ~ " << exp(x) << endl;

    getch();
    return 0;
}
