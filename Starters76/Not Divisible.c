#include <iostream>
#include <vector>

using namespace std;

void fun(int n)
{
    for(int i=0;i<n;i++)
    {
        if(!(i%2))
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
    cout<<endl;
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        fun(N);
    
    
    }
    return 0;
}
