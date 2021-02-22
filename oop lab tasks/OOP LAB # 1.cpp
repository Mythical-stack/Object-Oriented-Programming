#include<iostream>
using namespace std;
const int array_size=15;
int lenght=0;
void initilize_array(int[]);
void print_array(int[]);
bool isfull();
bool isempty();
void insert(int[]);
void insertat(int[]);
void remove(int[]);
void removeat(int[]);
void createvacancy(int[],int);
int main()
{
    int a[array_size];
    initilize_array(a);
    print_array(a);
    insert(a);
    print_array(a);
    remove(a);
    print_array(a);
    insertat(a);
    print_array(a);
    removeat(a);
    print_array(a);
    cout << endl;
    return 0;
}

// to inialitize the array by 1/3 of total
void initilize_array(int temp[])
{
    for (int i=0;i<array_size/3;i++)
    {
        insert(temp);
    }
}

// to print the whole array
void print_array(int temp[])
{
    cout << "\n-------------- list ----------------\n" << endl;
    for (int i=0;i<lenght;i++)
    {
        cout <<temp[i] << " ";
    }
    cout <<"\t\t\t[list length = " << lenght << "& list total size:" << array_size << "]";
    cout <<"\n--------------------------------------------------------------\n\n";
}

// it check either array is full or not
bool isfull()
{
    if(array_size==lenght)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// to check either list is empty or not
bool isempty()
{
    return (lenght==0);
}

// to insert at last of array
void insert(int test[])
{
    if(isfull()!=true)
    {
        cout <<"enter any integer value" << endl;
        cin >> test[lenght];
        lenght++;
    }
    else
    {
        cout <<"list is already full" << endl;
    }  
}

// to create vacancy at intended index ... 
void createvacancy(int test[],int at)
{
    for (int i=lenght-1;i>=at;i--)
    {
        test[i+1]= test[i];
    }
}

// to insert at intended location
void insertat(int test[])
{
    if(isfull()!= true)
    {
        int at,value;
        cout <<"enter location for entry:>";
        cin >> at;
        cout <<"enter some integers value:>";
        cin >> value;
        createvacancy(test,at-1);
        test[at-1]=value;
        lenght++;  
    }
    else
    {
        cout <<"list is already full";
    }
}

// to remove from last of list
void remove(int test[])
{
    if(!isempty())
    {
        test[--lenght]=-1;
        cout <<"\n one last element is removed from the list---\n";
    }
    else
    {
        cout <<"list is empty . so,NO element to remove from the list --- ";
    }
}

// to remove from intended location from list
void removeat(int test[])
{
    if(!isempty())
    {
        int at;
        cout <<"enter the location to remove the element";
        cin >> at;
        for (int i=at;i<lenght;i++)
        {
            test[i-1]=test[i];
        }
        lenght--;
    }
    else
    {
        cout <<"list is empty";
    }
}


