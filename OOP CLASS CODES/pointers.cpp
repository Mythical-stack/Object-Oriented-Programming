#include<iostream>
using namespace std;
// pointer function
void pointer_test()
{
	int x=25;
	cout <<"value of x itself                 :" << x << endl;
	cout <<"value of address of x itself       :" << &x << endl;
	
	int *p;
	p=&x;
	
	cout <<"value of p itself                 :" << p << endl;
	cout <<"address of p (pointed by p)        :" << *p << endl;
	
}
int main()
{
	pointer_test();
	system ("pause");
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3};
	int *p;
	p = &a[0];
//	cout <<p << endl;
	cout << *p << endl;
//	cout << &a ; 
	cout << *p+2 ;
	system ("pause");
	return 0;
	
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3};
	int *p;
	p=a;
	for (int i=0;i<3;i++)
	{
		cout << *p << endl;
		//p=p+1;
		p++;
	}
	system ("pause");
	return 0;
}*/

#include<iostream>
using namespace std;
void pointer_test_array()
{
	int nums[10];
	for (int i=0;i<10;i++)
	nums[i]=i;
	int *p;
	p=nums; // notice the missing &
	cout <<"the value of nums               :" << nums << endl;
	cout <<"the value of &nums[0]           :" << &nums[0] << endl;
	cout << "value of p                     :" << p << endl;
	cout << "the value of *p                :" << *p << endl;
	cout <<"increment of p" << endl;
	p++;
	cout <<"value of p               :" << p << endl;
	cout << "value of *p             :" << *p << endl;
	
	cout <<"entering loop after resetting p-----" << endl;
	p= &nums[0];
	for (int i=0;i<10;i++)
	{
		cout <<"value of p               :" << p << "    ";
		cout <<"value of *p              :" << *p << "    " ;
		cout << "increment of p" << endl;
		p++;
	}
}

// another function
void null_pointer_test()
{
	int x=25;
	int *p,*q;
	p=&x;
	q= NULL ; // points to nothing
   
   cout <<"value of p" << p << endl;
   cout <<"value of *p" << *p << endl;
   cout <<"value of q " << q << endl;
   cout << "value of *q" << *q << endl;	
	
}
int main()
{
	//pointer_test_array();
	
	null_pointer_test();
	system ("pause");
	return 0;
}
/*#include<iostream>
using namespace std;
// pointer function
void pointer_test()
{
	int x=25;
	cout <<"value of x itself                 :" << x << endl;
	cout <<"value of address of x itself       :" << &x << endl;
	
	int *p;
	p=&x;
	
	cout <<"value of p itself                 :" << p << endl;
	cout <<"address of p (pointed by p)        :" << *p << endl;
	
}
int main()
{
	pointer_test();
	system ("pause");
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3};
	int *p;
	p = &a[0];
//	cout <<p << endl;
	cout << *p << endl;
//	cout << &a ; 
	cout << *p+2 ;
	system ("pause");
	return 0;
	
}

/*#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3};
	int *p;
	p=a;
	for (int i=0;i<3;i++)
	{
		cout << *p << endl;
		//p=p+1;
		p++;
	}
	system ("pause");
	return 0;
}*/

#include<iostream>
using namespace std;
void pointer_test_array()
{
	int nums[10];
	for (int i=0;i<10;i++)
	nums[i]=i;
	int *p;
	p=nums; // notice the missing &
	cout <<"the value of nums               :" << nums << endl;
	cout <<"the value of &nums[0]           :" << &nums[0] << endl;
	cout << "value of p                     :" << p << endl;
	cout << "the value of *p                :" << *p << endl;
	cout <<"increment of p" << endl;
	p++;
	cout <<"value of p               :" << p << endl;
	cout << "value of *p             :" << *p << endl;
	
	cout <<"entering loop after resetting p-----" << endl;
	p= &nums[0];
	for (int i=0;i<10;i++)
	{
		cout <<"value of p               :" << p << "    ";
		cout <<"value of *p              :" << *p << "    " ;
		cout << "increment of p" << endl;
		p++;
	}
}

// another function
void null_pointer_test()
{
	int x=25;
	int *p,*q;
	p=&x;
	q= NULL ; // points to nothing
   
   cout <<"value of p" << p << endl;
   cout <<"value of *p" << *p << endl;
   cout <<"value of q " << q << endl;
   cout << "value of *q" << *q << endl;	
	
}
int main()
{
	//pointer_test_array();
	
	null_pointer_test();
	system ("pause");
	return 0;
}
