#include<iostream>
#include<string>
using namespace std;
class bankAccount
{
    public:
    string name;
    int account_number,interest;

    bankAccount()   //Constructor Created
    {
        name=" ";
        account_number=0;
    }

//{  //get ftns and Deposit ftn

    virtual string getname()
    {
        return name;
    }

    virtual int getinterest()
    {
        return interest;
    }

    virtual int getaccount()
    {
        return account_number;
    }

//{  //pure Virual ftns Withdraw,interest, Bank statement
    virtual void makedeposit()=0;
    virtual void withdraw()=0;
    virtual void display()=0;
    virtual void functionality()=0;
    virtual void creatingstatement()        //Bank Statment
    {
        int a[30],d[30],w[30],sum=0,service;
        for(int i=0;i<30;i++)
        {
           cout<<"Enter Bank Balance on "<<i+1<<"th Day of the Month : $";
           cin>>a[i];
           sum+=a[i];
           cout<<"Enter Amount Deposited on "<<i+1<<"th Day of the Month : $";
           cin>>d[i];
           cout<<"Enter Amount Withdrawal on "<<i+1<<"th Day of the Month : $";
           cin>>w[i];
        }
        cout<<endl<<endl<<"BANK Statement for the month is \n ";
        cout<<"Account Owner's Name "<<name<<endl;
        cout<<"Account Number "<<account_number<<endl<<endl<<endl;
        for(int i=0;i<30;i++)
        {
           cout<<"Bank Balance on "<<i+1<<"th Day of the Month : "<<a[i]<<endl;
           cout<<"Amount Deposited on "<<i+1<<"th Day of the Month : "<<d[i]<<endl;
           cout<<"Amount Withdrawal on "<<i+1<<"th Day of the Month : "<<w[i]<<endl;
        }
        cout<<endl<<"Total Bank Balance Maintained $"<<sum<<endl;
    }       //Bank Statment
//}

//{  //set ftns
    virtual void setname()
    {
        cout<<"Enter the Name : ";
        getline(cin,name);
    }

    virtual void setinterest(int i)
    {
        interest=i;
    }

    virtual void setaccountno()
    {
        cout<<"Enter the Account NO. : ";
        cin>>account_number;
    }
//}

};

class savingsAccount:public bankAccount
{
public:
    int balancesaving;
    savingsAccount()
    {
        setname();
        setaccountno();
        setbalancesaving();
        setinterest(7);
    }

    virtual void setbalancesaving()
    {
        cout<<"Enter the Amount to set to Savings Account : ";
        cin>>balancesaving;
    }

    virtual  int getbalancesaving()
    {
        return balancesaving;
    }


    virtual  void withdraw()
    {
            int amount;

            cout<<"Enter the Amount to Withdraw :";
            cin>>amount;

            if(amount>=balancesaving)
            {
                cout<<"You Have Low Bank Balance \n";
            }
            else if(amount<balancesaving)
            {
           balancesaving-=amount;
           cout<<"Amount Withdrawn Successfully\n";
           cout<<"Account Holder : "<<getname()<<endl;
            cout<<"Account No : "<<getaccount()<<endl;
            cout<<"Amount Withdrawn : $"<<amount<<endl;
            cout<<"Remaining Balance : $"<<balancesaving<<endl;

            }
    }


    virtual  void makedeposit()
    {
       int d;
       cout<<"Enter the Amount to Deposit : $";
       cin>>d;
       balancesaving+=d;
       cout<<"Amount Deposited Successfully\n";
       cout<<"Amount deposited is : $"<<d<<endl;
       cout<<"Updated Balance is : $"<<balancesaving<<endl;
    }


