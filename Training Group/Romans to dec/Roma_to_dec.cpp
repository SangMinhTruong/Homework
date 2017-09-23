#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int giatri(char c){
    switch(c){
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
    return -1;

}

string upper(string s){
    for (int i = 0; i < s.length();i++){
        s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
    string s;
    cout << "Nhap so la ma: ";
    cin >> s;
    s = upper(s);

    int ketqua = 0;
    while (s != ""){
        int v1 = giatri(s[0]);
        if (s.length() > 1){
            int v2 = giatri(s[1]);
            if (v1 < v2){
                ketqua += (v2 - v1);
                s = s.substr(2);
                }
            else{
            ketqua += v1;
            s = s.substr(1);
            }
        }else{
            ketqua += v1;
            s = s.substr(1);
            }
    }
    cout << ketqua << endl;

    getch();
    return 0;
}
