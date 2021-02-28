/*1. Define a class counterType to implement a counter. Your class must have a private data
member counter of type int and functions to set counter to the value specified by the
user, initialize counter to 0 , retrieve the value of counter , and increment and decrement
counter by one. The value of the counter must be nonnegative.*/


/*#include<iostream>
using namespace std;
class contertype
{
    private:
    int counter;
    public:
    contertype()
    {
        counter=0;
    }
    void user()
    {
        cout <<"Enter the value of counter" << endl;
        cin >> counter;
    }
    void get()
    {
        cout <<"Counter = " << counter;
    }
    void increment()
    {
        counter++;
    }
    void decrement()
    {
        if(counter>0)
        {
            counter--;
        }
    }
};
int main()
{
    contertype c;
    contertype();
    c.get();
    c.user();
    c.increment();
    cout <<"After increment" ;
    cout << endl;
    c.get();
    c.decrement();
    cout << endl << "After decrement";
    cout << endl;
    c.get();
    return 0;
}*/


/*2. Write a program that converts a number entered in Roman numerals to a positive
integer. Your program should consist of a class , say,romanType . An object of type
romanType should do the following:
a. Store the number as a Roman numeral.
b. Convert and store the number as a positive integer.
c. Print the number as a Roman numeral or positive integer as requested by the user.
The integer values of the Roman numerals are:
M        1000
D        500
C        100
L        10
X        5
V        1
d.Test your program using the following Roman numerals: MCXIV ,CCCLIX , and
MDCLXVI*/

/*#include<iostream>
#include<string>
using namespace std;
class romantype
{
    private:
    string s;
    char array[10000];
    int num;
    public:
    romantype()
    {
        cout <<"the constructor created \n";
    }
    void store()
    {
        cout <<"Enter the roman numeral \n";
        cin >> s;
    }
    void numeral()
    {
        int counter=0;
        int n=s.length();
        for(int i=0;i<n+1;i++)
        {
            array[i]=s[i];
            if(array[i]=='M')
            {
                counter+=1000;
            }
            if(array[i]=='D')
            {
                counter+=500;
            }
            if(array[i]=='C')
            {
                counter+=100;
            }
            if(array[i]=='L')
            {
                counter+=50;
            }
            if(array[i]=='X')
            {
                counter+=10;
            }
            if(array[i]=='V')
            {
                counter+=5;
            }
            if(array[i]=='I')
            {
                counter+=1;
            }
        }
        num=counter-2;
    }
    void print()
    {
        cout <<"select the desired opt \n";
        cout << "1. to print given Num again in Roman \n";
        cout << "2. to print given Num in integer Form \n";
        int i=0;
        cin >> i;
        if(i==1)
        {
            cout <<"Roman Numeral is " << s ;
        }
        if(i==2)
        {
            cout <<"Positive integer Num is" << num ;
        }
        if(i!=1 && i!=2)
        {
            cout <<"please enter a correct opt \n";
            print();
        }
    }
};
int main()
{
    romantype r;
    r.store();
    r.numeral();
    r.print();
    return 0;
}*/

/*3. Design and implement a class dayType that implements the day of the week in a
program. The class dayType should store the day, such as Sun for Sunday. The
program should be able to perform the following operations on an object of type dayType
:
a. Set the day.
b. Print the day.
c. Return the day.
d. Return the next day.
e. Return the previous day.
f. Calculate and return the day by adding certain days to the current day. For example, if
the current day is Monday and we add 4 days, the day to be returned is Friday. Similarly,
if today is Tuesday and we add 13 days, the day to be returned is Monday.
g. Add the appropriate constructors.*/


#include<iostream>
#include<string>
using namespace std;
void menu()
{
       cout <<"Enter 'Sun' for 'Sunday'"<< endl;
       cout <<"Enter 'Mon' for 'Monday'"<< endl;
       cout <<"Enter 'Tues' for 'Tuesday'"<< endl;
       cout <<"Enter 'Wednes' for 'Wednesday'"<< endl;
       cout <<"Enter 'Thurs' for 'Thursday'"<< endl;
       cout <<"Enter 'Fri' for 'Friday'"<< endl;
       cout <<"Enter 'Satur' for 'Saturday'"<< endl;
}
class daytype
{
    string days[7];
    int i;
    string day;
    string prday;
    string nxtday;
    string adddays;
    public:
    daytype(string i):day(i)
    {
        days[0] = "mon";
        days[1] = "Tues";
        days[2] = "Wednes";
        days[3] = "Thurs";
        days[4] = "Fri";
        days[5] = "Satur";
        days[6] = "Sun";
    }
    string setday();
    string preday();
    void nextday();
    string add(int n);
    void print();
};
int main()
{
    int n;
    string d;
    menu();
    cout <<"Enter the day:";
    getline(cin,d);
    daytype Da(d);
    Da.setday();
    Da.preday();
    Da.nextday();

    cout <<"Enter the No.of days to add:";
    while (!cin>>n || n<0 )
    {
        cin.clear();
        cin.ignore(999,'\n');
        cout <<"Invalid data type! \n please enter No.of days to add again:";
    }
    Da.add(n);
    Da.print();
    
    return 0;
}

string daytype::setday()
{
    i=9;
    for(int j=0;j<7;j++)
    {
        if(day==days[j])
        {
            i=j;
        }
    }if (i==9)
    {
        day =  "Invali input";
        i=7;
    }
    return day;
}
string daytype::preday()
{
    if(i==0)
    prday = days[6];
    else if(i==7)
    prday = "Invalid input";
    else
    {
        prday = days[i-1];
    }
    return prday;
    
}
void daytype::nextday()
{
    if(i==6)
    nxtday = days[0];
    else if(i==7)
    {
        prday = "Invalid Input";
    }
    else
    {
        nxtday = days[i+1];
    }
    
}

string daytype::add(int n) 
{
       n = n + i;
       while (n>= 7)
       {
              n = n - 7;
       }
       if (i == 7)
              days[n] = "Invalid Input ";
       return adddays = days[n];
}
void daytype::print()
{
       cout << endl <<"\tDay="<< day <<"day"<< endl;
       cout <<"\tPrevious day :"<< prday <<"day"<< endl;
       cout <<"\tNext day :"<< nxtday <<"day"<< endl;
       cout <<"\tAfter Adding Days :"<< adddays <<"day"<< endl;
}



