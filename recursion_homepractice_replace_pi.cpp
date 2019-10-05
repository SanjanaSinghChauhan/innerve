#include<iostream>
using namespace std;
string replacePi(string str)
{
    //base case
    if(str.length()==0)
    {
        return str;
    }

    //recursive case
    char ch=str[0];
    string ros=str.substr(1);

    string recursion_result=replacePi(ros);

    if(ch=='p'&& recursion_result[0]=='i')
    {
        string pi="3.14";
        return pi+recursion_result.substr(1);
    }
    else
    {
        return ch+recursion_result;
    }

}
int main()
{
    cout<<replacePi("xxbipopiipxvpiwpicgxpi")<<endl;
    return 0;
}
