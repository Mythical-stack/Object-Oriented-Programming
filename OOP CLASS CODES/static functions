// static functions

#include<iostream>
#include<string>
using namespace std;
class user
{
    int id;
    static int next_id;
    public:
    static int next_user_id()
    {
        next_id++;
        return next_id;
    }
    user()
    {
        id = user::next_user_id();
    }
    int get_id()
    {
        return id;
    }
};

int user::next_id = 0;
int fib(int n);

int main()
{
    user u;
    cout <<"user u id" << u.get_id() << endl;
    user v;
    cout << "user v id " << v.get_id() << endl;

    fib(1);
    cout <<"total count:" << fib(-1) << endl;
    return 0; 
}

int fib(int n)
{
    static int count = 0;
    if(n==-1)
    {
        return count;
    }
    count+=1;
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}

