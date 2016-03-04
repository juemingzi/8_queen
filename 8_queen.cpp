#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 9
int X[N];
//int sum = 0;
bool PLACE(int k)
{
    int i = 1;
    while(i<k)
    {
        if(X[i]==X[k]||abs(k-i)==abs(X[k]-X[i]) )
            return false;
        i++;
    }
    return true;
}
void NQUEEN(int n)
{

    X[1] = 1;
    int k = 1;
    while(k>0)
    {
        while(X[k]<=n&&!PLACE(k))
            X[k] += 1;
        if(X[k]<=n)
        {
            if(k==n)
            {
                for(int m=1;m<=k;m++)
                    cout<<X[m]<<"  ";
                cout<<endl;
                X[k] += 1;
            }
            else{
                X[++k] = 1;
            }
        }
        else
        {
            k--;
            X[k] += 1;
        }
    }
}
/*int NQUEEN(int k)
{
    if(k>8)
    {
        sum ++;
    }
    else
    {
        for(int i=1;i<=8;i++)
        {
            X[k] = i;
            if(PLACE(k))
                NQUEEN(k+1);
        }
    }
    return sum;
}*/
int main()
{
    NQUEEN(8);
    //int kt = NQUEEN(1);
   // cout<<kt;
    return 0;
}
