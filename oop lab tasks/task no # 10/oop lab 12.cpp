#include<iostream>
using namespace std;
class Enemy
{
public:
	static int Counter;
	Enemy()
	{
        Counter++;
        cout<<"Enemy Created Successfully \n";
	}

    static void display()
    {
        cout<<"Number Of Total Enemy Objects Available are: "<<Counter<<endl;
    }

	~Enemy()
	{
	    cout<<"Enemy Object Destroyed Successfully!!!\n";
		Counter--;
	}
};
int Enemy::Counter = 0;

int main()
{
	Enemy* Pntr1;
	Enemy* Pntr2;
	Enemy* Pntr3;

	Pntr1 = new Enemy;
	Enemy::display();
	Pntr2 = new Enemy;
	Enemy::display();
	Pntr3 = new Enemy;
    Enemy::display();
	delete Pntr2;
	delete Pntr3;
    Enemy::display();
    delete Pntr1;
	return 0;
}