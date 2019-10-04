#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(int argc, char **argv)
{
    string input = argv[1];
    int a[45];
    for(int i=0;i<45;i++)
    {
        a[i]=0;
    }
    int i,n=0;
    int size=input.size();
    for (i = 0; i < size;i++)
    {
        if (input[i] == ' ')
            n++;
        else
        {
            a[n] = (a[n] * 10) + (input[i]-48);
        }
    }

    int majorindex=0;
    int c=1;
    for(int i=0;i<=n;i++)
    {
        if(a[i]==a[majorindex])
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c==0)
        {
            majorindex=i;
            c=1;
        }       
    }
    c=0;
    for(int i=0;i<=n;i++)
    {
        if(a[i]==a[majorindex])
        {
            c++;
        }
    }
    if(c>=(n+1)/2)
    {
        cout<<a[majorindex];
    }
    else
    {
        cout<<"NONE";
    }
    
}
