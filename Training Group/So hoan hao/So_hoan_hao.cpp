#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int s = 0;
    for(int i = 1; i < n; i++){
        if (n % i == 0)
            s += i;
    }
    if (s == n)
        cout << "Dung" << endl;
    else
        cout << "Sai" << endl;

    getch();
    return 0;
}
