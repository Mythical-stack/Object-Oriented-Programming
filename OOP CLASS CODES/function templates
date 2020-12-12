// ------ FUNCTION TEMPLATES -------- 

#include<iostream>
#include<string>
using namespace std;

template<class T>
T find_max(T a,T b)
{
    T result;
    result = (a>b)?a:b;
    return result;
}

int main()
{
    int x,y,k;
    x=25;
    y=30;
    k=find_max<int>(x,y);
    cout <<"Max for int" <<  "\t" << k << endl;

    string a,b,l;
    a="ali";
    b="usman";
    l=find_max<string>(a,b);
    cout <<"Max for string" << "\t" <<  l << endl;
    return 0;
}
