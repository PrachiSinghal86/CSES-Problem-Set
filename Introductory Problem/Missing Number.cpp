#include <iostream>

using namespace std;


int main()

{

    long int n,q=0,i;

    cin>>n;

    long int a[n];

   
 for(i=0;i<n-1;i++)

    {

        cin>>a[i];

        q=q+a[i];

        
    }

    cout<<(n*(n+1)/2)-q;

    return 0;
}
