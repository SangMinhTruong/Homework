#include <iostream>
#include <conio.h>

using namespace std;

int maxin4(int x, int y, int z, int t){
    int m = x;
    if(m < y) m = y;
    if(m < z) m = z;
    if(m < t) m = t;
    return m;
}

int main(){
    int x,y,z,t;
    cout << "Nhap 4 so: ";
    cin >> x >> y >> z >> t;

    cout << "So lon nhat la: " << maxin4(x,y,z,t) << endl;

    getch();
    return 0;
}