    void functionality()
    {
        display();
        int s;
        do{
        cout<<"\n\n***************************************************\n";
        cout<<"Enter your Selection According to the Choices below \n";
        cout<<"1. To Check Interest Rate\n";
        cout<<"2. To Display Bank Balance\n";
        cout<<"3. To Have Monthly Bank Statement \n";
        cout<<"4. To Deposit Cash \n";
        cout<<"5. To Withdraw Cash \n";
        cout<<"6. To Display All Necessary Details \n";
        cout<<"7. To Exit\n";
        cin>>s;
        if(s==1)
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        if(s==2)
        cout<<"Current Bank Balance is "<<getbalancesaving()<<endl;
        if(s==3)
        creatingstatement();
        if(s==4)
        makedeposit();
        if(s==5)
        withdraw();
        if(s==6)
        display();
        }while(s!=7);
    }
    void display()
    {
        cout<<"Account Holder : "<<getname()<<endl;
        cout<<"Account No : "<<getaccount()<<endl;
        cout<<"Current Balance is: $"<<balancesaving<<endl;
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
    }
};

class highinterestSaving: public savingsAccount
{
    public:
    int minibalance;

    highinterestSaving()
    {

        minibalance=2000;
        setinterest(20);
    }


     void withdraw()
    {
            int amount;

            cout<<"Enter the Amount to Withdraw :";
            cin>>amount;

            if((amount+minibalance)>=balancesaving)
            {
                cout<<"You Have Low Bank Balance \n";
            }
            else if((amount+minibalance)<balancesaving)
            {
            balancesaving-=amount;
            cout<<"Withdraw Successfull !!!\n";
            cout<<"Account Holder : "<<getname()<<endl;
            cout<<"Account No : "<<getaccount()<<endl;
            cout<<"Amount Withdrawn : $"<<amount<<endl;
            cout<<"Remaining Balance : $"<<balancesaving<<endl;
            }
    }
    void display()
    {
        cout<<"Account Holder : "<<getname()<<endl;
        cout<<"Account No : "<<getaccount()<<endl;
        cout<<"Current Balance is: $"<<balancesaving<<endl;
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        cout<<"Minimum Balance Range is : $"<<minibalance<<endl;
    }

    void functionality()
    {
        display();
        int s;
        do{
        cout<<"****************************************************\n";
        cout<<"Enter your Selection According to the Choices below \n";
        cout<<"1. To Check Interest Rate\n";
        cout<<"2. To Display Bank Balance\n";
        cout<<"3. To Check Minimum Balance Limit \n";
        cout<<"4. To Deposit Cash \n";
        cout<<"5. To Withdraw Cash \n";
        cout<<"6. To Have Monthly Bank Statement \n";
        cout<<"7. To Display all Details \n";
        cout<<"8. To Exit \n";
        cin>>s;
        if(s==1)
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        if(s==2)
        cout<<"Current Bank Balance is $"<<getbalancesaving()<<endl;
        if(s==3)
        cout<<"Minimum Balance is : $"<<minibalance<<endl;
        if(s==4)
        makedeposit();
        if(s==5)
        withdraw();
        if(s==6)
        creatingstatement();
        if(s==7)
        display();
        }while(s!=8);

    }


};

class certificateofDeposit: public bankAccount
{

    int currentCDmonth,noofCDmaturitymonths,penality;
public:
    int balancedeposit;
    certificateofDeposit()
    {
        setname();
        setaccountno();
        setpenality(5);
        setCDmaturitymonths(15);
        setcurrentCD();
        setinterest(20);

    }
    void setpenality(int p)
    {
        penality=p;
    }
    int getpenality()
    {
        return penality;
    }
    void setcurrentCD()
    {
        int c;
        cout<<"Enter The Current CD Month \n";
        cin>>c;
        if(c>=getnoofCDmaturitymonths())
        {
            cout<<"Current Month Value is high Than Total maturity months Enter Again\n";
            setcurrentCD();

        }
    }
    int getcurrentCD()
    {
        return currentCDmonth;
    }
     void setCDmaturitymonths()
    {
        int m;
        cout<<"Enter No of Months for which you want to Increase your COD: ";
        cin>>m;
        noofCDmaturitymonths+=m;
        cout<<"REUQEST PROCESSED\n";
    }
    void setCDmaturitymonths(int m)
    {
        noofCDmaturitymonths=m;
    }
    int getnoofCDmaturitymonths()
    {
        return noofCDmaturitymonths;
    }

