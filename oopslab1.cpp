/*  LAB - 1 */

#include<iostream>

#include<math.h>

using namespace std;

int main()
{
    int a[3][3],i,j;
    
    cout<<"Enter the matrix element:\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
        
            cin>>a[i][j] ;   
        }
    }
    
    
    cout<<"Matrix is .....\n" ;
    for(i=0;i<3;++i)
    
    {
        for(j=0;j<3;++j)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    } 
    

return 0;
}
