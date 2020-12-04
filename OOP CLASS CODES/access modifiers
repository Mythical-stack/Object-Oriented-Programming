#include<iostream>
using namespace std;
class employee
{
    protected:
    int pay_rate;
    public:
    void set_pay_rate(int pay_rate)
    {
        if(pay_rate>14)
        {
            this->pay_rate = pay_rate;
        }
        else
        {
            cout <<"pay rate" << pay_rate << "not acceptable. NOT Setting --- " << endl;
        }        
    }
    int get_pay_rate()
    {
        return pay_rate;
    }
};

class facultymember:public employee
{
    public:
    void set_pay_rate(int pay_rate)
    {
        if(pay_rate>25)
        {
            this->pay_rate = pay_rate;
        }
        else
        {
            cout <<"pay rate" << pay_rate <<"not acceptable. not setting --- " << endl;
        }
        
    }
};

int main()
{
    employee a;
    a.set_pay_rate(15);
    cout <<"current pay rate:" << a.get_pay_rate() << endl;

    a.set_pay_rate(11);
    cout <<"current pay rate:" << a.get_pay_rate() << endl;

    a.set_pay_rate(20);
    cout << "current pay rate :" << a.get_pay_rate() << endl;

    cout <<"WE ARE CREATING A FACULTYMEMBER INSTANCE" << endl;

    facultymember f;
    f.set_pay_rate(11);
    cout <<"current pay rate:" << f.get_pay_rate() << endl;

    f.set_pay_rate(19);
    cout <<"current payrate:" << f.get_pay_rate() << endl;

    f.set_pay_rate(29);
    cout <<"current payrate:" << f.get_pay_rate() << endl;

    return 0;
}

