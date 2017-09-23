#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double pi;
    int t = -1;
    for (int i = 1; i <= 5000; i++){
        t = -t;
        pi += t*1./(2*i - 1);
    }

    cout << "Pi ~ " << fixed << setprecision(30) << pi*4 << endl;

    getch();
    return 0;
}
