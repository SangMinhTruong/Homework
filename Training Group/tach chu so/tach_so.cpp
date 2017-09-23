#include <iostream>
#include <conio.h>

using namespace std;

void tach(int n, int* tram, int* chuc, int* donvi){
    *donvi = n % 10;
    n = n/10;
    *chuc = n % 10;
    n = n/10;
    *tram = n % 10;
}

int main(){
    int n,tram,chuc,donvi;
    cout << "Nhap so <1000: ";
    cin >> n;

    tach(n, &tram, &chuc, &donvi);

    cout << "Hang tram: " << tram << endl;
    cout << "Hang chuc: " << chuc << endl;
    cout << "Hang don vi: " << donvi << endl;
    cout << n << " = " << tram*100 << " + " << chuc*10 << " + " << donvi << endl;

    getch();
    return 0;
}
