#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    int flag=0;
	    cin>>a>>b>>c;
	    if(((a+b+c)<6) || ((a+b+c)>298))
	        cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	    
	   
	    
	}
	return 0;
}
