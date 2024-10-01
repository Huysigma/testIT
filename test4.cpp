// #include <iostream>
// using namespace std;
// void Huy(){
//     cout << "Ten: Tran Nguyen Van Huy\n"<< "tuoi: 18\n" << "lop: 24DT3\n" << "bi danh: VANHUYCN";
// }
// void Long(){
//     cout << "Ten: Tran Nguyen Van Long\n"<<"tuoi: 13\n" << "lop: 7\n" << "bi danh: LongProVip";
// }
// int main(){
//     int age;
//     cout << "nhap do tuoi cua ban: "; cin >> age;
//     if(age==18){
//         Huy();
//     } else if(age==13){
//         Long();
//     }
// }

//kiểm tra số nguyên tố
// #include<iostream>
// #include<math.h>
// using namespace std;

// bool nt(int n){
    
//     for(int i=2; i<= sqrt(n); i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"nhap n: ";
//     cin >> n;
//     if (n<2){
//         cout<<"vui long nhap cac so lon hon 2: ";
//     return 0;
//     }
//     for(int i=2;i<=n;i++){
//         if(nt(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

//Giải phương trình bậc 2
// #include<iostream>
// #include<math.h>
// using namespace std;
// void Huy(double a,double b, double c){
//     double D, x1, x2;
//      D=b*b-4*a*c;
//     if(D<0){
//         cout<<"pt vo nghiem";
//     }else if(D==0){
//         cout<<"pt co nghiem kep: "<<-b/(2*a) <<endl;
//     }else{
//         x1=(-b+sqrt(D))/(2*a);
//         x2=(-b-sqrt(D))/(2*a);
//         cout<<"pt co 2 nghiem: "<<x1<<", "<<x2<<endl;
//     }
// }
// int main(){
//     cout<<"hay nhap so: ";
//     double a, b, c;
//     cin>>a>>b>>c;
//    if(a==0){
//     cout<<"pt co 1 nghiem: "<<-c/b;
//    }else{
//     Huy(a, b, c);
//    }
// return 0;
// }
//lit nuoc
//can n lit nuoc
//a co 1 lit, b co 2 lit. gia su b=2a
//can dung so tien it nhat de mua nuoc
#include<iostream>
using namespace std;
main(){
    int n, t, a=1000, b=2000;
    cout<<"so lit nuoc can dung la: ";
    cin>>n;
    if(n%2==0){
        t=b*n;
        cout<<"vay so tien can dung la: "<<t;
    }else{
        t=(n/2)*b+a;
        cout<<"vay so tien can dung la: "<<t;
    }
    return 0;
}