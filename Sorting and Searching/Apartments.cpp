#include <bits/stdc++.h>


using namespace std;


int main()

{

    long n,m,k;

    cin>>n>>m>>k;

    int a[n],b[m],i=0,c=0,j=0;

    for(i=0;i<n;i++)

    cin>>a[i];

    for(j=0;j<m;j++)

    cin>>b[j];

    sort(a,a+n);

    sort(b,b+m);

    i=0,j=0;

    while(i<n&&j<m)

    {

       
        if(abs(a[i]-b[j])<=k)

        {

            i+=1;

            j+=1;

            c+=1;

        }

        else if(a[i]-b[j]>k)

        {

            j+=1;

        }

        else

        i+=1;

    }

    cout<<c;

    return 0;
}
