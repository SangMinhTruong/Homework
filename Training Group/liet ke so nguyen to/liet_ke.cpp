#include <iostream>
#include <conio.h>

using namespace std;

int isPrime(int n){
    int uoc = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0)
            uoc ++;
    }
    if (uoc == 2)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;

    getch();
    return 0;
}
