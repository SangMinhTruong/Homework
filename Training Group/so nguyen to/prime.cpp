#include <iostream>
#include <conio.h>

using namespace std;

int isPrime(int n){
    int i = 2;
    while (true){
        if (n < 1)
            return 0;
        else if (i == n)
            return 1;
        else if (n % i == 0)
            return 0;
        i++;
    }
}

int main(){
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    if(isPrime(n)) cout << "Dung." << endl;
    else cout << "Sai." << endl;

    getch();
    return 0;
}
