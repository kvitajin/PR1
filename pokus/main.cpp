#include <iostream>
#include <vector>

int main() {

    vector< vector<int> > matrix(m,vector<int>(n));

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    cout<<"::matrix::"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}