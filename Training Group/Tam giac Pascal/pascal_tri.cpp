#include <iostream>
#include <conio.h>

using namespace std;

int fact(int n){
    if (n == 0)
        return 1;
    else
        return n*fact(n - 1);
}

int tohop(int k, int n){
    return fact(n)/(fact(k)*fact(n - k));
}

int main(){
    int n;
    cout << "Nhap so mu nguyen: ";
    cin >> n;

    for (int i = 0; i <= n; i++){
        cout << string(n - i,'\t');
        for (int j = 0; j <= i;j++){
            cout << tohop(j ,i) << "\t\t";
        }
        cout << "\n";
    }

    getch();
    return 0;
}
