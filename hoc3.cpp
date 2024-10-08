// #include<iostream>
// #include<math.h>
// using namespace std;
// int tinhtong(int n){
//     int S=1;
//     for(int i=1;i<=n;i++){
//         S=S*pow(i,i);
//     }
//     return S;
// }

// int main(){
//     int n, Sum;
//     cout<<"nhap so tu nhien n: ";cin>>n;
//     if(n<0){
//         cout<<"vui long nhap n>0!";
//     }else{
//         Sum= tinhtong(n);
//         cout<<"vay tong bang: "<<Sum;
//     }
// }

//
#include<iostream>
using namespace std;
int main(){
int a,b,c,maxx;
cout << "nhap so a,b,c ";
cin >>a>>b>>c;
maxx==a;
if(maxx<b){
    maxx=b;
}
if(maxx<c){
    maxx=c;
}
cout<<"vay max la: "<<maxx;
}