#include <iostream>
#include <conio.h>

using namespace std;

int lcm(int a, int b){
    while (a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int gcd(int a, int b){
    int d = lcm(a, b);
    return (a/d)*(b/d)*d;
}

int main(){
    int a,b;
    cout << "Nhap 2 so a, b: ";
    cin >> a >> b;

    cout << "UCLN la: " << lcm(a, b) << endl;
    cout << "BCNN la: " << gcd(a, b) << endl;

    getch();
    return 0;
}
