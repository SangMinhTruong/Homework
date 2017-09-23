#include <iostream>
#include <conio.h>

using namespace std;

string chuc(int n){
//    if(n < 20){
//        switch(n)
//        {
//
//        }
//    }
//    else{
        n -= (n % 10);
        switch(n)
        {
        case 20:
            return "twenty";
        case 30:
            return "thirty";
        case 40:
            return "fourty";
        case 50:
            return "fifty";
        case 60:
            return "sixty";
        case 70:
            return "seventy";
        case 80:
            return "eighty";
        case 90:
            return "ninety";
        }
//    }
    return "";
}

string donvi(int n){
    switch(n)
    {
    case 1:
        return "one";
    case 2:
        return "two";
    case 3:
        return "three";
    case 4:
        return "four";
    case 5:
        return "five";
    case 6:
        return "six";
    case 7:
        return "seven";
    case 8:
        return "eight";
    case 9:
        return "nine";
    case 10:
        return "ten";
    case 11:
        return "eleven";
    case 12:
        return "twelve";
    case 13:
        return "thirteen";
    case 14:
        return "fourteen";
    case 15:
        return "fifteen";
    case 16:
        return "sixteen";
    case 17:
        return "seventeen";
    case 18:
        return "eighteen";
    case 19:
        return "nineteen";
    }
}

string docchu(int n){
    string value;
    if (n >= 100){
        value += (donvi(n/100) + " " + "hundred" + " ");
        n %= 100;
    }
    if (n >= 20){
        value += chuc(n) + " ";
        n %= 10;
    }
    if (n != 0)
        value += donvi(n);
    return value;
}

int main(){
    long long n;
    cout << "Nhap so: ";
    cin >> n;

    string giatri;

    if (n == 0)
        cout << "zero";

//    cout << docchu(n);
    else{
        if (n < 0)
            giatri += "minus ";
            n = -n;

        if (n >= 1000000000){
            int tmp = (n - (n % 1000000000))/1000000000;
            giatri += docchu(tmp) + " " + "billion" + " ";
            n = n % 1000000000;
        }

        if (n >= 1000000){
            int tmp = (n - (n % 1000000))/1000000;
            giatri += docchu(tmp) + " " + "million" + " ";
            n = n % 1000000;
        }

        if (n >= 1000){
            int tmp = (n - (n % 1000))/1000;
            giatri += docchu(tmp) + " " + "thousand" + " ";
            n = n % 1000;
        }

        giatri += docchu(n);
    }
    cout << giatri << endl;
}


