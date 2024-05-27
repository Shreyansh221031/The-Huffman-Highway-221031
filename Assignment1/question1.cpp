#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n*n;j++)
        {
            int check=(j/n);
            if(check%2==1)
            {
                if(j<((check+1)*n - i -1)) cout<< "  ";
                else cout<<(check+1)*n-j<<" ";
            }
            else 
            {
                if(j>check*n+i) cout<<"  ";
                else cout<<j+1-(check*n) << " ";
            }
        }
        cout<<"\n";
    }
    return 0;
}