    void withdraw()
    {
        int opt;
        cout<<"Warning !!! You Will Face Penality For Withdrawing\n TO Proceed Enter '1' else Press any key \n";
        if(opt==1)
        {
            cout<<"Enter the Amount to Withdraw $\n";
            cin>>opt;
            balancedeposit-=(opt+getpenality());
            cout<<"Amount Withdrawn Successfully With A Penality Of $"<<getpenality()<<endl;
            cout<<"Account Holder : "<<getname()<<endl;
            cout<<"Account No : "<<getaccount()<<endl;
            cout<<"Amount Withdrawn : $"<<opt<<endl;
            cout<<"Remaining Balance : $"<<balancedeposit<<endl;
            cout<<"Maturity CD Month Left : "<<getnoofCDmaturitymonths()<<getcurrentCD()<<" months\n";
        }
        else
            return;
    }

    void makedeposit()
    {
        int amount;
        cout<<"Enter The Amount To Be Deposited $\n";
        cin>>amount;
        balancedeposit+=amount;
        setCDmaturitymonths();
        cout<<"Amount Deposited : $"<<amount<<endl;
        cout<<"Remaining Balance : $"<<balancedeposit<<endl;
        cout<<"Maturity Months Updated to :"<<getnoofCDmaturitymonths()<<" Months\n";
    }


    void display()
    {
        cout<<"Account Holder : "<<getname()<<endl;
        cout<<"Account No : "<<getaccount()<<endl;
        cout<<"Current Balance is: $"<<balancedeposit<<endl;
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        cout<<"Current CD Month : "<<getcurrentCD()<<endl;
         cout<<"Total Maturity CD Months are : "<<getnoofCDmaturitymonths()<<" months\n";
        cout<<"Maturity CD Months Left are : "<<getnoofCDmaturitymonths()-getcurrentCD()<<" months\n";
    }


    void functionality()
    {
        int s;
        do{
        cout<<"************************\n";
        cout<<"1. To Check Interest Rate\n";
        cout<<"2. To Check Your Current Balance \n";
        cout<<"3. To Withdraw Money\n";
        cout<<"4. To Deposit Money\n";
        cout<<"5. To Update Your No Of CD Maturity Months \n";
        cout<<"6. To Have Bank Statement \n";
        cout<<"7. To Check Remaining No of Maturity CD Months Left\n";
        cout<<"8. To Check Current CD Month\n";
        cout<<"9. To Check Total Maturity CD Months \n";
        cout<<"10. To Display All Details \n";
        cout<<"11. To Exit \n";
        cin>>s;
        if(s==1)
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        if(s==2)
        cout<<"Current Bank Balance is "<<balancedeposit<<endl;
        if(s==3)
        withdraw();
        if(s==4)
        makedeposit();
        if(s==5)
        setCDmaturitymonths();
        if(s==6)
        creatingstatement();
        if(s==7)
        cout<<"Maturity CD Month Left : "<<getnoofCDmaturitymonths()-getcurrentCD()<<" months\n";
        if(s==8)
        cout<<"Current CD Month : "<<getcurrentCD()<<endl;
        if(s==9)
        cout<<"Total Maturity CD Months are : "<<getnoofCDmaturitymonths()<<" months\n";
        if(s==10)
        display();
        }while(s!=11);

}};



int main()
{
      certificateofDeposit S;
      S.functionality();
    return 0;
}

class checkingAccount:public bankAccount
{
    public:
    int balancecheck,service,checkswritten,mbalance;


    checkingAccount()
    {
        balancecheck=0;
        checkswritten=0;
        service=0;
        mbalance=0;
    }

//{   //set ftns

