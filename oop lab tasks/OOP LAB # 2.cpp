// TASK NO 1:
______________
/*Create a structure called employee that contains two members: an employee number (type int)
and the employee’s compensation (in dollars; type float). Ask the user to fill in this data for
three employees, store it in three variables of type struct employee, and then display the
information for each employee. */


/*#include<iostream>
#include<cmath>
using namespace std;
struct employee
{
	int number;
	float compensation;
};
int main()
{
	employee e[3];
	employee c[3];
	cout <<"enter the 1st employee number" << endl;
	cin >> e[0].number ;
	cout <<"enter the 2nd employye number " << endl;
	cin >> e[1].number;
	cout <<"enter the 3rd employee number" << endl;
	cin >> e[2].number ;
	
	
	cout <<"enter the 1st employee compensation" << endl;
	cin >> c[0].compensation ;
	cout << "enter the 2nd employee compensation" << endl;
	cin >> c[1].compensation ;
	cout <<"enter the 3rd employee compensation" << endl;
	cin >> c[2].compensation ;
	
	
	
	cout << "1st employee number" << e[0].number << endl;
	cout << "2st employee number " << e[1].number << endl;
	cout << "3st employee number" << e[2].number << endl;
	
	cout << "1st employee compensation" << c[0].compensation << endl;
	cout << "2nd employee compensation" << c[1].compensation << endl;
	cout << "3rd employee compensation" << c[2].compensation << endl;
			
	system ("pause");
	return 0;
}*/

TASK NO 2:
___________

/*. Create a structure called time. Its three members, all type int, should be called hours, minutes,
and seconds. Write a program that prompts the user to enter a time value in hours, minutes,
and seconds. The program should then store the time in a variable of type struct time, and
finally print out the total number of seconds. */


/*#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
};
int main()
{
	time t;
	int total_sec;
	cout <<"enter the time value in hours , minutes , and seconds" << endl;
	cin >> t.hours >> t.minutes >> t.seconds ;
	cout << "you entered the " << t.hours << ":" << t.minutes <<":" << t.seconds <<endl;
	total_sec = t.hours*3600 + t.minutes*60 +t.seconds ;
	cout <<"your total sec is " << total_sec << endl;
	
  	system("pause");
	return 0;
}*/

TASK NO 3:
___________

/*Use the time structure from above question and write a program that obtains two time values
from the user, stores them in struct time variables, converts each one to seconds (type int), adds
these quantities, converts the result back to hours-minutes- seconds, stores the result in a time
structure, and finally displays the result in 12:59:59 format */

/*#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
	
};


int main()
{
	time t1,t2;
	long int sum,sum1,sum2;
	long int h,m,s;
	cout <<"enter the hours" << endl;
	cin >> t1.hours;
	cout << "Enter the minutes" << endl;
	cin >> t1.minutes;
	cout << " enter the seconds" << endl;
	cin >> t1.seconds ;
	// sum  of the quantitites
	sum= (t1.hours*3600)+(t1.minutes*60)+(t1.seconds);
	
	cout <<"the total sum is=" << sum << endl;
	
	cout <<"enter the hours" << endl;
	cin >> t2.hours;
	cout << "Enter the minutes" << endl;
	cin >> t2.minutes;
	cout << " enter the seconds" << endl;
	cin >> t2.seconds ;
	// the second sum is
	sum+=(t2.hours*3600)+(t2.minutes*60)+(t2.seconds);
	
	cout <<"the second sum is=" << sum << endl;
	
	h= sum /3600;
	sum1 = sum % 3600;
	m = sum1/60;
	sum2 = sum1%60;
	s=sum2;	
	cout <<"the time is" << h << ":" << m << ":" << s <<  << endl;
	
	system ("pause");
	return 0;
	
}*/

TASK NO 4:
____________

/*Create a structure called Volume that uses three variables of type Distance to model the volume
of a room. Initialize a variable of type Volume to specific dimensions, then calculate the volume
it represents, and print out the result. To calculate the volume, convert each dimension from a
Distance variable to a variable of type float representing feet and fractions of a foot, and then
multiply the resulting three numbers. */

/*#include<iostream>
using namespace std;
// create a structure
struct volume
{
	int len,width,height,l_inch,w_inch,h_inch;
	
};
int main()
{
	volume v;
	float height,lenght,width,volume;
	cout <<"First of all enter the feets and then inches" << endl;
	cout <<"enter the lenght of the room in feet and inches" << endl;
	cin >> v.len >> v.l_inch ;
	cout <<"enter the width of the room in feet and inches" << endl;
	cin >> v.width >> v.w_inch ;
	cout <<"enter the height of the room in feet and inches" << endl;
	cin >> v.height >> v.h_inch ;
	
	// now at this point converted these values in float
	
	lenght = v.len+((float)(v.l_inch)/12);
	width = v.width+((float)(v.w_inch)/12);
	height = v.height+((float)(v.h_inch)/12);
	
	// the floats value are
	cout <<"the floats values are" << endl;
	cout <<"the lenght of the room in foots in " <<  lenght  << endl;
	cout << "the base of the room in footss in" <<  width << endl;
	cout <<"the height of the room in foots in" <<  height << endl;	
	
	volume = lenght*width*height ;
	cout <<"the total volume of the room is" << volume << endl;
	
 	system ("pause");
	return 0;
}*/

TASK NO 5:
__________

/* A phone number, such as (212) 767-8900, can be thought of as having three parts: the area code
(212), the exchange (767), and the number (8900). Write a program that uses a structure to
store these three parts of a phone number separately. Call the structure phone. Create two
structure variables of type phone. Initialize one, and have the user input a number for the other
one. Then display both numbers. The interchange might look like this: 
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212*/

/*#include<iostream>
using namespace std;
// create a structure
struct phone
{
	int area_code;
	int the_exchange;
	int the_number;
};
int main() 
{
	phone p,p1;
	p1.area_code = 212;
	p1.the_exchange = 767;
	p1.the_number = 1212;
	cout <<"My number is " << "(" << p1.area_code << ")"  << " " << p1.the_exchange << "-" << p1.the_number << endl;
	cout <<"enter the area code , the exchange , and the number" << endl;
	cin >> p.area_code >> p.the_exchange >> p.the_number ;
	cout << "your number is"  << "(" << p.area_code << ")"  << " " << p.the_exchange << "-" << p.the_number << endl;

	system("pause");
	return 0;
}*/


