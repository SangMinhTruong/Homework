#include <iostream>
#include <conio.h>

using namespace std;

int isLeap(int y){
    if (y % 4 == 0){
        if (y % 100 == 0 && y % 400 != 0)
            return 0;
        else
            return 1;
    }
    return 0;
}

int daysInMonth(int m, int y){
    switch(m){
    case 2:
        if (isLeap(y))
            return 29;
        else
            return 28;
    case 4:
        return 30;
    case 6:
        return 30;
    case 9:
        return 30;
    case 11:
        return 30;
    default:
        return 31;
    }
}

int daysInYear(int m, int y){
    int days = 0;
    for (int i = 1; i <= m; i++){
        days += daysInMonth(i, y);
    }
    return days;
}

int dayOfWeek(int d, int m, int y){
    int namnhuan = ((y - 1)/4 - (y - 1)/100 + (y - 1)/400);
    int tongngay = 365*(y - 1 - namnhuan) + 366*namnhuan + daysInYear(m - 1, y) + d;
    int day_of_week = tongngay % 7;

    return day_of_week + 1;
}

int printC(int m, int y){
    cout << "Year:\t" << y << endl;
    cout << "Month:\t" << m << endl;
    //cout << dayOfWeek(1, m, y) << endl;
    cout << "Su\tMo\tTu\tWe\tTh\tFr\tSa\n";

    int pos = 1;
    for (int i = 1; i < dayOfWeek(1, m, y); i++){
        cout << "\t";
        pos++;
    }

    for (int i = 1; i <= daysInMonth(m, y); i++){
        if (pos == 8) {
            cout << "\n";
            pos = 1;
        }
        cout << i <<"\t";
        pos++;
    }
}

int main(){
    int y;
    cout << "Nhap nam: ";
    cin >> y;
    cout << string(50, '-') << "\n";
    for (int i = 1; i <= 12;i++){
        printC(i, y);
        cout << "\n";
        cout << string(50, '-') << "\n";
    }

    getch();
    return 0;
}
