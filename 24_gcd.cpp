#include <iostream>
using namespace std;

    int gcd(int a, int b) {
   if (a == 0 || b == 0)
   return 0;
   else if (a == b)
   return a;
   else if (a > b)
   return gcd(a-b, b);
   else return gcd(a, b-a);
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}