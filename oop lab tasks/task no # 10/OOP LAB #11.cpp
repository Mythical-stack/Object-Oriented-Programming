task no 1:
#include<iostream>
using namespace std;
class Shape
{
     protected:
         int width, height;

     public:
        Shape( int a = 0, int b = 0)
        {
               width = a;
               height = b;
        }
        virtual int area()
        {
               cout << "Parent class area :" <<endl;
               return 0;
        }
};

class square: public Shape
{
      public:
          square(int a=0, int b=0)
          {
              width = a;
              height = b;
          }

           int area()
          {
              int s;
              s=((2*width)+(2*height));
              cout << "Area of Square is : "<<s<<endl;
              return s;
          }

};

int main()
{
    Shape S;
    square S1(5,9);
    Shape *p;
    p=&S1;
    p->area();
}

task no 2:

#include<iostream>
using namespace std;
class person 
{
	public:
		void introduce()
		{
			cout<<"Hey from person"<<endl;
		}
};

class student : public person
{
	public:
		void introduce()
		{
			cout<<"Hey from Student"<<endl;
		}
};

class farmer: public person
{
	public:
		void introduce()
		{
			cout<<"Hey from Farmer"<<endl;
		}
};

void whosthis(person &p)
{
	p.introduce();
}

int main()
{
	farmer anil;
	student alex;
	whosthis (anil);
	whosthis (alex);
	return 0;
}

task no 3:

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Worker
{
private:
	char* workerName;
	char ssn[12];

public:
	Worker()
	{
		workerName = new char;

		workerName = 0;
		ssn[0]=' ';

	}
	Worker(char name)
	{
		workerName = &name;

	}
	void setWorkerName()
   {
       if(*workerName==0)
       {
      char temp[50];
      cout << "Enter Worker's Name : ";
      cin.getline(temp, 99);
      int size = strlen(temp);

      workerName = new char[size];
      strncpy(workerName, temp, strlen(temp));
      workerName[size] = '\0';
       }
       else
        cout<<"WORKERNAME is already assigned !!!\n";
   }
	void setSSN()
   {
      char temp[12];
      bool check;
      cout << "Enter Social Security Number (xxx-xx-xxxx) : ";
      do
      {
         check = true;
         cin.getline(temp, 12);
         for (int i = 0; i < 11; i++)
         {
            if (i == 3 || i == 6)
               i++;
            if (!isdigit(temp[i]))
               check = false;
         }
         if (check)
         {
            int i = 0;
            while(i < 11)
            {
               ssn[i] = temp[i];
               if (i == 3 || i == 6)
               ssn[i] = '-';
               i++;
            }
            ssn[3] = ssn[6] = '-';
            ssn[11] = '\0';
         }
         else
            cout << "\n      Please use the format xxx-xx-xxxx";
      }while (check == false);
   }
	char* getWorkerName()
	{
		return workerName;
	}
    char* getSSN()
	{
		return ssn;
	}
	virtual void printValues()
	{
		cout << "Worker Name: "<< workerName;
		cout << "\nSocial Security Number: ";
        for(int i=0;i<12;i++)
		cout << ssn[i] ;
	}
	~Worker()
	{
		delete []workerName;
	}

};
class payWorker : public Worker
{
private:
	int dependents;
	double payRate;
public:
	void setPayRate(double pay)
	{
		payRate = pay;
	}
	void setDependents(int depend)
	{
		dependents = depend;
	}
	double getPayRate()
	{
		return payRate;
	}
	int getDependents()
	{
		return dependents;
	}
	void printValues()
	{
        cout << "Worker Name: ";
	    for(int i=0;getWorkerName()[i]!='\0';i++)
        {
        cout<< getWorkerName()[i];
        }
		cout << "\nSocial Security Number: ";
        for(int i=0;i<12;i++)
		cout << getSSN()[i] ;
		cout << "Pay Rate is : $" << payRate << endl;
		cout << "Number of Dependents is : " << dependents << endl;
	}
};
int main()
{
	payWorker person;
	int d;
    double p;
    person.setWorkerName();
	person.setSSN();
    cout<<"Enter the worker Pay rate :";
    cin>>p;
    cout<<"Enter The Number of Dependents : ";
    cin>>d;
	person.setPayRate(p);
	person.setDependents(d);
	return 0;
	}
	s
	person.printValues();
    return 0;
}
