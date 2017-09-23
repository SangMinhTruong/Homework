#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x;
    int n;
    cout << "Nhap n: ";
    cin >> x >> n;

    float s = 0.;
    float t = 1./x;
    int i = 0;
    while (i <= n){
        t *= x*x;
        s += t;
        i++;
    }

    cout << "Tong la: " << s << endl;
    return 0;
}
