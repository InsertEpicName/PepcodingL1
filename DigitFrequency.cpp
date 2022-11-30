#include <bits/stdc++.h>

using namespace std;

int digitfreq(int n, int key){
    int m=n;
    int rem;
    int ct=0;
    while(m!=0){
        rem=m%10;
        if(rem==key){
            ct++;
        }
        m/=10;
    }
    return ct;
}
int main()
{
    //Digit frequency
    cout<<digitfreq(99346928,9)<<endl;

    return 0;
}
