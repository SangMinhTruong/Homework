#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float x;
    int n;
    cout << "Nhap x, n: ";
    cin >> x >> n;

    float s = 0.;
    float t = 1;

    for (int i = 1; i <= n; i++){
        t *= x*x;
        s += t;
    }

    cout << "Tong la: " << s << endl;

    getch();
    return 0;
}
