#include <iostream>
#include <conio.h>

using namespace std;

float x, y;

void swap(float *x, float *y){
    float tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){

    cout << "Nhap hai gia tri can swap: ";
    cin >> x >> y;

    swap(&x, &y);

    cout << "Hai gia tri sau khi swap: " << x << " " << y << endl;

    getch();
    return 0;
}
