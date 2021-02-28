

/*Q1. Declare a function getMem(int*,int) which allocates dynamic array to the integer pointer. Declare a
function init(int*,int) which initializes the array from user input. Declare function print() to print the array.
Declare function freeMem(int*) to free dynamic memory.*/

/*#include<iostream>
#include<string>
using namespace std;
void getnew(int&a,int*& ptr)
{
    cout <<"Enter the value\n";
    cin >> a;
    ptr=new int[a];
}
void init(int &a,int* &ptr)
{
    cout <<"Enter the values";
    for (int i=0;i<a;i++)
    {
        cin >> *(ptr+i);
    }
}
void print(int &a,int*&ptr)
{
    cout <<"Given values are";
    for(int i=0;i<a;i++)
    {
        cout <<*(ptr+i) << endl;
    }
}
void del(int *&ptr)
{
    delete[] ptr;
}
int main()
{
    int* ptr;
    int a;
    getnew(a,ptr);
    init(a,ptr);
    print(a,ptr);
    del(a,ptr);
    return 0;
}*/


/*Q2. Declare a 2d dynamic array. Initialize and print it.*/

/*#include<iostream>
using namespace std;
int main()
{
    int n,n1;
    int** ptr= NULL;
    cout <<"Enter no of the columns in an array";
    cin >> n;
    cout <<"Enter the no of rows in an array";
    cin >> n1;
    ptr = new int*[n];
    for (int i=0;i<n1;i++)
    {
        ptr[i]=new int[n];
    }
    cout <<"Enter the values";
    for (int i=0;i<n1;i++)
    {
        for (int z=0;z<n;z++)
        {
            cin >> *(ptr[i]+z);
        }
    }
    cout <<"the values are " << endl;
    for (int i=0;i<n1;i++)
    {
        for(int z=0;z<n;z++)
        {
            cout <<*(ptr[i]+z)<< endl;
        }
    }
    return 0;
}*/

/*Q3. Extend the 2d array created in Q2 such that it can store Name , Father Name and City of 2 persons.
Ask user to input information and print it.

Name  |  Father  |  Name  |  City
Name  |  Father  |  Name  |  City*/


/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,n1;
    string** ptr=NULL;
    ptr = new string*[3];
    for (int i=0;i<2;i++)
    {
        ptr[i] = new string[3];
    }
    for (int i=0;i<2;i++)
    {
        if(i==0)
        cout <<"enter the data of first person";
        if(i==1)
        cout <<"Enter hte data of second person";
        for(int z=0;z<3;z++)
        {
            cin >> *(ptr[i]+z);
        }
    }
    cout <<"the data stored is \n";
    for (int i=0;i<2;i++)
    {
        for (int z=0;z<3;z++)
        {
            cout <<*(ptr[i]+z) << "                  ";
        }
        cout << endl;
    }
    return 0;
}*/
