#include <iostream>
using namespace std;

int main() {
   int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int bus=(a/100)*b;
        int car=(a/4)*c;
        if(a%100!=0){
            int m=a%100;
             if(m%4==0)m=m/4;
             else m=m/4+1;
             m=(m*c)+bus;
             bus=bus+b;
             bus=min(bus,m);
        }
        if(a%4!=0){
            car=car+c;
        }
        cout<<min(car,bus)<<endl;
    }
	return 0;
}
