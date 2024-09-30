// toán tử, hàm số mũ, căn
// lệnh if else đơn giản
//  toán logic:
//  AND: &&
//  OR: ||
//  NOT !=
#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int a=100;
    int b=++a;
    cout << a << endl << b << endl;
    int c=2;
    int d=8;
    int mu= pow(c, d);
    int can= sqrt(d);
    cout <<mu << " "<<can<<endl;
    //if else
    
    int H=100, G=10;
    if (H<G){
        cout<< H;
    } else {
        cout <<G << endl;
    }
    //bai tap tu lam nang cao
    int Huyage;
    cout << "nhap so tuoi cua anh huy: ";
    cin >> Huyage;
    if (Huyage > 18 && Huyage <100 ) {
        cout << "mctcr";
    } else if (Huyage < 18 && Huyage>0){
        cout << "mctc";
    } else {
        cout << "huy died";
    }

}