//btapK
//tinh hieu
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
    cout<<"hieu hai so nguyen la: "<<abs(a-b);
    return 0;
}
//tinh chan le
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a
    if(a%2==0){
        cout<<"so chan"
    }else{
        cout<<"so le"
    }
    return 0;
}
//vien da
//S=n*m
//S da=a*a; a*a*x=S=m*n
#include<iostream>
using namespace std;
main(){
    int a,m,n,x,S;
    cout<<"nhap chieu dai, chieu rong san: ";
    cin>>m>>n;
    cout<<"nhap chieu dai canh vien da: ";
    cin>>a;
    S=m*n;
    x=S/(a*a);
    cout<<"dien tich san la: "<<S<<endl<<"so vien da can dung la: "<<x;
    return 0;
}
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
//con ech
//right=a; gs=2
//left=b; gs=1
//tinh toa do con ech sau khi nhay n lan
//VD: r=5, L=5=>x=5 neu +r=x+a; neu +l=x-a
//logic if k%2==0 td=(a-b)*(k/2); else td=(a-b)*(k/2)+a
#include<iostream>
using namespace std;
main(){
    int a,b,k,td;
    cout<<"nhap so buoc nhay: ";cin>>k;
    cout<<"nhap chieu dai buoc nhay ben phai: ";cin>>a;
    cout<<"nhap chieu dai buoc nhay ben trai: ";cin>>b;
    if(k%2==0){
        td=(a-b)*(k/2);
        cout<<"vay toa do moi la: "<<td;
    }else{
        td=(a-b)*(k/2)+a;
        cout<<"vay toa do moi la: "<<td;
    }
return 0;
}
//jack 5 cu
//gia su J trich 5% so tien de mua qua
//so luong ve: n
//gia banl t
//lenh else if don gian
#include<iostream>
using namespace std;
void Jack(int S){
    if((5*S)/100>=500000){
        cout<<"jack promax";
    }else if(200000<=(5*S)/100<=500000){
        cout<<"jack pro";
    }else{
        cout<<"jack db";
    }
    return;
}
main(){
    int n, t, S;
    cout<<"so luong nguoi xem la: ";cin>>n;
    cout<<"gia ve la: ";cin>>t;
    S=n*t;
    if(n<0){
        cout<<"ditme bieu dien cho ma coi a?";
    }else{
     Jack(S);
    }
}
// kiem tra tinh doi xung
// 