    virtual void setbalancecheck()
    {
        cout<<"Enter the Amount to set to Checking Account : ";
        cin>> balancecheck;
    }

    virtual void setservicecharge(int s)
    {
        service=s;
    }

    virtual void setminbalance(int b)
    {
        mbalance=b;
    }

    virtual void checkwritten()
    {
        cout<<"Enter the No. of Checks Written : ";
        cin>>checkswritten;
    }
   //virutal ftns of get

    virtual int getbalancecheck()
    {
        return balancecheck;
    }

    virtual int minibalance()
    {
        return mbalance;
    }

    virtual int checks()
    {
        return checkswritten;
    }

    virtual int servicer()
    {
        return service;
    }
//}

    virtual void makedeposit()
    {
        int d;
       cout<<"Enter the Amount to Deposit : ";
       cin>>d;
       balancecheck+=d;
       cout<<"Amount Deposited Successfully\n";
       cout<<"Amount Deposited is : $"<<balancecheck<<endl;
       cout<<"New Balance is: $"<<balancecheck<<endl;
    }

    virtual void display()=0;
    virtual void withdraw()=0;
    virtual void writeCheck()=0;

};


class serviceChargeChecking: public checkingAccount
{
    public:
    int limitofchecks;
    serviceChargeChecking()
    {
        setname();
        setaccountno();
        setbalancecheck();
        limitofchecks=30;
        setinterest(0);
        setminbalance(0);
        setservicecharge(5);
        checkwritten();
    }
    void setlimitofchecks()
    {
        cout<<"Enter Limit of Checks to Be Written per month : ";
        cin>>limitofchecks;
        cout<<"Your Request Is being Processed \n";
    }

    int getlimitofchecks()
    {
        return limitofchecks;
    }

    void writeCheck()
    {
        if(checks()<getlimitofchecks())
        {
        string n;
        int a,i,d,m,y;
        cout<<"Enter the of person to whom you want to write to ";
        cin>>n;
        cout<<"Enter the Account No of the "<<n<<" \n";
        cin>>i;
        cout<<"Enter the Amount : ";
        cin>>a;
        if(a>balancecheck)
        {
            cout<<"Amount Greater than Current Balance \nEnter a New Amount or Press '0' to exit  \n";
            cin>>a;
            if(a==0)
                return;
            else if(a<balancecheck)
            {
                 cout<<"Check Written to "<<n<<endl;
                 cout<<"With Account Number "<<i<<endl;
                 cout<<"Amount is $"<<a<<endl;
                 cout<<"Enter today's Date in(dd/mm/yy) Format Enter respectively \n";
                 cin>>d>>m>>y;
            }
        }
        else
        {
                 cout<<"Check Written to "<<n<<endl;
                 cout<<"With Account Number "<<i<<endl;
                 cout<<"Amount is $"<<a<<endl;
                 cout<<"Enter today's Date in(dd/mm/yy) Format Enter respectively \n";
                 cin>>d>>m>>y;
            checkswritten++;
        }
        }
        else
        cout<<"Monthly Check Writing Limits Already Reached \n";
    }

    void withdraw()
    {
        int amount;
        if(servicer()<balancecheck)
        {
            cout<<"Enter the Amount to Withdraw :";
            cin>>amount;

            if((servicer()+amount)>=balancecheck)
            {
                cout<<"You Have Low Bank Balance \n";
            }
            else if((servicer()+amount)<balancecheck)
            {
            balancecheck-=amount;
            balancecheck-=servicer();
            cout<<"Withdraw Successfull !!!\n";
            cout<<"Account Holder : "<<getname()<<endl;
            cout<<"Account No : "<<getaccount()<<endl;
            cout<<"Amount Withdrawn : $"<<amount<<endl;
            cout<<"Service Charges Are : $"<<servicer()<<endl;
            cout<<"Remaining Balance : $"<<balancecheck<<endl;

            }
        }
    }

