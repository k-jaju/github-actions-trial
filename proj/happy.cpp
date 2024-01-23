
#include<bits/stdc++.h>

using namespace std;

int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}

int multi(int a, int b)
{
    return (a*b);
}

int divide(int a, int b)
{
    if(b != 0)
        return (a/b);
    return -1;
}

int main()
{
    int x = 9, y = 5;
    int ans_add = add(x,y);
    int ans_sub = sub(x,y);
    int ans_mult = multi(x,y);
    int ans_div = divide(x,y);

    if(ans_add == 14)
        cout<<"ADD SUCCESS\n";
    
    if(ans_sub == 4)
        cout<<"SUB SUCCESS\n";
    
    if(ans_mult == 45)
        cout<<"MULTI SUCCESS\n";
    
    if(ans_div == 1)
        cout<<"DIV SUCCESS\n";

    return 0;
}