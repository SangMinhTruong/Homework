#include <iostream>
#include <conio.h>

using namespace std;

int sochuso(int n){
    if (n == 0)
        return 0;
    else
        return 1 + sochuso(n/10);
}

int pow(int so, int mu){
    int value = 1;
    for(int i = 1; i <= mu; i++)
        value *= so;
    return value;
}

int tong(int n){
    int s = 0;
    int mu = sochuso(n);
    while(n != 0){
//        int test = (n % 10);
//        int test2 = pow(test,mu);
        s += pow((n % 10), mu);
        n = n/10;
    }
    return s;
}

int main(){
    int n;
    cout << "Nhap so: ";
    cin >> n;

    int a = sochuso(n);
    int b = tong(n);

    if(tong(n) == n) cout << "Dung." << endl;
    else cout << "Sai." << endl;

    getch();
    return 0;
}