    void display()
    {
        cout<<"Account Holder : "<<getname()<<endl;
        cout<<"Account No : "<<getaccount()<<endl;
        cout<<"Current Balance is: $"<<balancecheck<<endl;
        cout<<"Service Charges are : $"<<servicer()<<"%\n";
        cout<<"Limit Of Checks is : "<<getlimitofchecks()<<" Checks\n";
        cout<<"No. of Checks Written Uptill Now Are : "<<checks()<<" Checks\n";
    }


    void functionality()
    {
        display();
        int s;
        do{
        cout<<"**************************\n";
        cout<<"Enter your Selection According to the Choices below \n";
        cout<<"1. To Write Check\n";
        cout<<"2. To Check remaining No checks limit of this month \n";
        cout<<"3. To Update Check Limits of this Month \n";
        cout<<"4. TO Check the Service Charges \n";
        cout<<"5. To Deposit Cash \n";
        cout<<"6. To Withdraw Cash \n";
        cout<<"7. To Display Bank Balance \n";
        cout<<"8. To Have Monthly Bank Statement \n";
        cout<<"9. To Display All Details \n";
        cout<<"10. To Exit\n";
        cin>>s;
        if(s==1)
        writeCheck();
        if(s==2)
        cout<<"Remaining No of Checks Limit of this MOnth is :"<<limitofchecks-checkswritten<<endl;
        if(s==3)
        setlimitofchecks();
        if(s==4)
        cout<<"Service Charges Are : "<<servicer()<<endl;
        if(s==5)
        makedeposit();
        if(s==6)
        withdraw();
        if(s==7)
        cout<<"Current Bank Balance is "<<getbalancecheck()<<endl;
        if(s==8)
        creatingstatement();
        if(s==9)
        display();
    }while(s!=10);

    }




};


class noserviceChargeChecking:public checkingAccount
{
public:
    noserviceChargeChecking()
    {
        setname();
        setaccountno();
        setbalancecheck();
        if(balancecheck<minibalance())
        {
            cout<<"Balance Less than given Balance Limit enter new one \n";
            setbalancecheck();
        }
        setservicecharge(0);
        setinterest(5);
        setminbalance(4000);
    }
    virtual void writeCheck()
    {
        string n;
        int a,i,d,m,y;;
        cout<<"Enter the of person to whom you want to write to ";
        cin>>n;
        cout<<"Enter the Account No of the "<<n<<"  ";
        cin>>i;
        cout<<"Enter the Amount : ";
        cin>>a;
        if(a>balancecheck)
        {
            cout<<"Amount Greater than Current Balance \nEnter a New Amount or Press '0' to exit  \n";
            cin>>a;
            if(a==0)
                return;
            else if(a<balancecheck)
            {
                 cout<<"Check Written to "<<n<<endl;
                 cout<<"With Account Number "<<i<<endl;
                 cout<<"Amount is $"<<a<<endl;
                 cout<<"Enter today's Date in(dd/mm/yy) Format Enter respectively \n";
                 cin>>d>>m>>y;

            }
        }
        else
        {
                 cout<<"Check Written to "<<n<<endl;
                 cout<<"With Account Number "<<i<<endl;
                 cout<<"Amount is $"<<a<<endl;
                 cout<<"Enter today's Date in(dd/mm/yy) Format Enter respectively \n";
                 cin>>d>>m>>y;
        }
    }

    virtual void display()
    {
        cout<<"Account Holder : "<<getname()<<endl;
        cout<<"Account No : "<<getaccount()<<endl;
        cout<<"Current Bank Balance is "<<getbalancecheck()<<endl;
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        cout<<"Minimum Balance Limit is : $"<<minibalance()<<endl;
        cout<<"Service Charges Are : $"<<servicer()<<endl;
    }


