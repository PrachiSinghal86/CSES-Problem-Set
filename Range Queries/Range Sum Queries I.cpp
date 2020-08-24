#include <iostream>

using namespace std;


int main()

{

    long int n,q,i;

    cin>>n>>q;

    long int a[n],ata,b;

    cin>>a[0];

    for(i=1;i<n;i++)

    {

        cin>>a[i];

        a[i]+=a[i-1];

        
    }

    for(i=0;i<q;i++)

    {

        cin>>ata>>b;

        if(ata==1)

        cout<<a[b-1]<<endl;

        else

        cout<<a[b-1]-a[ata-2]<<endl;

    }
    return 0;

}
