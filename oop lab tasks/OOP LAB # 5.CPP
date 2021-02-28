#include <iostream>
 using namespace std;
 int main ()
 {
 int numbers[5];
 int * p;
 p = numbers; 
*p = 1;
 p++;
*p = 2;
 p = &numbers[2]; 
*p = 3;
 p = numbers + 3;
*p = 4;
 p = numbers;
*(p+4) = 5;
 p=numbers;
 for (int n=0;n<5;n++)
 {
     cout << *p << endl;
     p++;
 }
 p= numbers;
 int max=0;
 for (int n=0;n<5;n++)
 {
     if(max<*p)
     {
         max=*p;
     }
     p++;
 }
 cout << "Max:" << max << endl;
 p=numbers;
 int min=6;
 for (int n=0;n<5;n++)
 {
     if(min>*p)
     {
         min = *p;
     }
     p++;
 }
 cout << "Min:" << min << endl; 
 p=numbers;
 float avg;
 int sum;
 for (int n=0;n<5;n++)
 {
     sum = sum+*p;
     p++;
     sum / avg;

 }
 cout << sum;
 return 0;
 }
