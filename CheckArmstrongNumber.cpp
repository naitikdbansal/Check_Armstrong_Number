#include <iostream>
using namespace std;

int main(){
int a;
int b;
int c;
int d;
int e;
int f;
int g;

cout<<"Please enter 3-Digit number : ";
cin>>a;

b=a%10; //third digit
c=a/10; //quotient

d=c%10; //second digit
e= c/10; //quotient

f= e%10; //first digit
g= e/10;


f=f*f*f;
d=d*d*d;
b=b*b*b;

if((f+d+b)==a){

cout<<"Armstrong number!";

}

else{
    cout<<"Not Armstrong Number";
}


return 0;


}
