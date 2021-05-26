#include<iostream>
#include<conio.h>
#include <process.h>
using namespace std;
void main()
{
    int x[10][10],y[10][10],z[10][10],i,j;
    clrscr();
    int m,n,p,q;
    cout<<"\nEnter row & coloumn of matrix-A :";
    cin>>m>>n;
    cout<<"\nEnter row & coloumn of matrix-B :";
    cin>>p>>q;
    if(n==p)
        cout<<"\nMatrix can be multiplied...\n";
    else
        {
            cout<<"\nMatrix can not be multiplied..";
            exit(0);
        }
    cout<<"\nENTER ELEMENTS OF 1st MATRIX\n";
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    cin>>x[i][j];
    }
    clrscr();

        cout<<"\n\tMATRIX [X]";
    for(i=0;i<m;i++)
    {
    cout<<"\n";
    for(j=0;j<n;j++)
    cout<<"  "<<x[i][j];
    }
    getch();
    clrscr();


        cout<<"ENTER ELEMENTS OF 2nd MATRIX\n";
    for(i=0;i<p;i++)
    {
    for(j=0;j<q;j++)
    cin>>y[i][j];
    }
    clrscr();

    cout<<"\n\tMATRIX [Y]";
    for(i=0;i<p;i++)
    {
    cout<<"\n";
    for(j=0;j<q;j++)
    cout<<"  "<<y[i][j];
    }
    getch();
    clrscr();

    cout<<"\nProduct of two matrices :";

    for(i=0;i<m;++i)
    {
        cout<<"\n\n";
        for(j=0;j<q;j++)
        {
            int sum=0;
            for(int k=0;k<n;++k)
        sum=sum+x[i][k]*y[k][j];
    z[i][j]=sum;
    cout<<z[i][j]<<"  ";
    }
    }
}
