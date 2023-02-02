#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,even=0,odd=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	        if(a[i]%2==0)
	            even++;
	       else
	            odd++;
	    }
	    if(x%2 ==0)
	    {
	        if(odd==0)
	            cout<<-1<<endl;
	        else
	            cout<<even<<endl;
	        
	    }
	    else
	    {
	        if(even%2==0)
	            cout<<even/2<<endl;
	       else
	            cout<<even/2 +1 <<endl;
	    }
	    
	    
	}
	return 0;
}
