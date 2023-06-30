#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int s=(x*5);
        if(y<=s)
        {
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
	// your code goes here
	return 0;
}