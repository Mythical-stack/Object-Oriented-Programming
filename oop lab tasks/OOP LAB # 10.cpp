task no 1:
#include<iostream>
#include<string>
#include<fstream>
using namespace std;


class addressType
{
public:

    string addresss,city,state,zip;

    addressType()
    {

        addresss="     ";
        city="  ";
        state="  ";
        zip="  ";
    }

    addressType(addressType &A)
    {

        addresss=A.addresss;
        city=A.city;
        state=A.state;
        zip=A.zip;

    }


    void storeaddress(string ad,string c,string s,string z)
    {
        addresss=ad;
        city=c;
        state=s;
        zip=z;
    }


    void printaddress()
    {
        cout<<addresss<<" "<<city<<" "<<state<<" "<<zip<<endl;
    }


};




class personType
{

public:
            string first,last;

            personType(string First="    ", string Last="    ")
            {
                setName(First,Last);
            }

            void printname() const
            {
                 cout<<last<<" \t    "<<first;
            }

            void setName(string First,string Last)
            {
                 first=First;
                 last=Last;
            }

            string getFirstName() const
            {
                 return first;
            }

            string getLastName() const
            {
                 return last;
            }


};


class dateType
{

public:

        int dday,dmonth,dyear;

        dateType(int m=0, int d=0, int y=0)
        {
                setDate(m,d,y);
        }
        void setDate(int m, int d, int y)
        {

            dyear=y;
            dmonth=m;
            dday=d;

        }
        int getDay() const
        {
            return dday;
        }
        int getMonth() const
        {
            return dmonth;
        }
        int getYear() const
        {
            return dyear;
        }

        void printDate() const
        {
            cout << dmonth << "-" << dday << "-" << dyear;
        }



};



class extPersonType:public addressType, public personType,public dateType
{

private:
        string nickname;
public:
        string person;
        int phone;

        friend class myFriend;

        extPersonType()
        {
            person="   ";
            phone=0;
        }

        void store(string p,int ph)
        {
            person=p;
            phone=ph;
        }
        void print()
        {
            cout<<person<<"     "<<phone;
        }
        void printall()
        {
            cout<<"Last Name  "<<"First Name  "<<"D.O.B\t   "<<"Relation\t";
            cout<<"Ph. No.\t"<<"  Address  \n";
            printname();
            cout<<"      ";
            printDate();
            cout<<"   ";
            print();
            cout<<"      ";
            printaddress();
        }
};



class myFriend
{

public:

    string name,address;
    int phonenumber,age;

    void setter(extPersonType &ext,string nick)
    {
        ext.nickname=nick;
    }

    string getter(extPersonType &ext)
    {
        return ext.nickname;
    }

};



class addressBookType
{
public:
        extPersonType e[500];
        myFriend F;

        friend void displayall(addressBookType &);

        void input()
        {
            string f,l,strtaddress,z,general;
            int d,m,y;

            ifstream in;
            in.open("DATA.txt");

            for(int i=0;i<500;i++)
            {
                in>>f;
                in>>l;
                e[i].setName(f,l);
                in>>general;
                F.setter(e[i],general);
                in>>d>>m>>y;
                e[i].setDate(m,d,y);

                in>>general>>d;
                e[i].store(general,d);
                in>>general>>f>>l>>z;
                e[i].storeaddress(general,f,l,z);
            }
            in.close();
        }

    void output()
    {
        for(int i=0;i<500;i++)
        {
            cout<<i<<"\n";
            e[i].printall();

        }
    }

        void searchname()
        {
        int counter=0;
        string f,n;
        cout<<"ENTER the First Name to Search : ";
        cin>>f;
        cout<<"Enter the Last Name To Search : ";
        cin>>n;
        cout<<"Person(s) are:\n\n\n";
            for(int i=0;i<500;i++)
            {
                if((f==e[i].getFirstName()) && (n==e[i].getLastName()))
                {
                        cout<<" D.O.B  : ";
                        e[i].printDate();
                        cout<<endl<<" Relation And Phone No is : ";
                        e[i].print();
                        cout<<endl<<" Address is : ";
                        e[i].printaddress();
                        cout<<endl<<endl;
                        counter++;
                }
            }
                if(counter==0)
                cout<<"Person Not Found !!! \n";
        }



        void searchl()
        {
        int counter=0;
        string n;

        cout<<"Enter the Last Name To Search : ";
        cin>>n;
        cout<<"Person(s) With Last Name "<<n<<" are:\n\n\n";
            for(int i=0;i<500;i++)
            {

                if(n==e[i].getLastName())
                {
                        cout<<" D.O.B  : ";
                        e[i].printDate();
                        cout<<endl<<" Relation And Phone No is : ";
                        e[i].print();
                        cout<<endl<<" Address is : ";
                        e[i].printaddress();
                        cout<<endl<<endl;
                        counter++;
                }
            }
                if(counter==0)
                cout<<"Person Not Found !!! \n";
        }

