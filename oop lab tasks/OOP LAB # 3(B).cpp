/*Q1. Write a recursive function which computes the table of N (any integer) up to 10.*/

#include<iostream>
using namespace std;
void function(int x,int y)
{
    if (y!=11)
    {
        cout <<"x" << "*" << y << "=" << x*y << endl;
        y++;
        function(x,y);
    }
    if(y==10)
    return;
}
int main()
{
    int n1=1,n2;
    cout <<"Enter the number for table";
    cin >> n2;
    function(n2,n1);
    return 0;
}


/*Q2. Write a recursive function which draws a square of n x n.*/

#include<iostream>
using namespace std;
void abc(int x,int y,int q)
{ 
    int z=x*x; 
    if(x!=y)
{
    cout<<" * ";
    q++;
    y++;
    abc(x,y,q);
    if(y==x)
{
    cout<<endl;
    if(q!=z)
{
    y=0;
    abc(x,y,q);
}
}
}
}

int main()
{
	int n1=0,n2,p=0;
	cout<<"Enter the Number for Square ";
	cin>>n2;
    abc(n2,n1,p);
    return 0;
}

/*Q3. There are 100 copies of function Sum. Each copy contains a number form 1 to 100. write a recursive
function such that when recursive calls back track and reaches first copy the 1 st copy should have sum of all
other copies. The first copy multiplies the sum with 2 and returns the result to main function. Print the result
in main Funciton.*/

#include<iostream>
using namespace std;
void sum(int b)
{
    b = b+sum()
}
int main()
{
    int a=0;
    sum(a);
    return 0;
}