    virtual void withdraw()
    {
            int amount;
            cout<<"Enter the Amount to Withdraw :";
            cin>>amount;
            if((balancecheck-amount)<minibalance())
            {
                cout<<"Sorry This Transaction is not Possible\n";
            }
            else
            {

            if(amount>=balancecheck)
            {
                cout<<"You Have Low Bank Balance \n";
            }
            else if(amount<balancecheck)
            {
                balancecheck-=amount;
                cout<<"Withdraw Successfull !!!\n";
                cout<<"Account Holder : "<<getname()<<endl;
            cout<<"Account No : "<<getaccount()<<endl;
            cout<<"Amount Withdrawn : $"<<amount<<endl;
            cout<<"Remaining Balance : $"<<balancecheck<<endl;
            }}
    }


    virtual void functionality()
    {
        display();
        int s;
        do{
        cout<<"**************************\n";
        cout<<"Enter your Selection According to the Choices below \n";
        cout<<"1. To Write Check\n";
        cout<<"2. To Check Interest Rate\n";
        cout<<"3. To Check Minimum Balance Limit \n";
        cout<<"4. TO Check the Service Charges \n";
        cout<<"5. To Deposit Cash \n";
        cout<<"6. To Withdraw Cash \n";
        cout<<"7. To Display Bank Balance \n";
        cout<<"8. To Have Monthly Bank Statement \n";
       // cout<<"9. To Display All Details "\n";
        cout<<"10. To Exit \n";
        cin>>s;
        if(s==1)
        writeCheck();
        if(s==2)
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        if(s==3)
        cout<<"Minimum Balance Limit is : $"<<minibalance()<<endl;
        if(s==4)
        cout<<"Service Charges Are : $"<<servicer()<<endl;
        if(s==5)
        makedeposit();
        if(s==6)
        withdraw();
        if(s==7)
        cout<<"Current Bank Balance is "<<getbalancecheck()<<endl;
        if(s==8)
        creatingstatement();
        if(s==9)
        display();
    }while(s!=10);

    }};



class highinterestChecking:public noserviceChargeChecking
{
public:
    virtual void functionality()
    {
        int s;
        setname();
        setaccountno();
        setbalancecheck();
        cout<<"Enter Minimum Balance For this Account \n";
        cin>>s;
        if(s<5000)
        {
            cout<<"Please go For 'No Service Checking Account',\nThis account is only for High Minimum Balance";
        }
        else
        {
        setminbalance(s);
        if(balancecheck<minibalance())
        {
            cout<<"Balance Less than given Balance Limit enter new one \n";
            setbalancecheck();
        }
        cout<<"Enter Interest Rate ";
        cin>>s;
        if(s<10)
        {
            cout<<"Please go For 'No Service Checking Account',\nThis account is only for high Interest rates";
        }
        else
        {
        setinterest(s);
        setservicecharge(0);
        do{
        cout<<"**************************\n";
        cout<<"Enter your Selection According to the Choices below \n";
        cout<<"1. To Write Check\n";
        cout<<"2. To Check Interest Rate\n";
        cout<<"3. To Check Minimum Balance Limit \n";
        cout<<"4. TO Check the Service Charges \n";
        cout<<"5. To Deposit Cash \n";
        cout<<"6. To Withdraw Cash \n";
        cout<<"7. To Display Bank Balance \n";
        cout<<"8. To Have Monthly Bank Statement \n";
        cout<<"9. To Display All Details\n";
        cout<<"10. To Exit \n";
        cin>>s;
        if(s==1)
        writeCheck();
        if(s==2)
        cout<<"Interest Rate is : "<<getinterest()<<"%\n";
        if(s==3)
        cout<<"Minimum Balance is : $"<<minibalance()<<endl;
        if(s==4)
        cout<<"Service Charges Are : "<<servicer()<<endl;
        if(s==5)
        makedeposit();
        if(s==6)
        withdraw();
        if(s==7)
        cout<<"Current Bank Balance is "<<getbalancecheck()<<endl;
        if(s==8)
        creatingstatement();
        if(s==9)
        display();
    }while(s!=9);

    }}}

};