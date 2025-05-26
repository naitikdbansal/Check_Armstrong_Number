#include <iostream>
using namespace std;

int main(){

int x;
int y;
int z;
long long a;
long long b;
long long c;
long long d;
long int m;
long int n;

cout<<"Enter First digit of number : ";
cin>>x;

// switch(x){
// case 0 : 
// break;
//     case 1 : 
//     break;
//     case 2 : 
//     break;
//     case 3 : 
// break;
//     case 4 : 
// break;
//     case 5 : 
// break;
//     case 6 : 
// break;
//     case 7 : 
// break;
//     case 8 : 
// break;
//     case 9 : 
// break;
//     default : cout<<"Please Enter only ONE INTEGER value"<<endl;
//     break;
// }



cout<<"Enter Second digit of number : ";
cin>>y;

// switch(y){
//     case 0 : 
// break;
//     case 1 : 
// break;
//     case 2 : 
// break;
//     case 3 : 
// break;
//     case 4 : 
// break;
//     case 5 : 
// break;
//     case 6 : 
// break;
//     case 7 : 
// break;
//     case 8 : 
// break;
//     case 9 : 
// break;
//     default : cout<<"Please Enter only ONE INTEGER value"<<endl;
//     break;
// }

cout<<"Enter Third digit of number : ";
cin>>z;
// switch(z){
// case 0 : 
// break;
//     case 1 : 
// break;
//     case 2 : 
// break;
//     case 3 : 
// break;
//     case 4 : 
// break;
//     case 5 : 
// break;
//     case 6 : 
// break;
//     case 7 : 
// break;
//     case 8 : 
// break;
//     case 9 : 
// break;
//     default : cout<<"Please Enter only ONE INTEGER value"<<endl;
//     break;
// }

m=x*100;
n=y*10;
d=m+n+z;

a=x*x*x;
b=y*y*y;
c=z*z*z;

if(a+b+c==d){
    cout<<"Armstrong number!"<<endl;
}
else{
    cout<<"NOT ARMSTRONG NUMBER"<<endl;
}


return 0;


}


//solve again using quotint modulo method


