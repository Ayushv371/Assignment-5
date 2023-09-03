// Given two binary numbers, return the greatest of these numbers in decimal format.

#include<iostream>
using namespace std;
int main(){

int bin1, bin2, pow=1, dec1=0, dec2=0;
cout<<"Enter the first binary num: "<<endl;
cin>>bin1;

cout<<"Enter the second binary num: "<<endl;
cin>>bin2;

while(bin1>0){
    int lastdigit = (bin1%10); //10101
    dec1=lastdigit*pow+dec1;
    pow*=2;
    bin1/=10;
}

while(bin2>0){
    int lastdigit = (bin2%10);
    dec2+=lastdigit*pow;
    pow*=2;
    bin2/=10;
}

if(dec1>dec2){
    cout<<dec1<<" is greatest"<<endl;
}

else if(dec2>dec1){
    cout<<dec2<<" is greatest"<<endl;
}

else{
    cout<<"Both are equal"<<endl;
}
return 0;
}