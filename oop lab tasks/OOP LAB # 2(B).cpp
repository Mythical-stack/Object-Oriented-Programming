/*Q1. Write a function Fun which takes as input a reference to an array and a reference to a function (The
referenced Function sums all the values in the array using pointers and returns the result to the calling
function), the function further returns the sum to main function where it stores in a result variable pointed by
ptr pointer.*/

#include<iostream>
#include<string>
using namespace std;
int sum(int* a[5])
{
    int c=0;
    for (int i=0;i<5;i++)
    {
        c= c+ *a[i];
    }
    return c;
}
int fun(int* b[5],int(*sum)(int* b[5]))
{
    int g=0;
    g=(*sum)(b);
    return g;
}
int main()
{
    int sum1;
    int a[5]={1,2,3,4,5};
    int *b[5];
    for (int i=0;i<5;i++)
    {
        b[i]=&a[i];
    }
    sum1=fun(b,sum);
    cout << sum1;
    return 0;
}

/*Q2. Write a program which contains a function isPalindrome, the function checks a string using pointers
whether it is a palindrome or not and based on the decision return Ture or False. A string/word that reads the
same backwards as forward is known as palindrome.*/

#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(int* a[10])
{
	string r;
	int counter = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] == a[10 - i])
			counter++;
	}
	if (counter == 5)
		r = "True";
	else
		r = "False";
	return r;
}

int main()
{
	char  a[10];
	char* b[10];
	for (int i = 0; i < 10; i++)
	{
		cin.getline(a[i], 10, '/n');
		b[i] = &a[i];
	}
	isPalindrome(b);
	return 0;
}

/*Q3. Declare two arrays of length 5. Initialize one of them from user input. Make the second one duplicate of
the first one using pointers arithmetic and assignment operator.*/

#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    int* c[5];
    cout <<"Enter the elements of first array" << endl;
    for (int i=0;i<5;i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<5;i++)
    {
        c[i] = &a[i];
        b[i] = *c[i];
        cout << b[i];
    }
    return 0;
}
