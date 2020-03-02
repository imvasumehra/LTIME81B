#include <iostream>
using namespace std;

int main() {
    long t;
    cin>>t;
    while(t--)
    {
        long n,k,m,j,s=0,i;
        long a[100];
        char c;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>c;
            if(c=='H')
                a[i]=1;
            else
                a[i]=0;
        }
        m=n;
        i=n-1;
        while(k--)
        {
            if(a[i]==0){
                m--;
                i--;
            }
                
            else
            {
                m--;
                for(j=0;j<m;j++)
                    a[j]=1-a[j];
                i--;
            }
        }
        for(i=0;i<m;i++){
            s+=a[i];
        }
        cout<<s<<endl;
    }
	return 0;
}