        void searchmonth()
        {
            int m,counter=0;

            cout<<"Enter The Month You Want to Search For: \n";
            cin>>m;
            cout<<"Name(s) of Person(s) with Same Month Of Birth are \n\n\n";
            cout<<"Last Name   "<<"First Name  \n";
            for(int i=0;i<500;i++)
            {
                if(m==e[i].getMonth())
                {
                        e[i].printname();
                        cout<<endl;
                        counter++;
                }
            }
            if(counter==0)
                cout<<"Not Found !!! \n";
        }

        void searchlast()
        {
            string n,l;
            int i,j,counter=0,count=0;
            cout<<"Enter the First Last Name : \n";
            cin>>n;
            cout<<"Enter the Second Last Name : \n";
            cin>>l;

            for(i=0;i<500;i++)
            {
                if(n==e[i].getLastName())
                {
                    j=i;
                }
            }

                j=j+1;
            for(int k=j;k<500;k++)
            {
                if(l==e[k].getLastName())
                    {
                        count=k;
                        break;
                    }
            }
            for(j;j<count;j++)
                {
                     if(counter==0)
                {

                    cout<<"Name(s) Between the given Range are : \n\n";
                    cout<<"Last Name  "<<"First Name  \n";}
                    e[j].printname();
                    cout<<endl;
                    counter++;

                }

            if(counter==0)
            cout<<"Not Found !!! \n";

        }

        void search()
        {
        int counter=0;
        string n;
        cout<<"Enter Your Num According to the Choices Below : \n";
        cout<<"1. For Searching of Family Members Press fa\n";
        cout<<"2. For Searching of Friends Press fn";
        cout<<"3. For Searching of Business Associates Press b\n";
        cin>>n;
        cout<<"Name(s) are : \n";
        cout<<"Last Name  "<<"First Name  \n";
        for(int i=0;i<500;i++)
            {
                if((n=="fa")&&(e[i].person=="Family"))
                {
                            e[i].printname();
                            cout<<endl;
                            counter++;
                }

                if((n=="fn")&&(e[i].person=="Friend"))
                {
                            e[i].printname();
                            cout<<endl;
                            counter++;
                }

                if((n=="b")&&(e[i].person=="Business"))
                {
                            e[i].printname();
                            cout<<endl;
                            counter++;
                }
            }
            if(counter==0)
            cout<<"Nothing Found !!!\n";
        }


        void options()
        {   int i;
            do{
            cout<<"Enter Nos. According to Choices Below : \n\n";
            cout<<"1. Search for a person by last name. \n";
            cout<<"2. Print the address, phone number, and date of birth of a given person.\n";
            cout<<"3. Print the names of the people whose birthdays are in a given month. \n";
            cout<<"4. Print the names of all the people between two last names.  \n";
            cout<<"5. Print the names of all family members, friends, or business associates.\n";
            cout<<"6. Exit \n";
            cin>>i;

            if(i==1)
            searchl();
            if(i==2)
            searchname();
            if(i==3)
            searchmonth();
            if(i==4)
            searchlast();
            if(i==5)
            search();
            }while(i!=6);

        }
};

        void displayall(addressBookType &A)
        {
            cout<<"Last Name  "<<"First Name  ";
            cout<<"Nick Name   "<<"D.O.B\t   "<<"Relation\t";
            cout<<"Ph. No.\t"<<"  Address  \n";

            for(int i=0;i<500;i++)
            {
             A.e[i].printname();
             cout<<"      ";
             cout<<A.F.getter(A.e[i]);
             cout<<"      ";
             A.e[i].printDate();
             cout<<"   ";
             A.e[i].print();
             cout<<"      ";
             A.e[i].printaddress();
            }
        }


int main()
{   char opt;
    addressBookType A;
    A.input();
    A.options();
    cout<<"\n\n     To Display All The Contacts Press y else n   " ;
    cin>>opt;
    if(opt=='y')
    displayall(A);
    else
    return 0;
}



// data/txt

Ahmed Ali Sa 11 02 2001 Family 049324 jkfjksdh jfj ksaf kkkk
Ahmed Ali Sa 11 02 2001 Family 049324 jkfjksdh jfj ksa fkkkk
Ahmed l1i Sa 11 02 2001 Family 049324 jkfjksdh jfj ksa fkkkk
Ahmed li Sa 11 02 2001 Family 049324 jkfjksdh jfjks afk kkk
Ahmed Ai Sa 11 02 2001 Family 049324 jkfjksdh jfj ksaf kkkk
Ahmed Ai Sa 11 02 2001 Family 049324 jkfjksdh jfj ksaf kkkk
