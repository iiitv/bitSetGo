#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        long long n,c;
        cin>>c>>n;
        cout<<((c*n*n*n)%1000000007)<<"\n";
    }
    return 0;
}