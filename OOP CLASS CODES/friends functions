#include<iostream>
using namespace std;
class employee
{
    private:
    int pay_rate;
    public:
    friend void access_pay_rate_directly( employee e);

    void set_pay_rate(int pay_rate)
    {
        if(pay_rate>14)
        {
            this->pay_rate = pay_rate;
        }
        else
        {
            cout <<"pay rate" << pay_rate << "not acceptable.not setting --- " << endl;
        }
    }

    int get_pay_rate()
    {
        return pay_rate;
    }
};

void access_pay_rate_directly(employee e)
{
    cout <<"pay rate " << e.pay_rate << endl;
}

int main()
{
    employee e;
    e.set_pay_rate(25);
    cout <<"current pay rate:" << e.get_pay_rate() << endl;
    return 0; 
}
