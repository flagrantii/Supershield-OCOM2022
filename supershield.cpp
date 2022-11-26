#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,n,m,nn;
    char ch;
    cin >> ch >> n >> m;
    nn = 2*n+1;
    for (i=0;i<nn*m;i++)
    {
        for (j=0;j<nn*m;j++)
            if (i==j || i+j==nn*m-1) cout << '#'; else
            if (i%nn==n || j%nn==n || i%nn==j%nn || i%nn+j%nn==2*n) cout << '+'; else
            if (i%nn+n>=j%nn && i%nn<=j%nn+n && i%nn+j%nn>=n && i%nn+j%nn<=3*n)
                cout << ch; else cout << '.';
        cout << endl;
    }
}
