#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    for(int i = 1; i <= n; i++)
        s += 1./(2*i);
    cout << "Tong la: " << s << endl;

    getch();
    return 0;
}
