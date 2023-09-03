// Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include<iostream>
using namespace std;
int main(){

int num=1, sum=0, bin=0, pow=1;

while(num<=5){
    sum+= num;
    num++;
}
cout<<"Decimal num: "<<sum<<endl;

while(sum>0){
    int rem = (sum%2);
    bin = (rem*pow+bin);
    pow*=10;
    sum/=2;
}

cout<<"Binary num: "<<bin;
return 0;
}