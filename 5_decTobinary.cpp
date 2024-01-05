#include<iostream>
#include<math.h>
using namespace std;
    int main(){
        int a;
        cin>>a;
        int sum=0;
        int i=0;
        while (a!=0){
            int bit =a & 1 ;
            sum= sum + (pow(10,i)*  bit );
            a = a >> 1;
            i++;
    }
        cout << sum << endl ;
    } 