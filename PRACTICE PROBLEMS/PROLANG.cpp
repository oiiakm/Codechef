#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if(a+b==a1+b1||a+b==b1+a1)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(a+b==a2+b2||a+b==b2+a2)
	    {
	        cout<<"2"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
