task no 1:

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct menuItem
{
	string name;
	int Q;
	string Waittime;
	float T,Charges;
	char  in[5];
};
void getData(menuItem menuList[],int n)
{    
	ifstream in;
	in.open("data.txt");
	for(int i=0;i<n;i++)
	{   
		 in>>menuList[i].name;
		 in>>menuList[i].Q;
		 in>>menuList[i].T;
		 in>>menuList[i].Waittime;
		 in>>menuList[i].Charges;
		 for(int j=0;j<5;j++)
		 {
		 	in>>menuList[i].in[j];
		 }
	}
}
void showMenu(menuItem menuList[],int n)
{   cout<<"Enter the Desired Value According to Num of Item \n";
	for(int i=0;i<n;i++)
	{    cout<<i+1<<".   ";
		 cout<<menuList[i].name<<"\t";
		 cout<<menuList[i].Q<<"\t";
		 cout<<menuList[i].T<<"\t";
		 cout<<menuList[i].Waittime<<"\t";
		 cout<<menuList[i].Charges<<"\t";
		 for(int j=0;j<5;j++)
		 {
		 	cout<<menuList[i].in[j];
		 }cout<<endl;
	}
}
void printCheck(menuItem menuList[],int n)
{  int opt,q,d[9]={0,0,0,0,0,0,0,0,0},counter=0,q1[9]={0,0,0,0,0,0,0,0,0};
char k;
float bill=1.0,bill1=0.0;
	do{ 
    	showMenu(menuList,n);
    	cin>>opt;
    	d[counter]=opt;
    	cout<<"Enter the Quantity of the Item ";
    	cin>>q;
    		q1[counter]=q;
    bill=(menuList[opt-1].Charges)*q;
    bill=bill*(menuList[opt-1].T);
    bill1=bill1+bill;
    cout<<"Do you want to make any other choice or not(y/n)?";
    cin>>k;
    	if(k=='y')
    	counter++;
	}while(k!='n');
	cout<<"BILL DISPLAYING >>>>>>>>>>>\n";
	cout<<"Item Name\t  Quantity \t Tax \tCharges per Serving \t\n";
	for(int z=0;z<counter+1;z++)
	{
	      opt=d[z];
	      q=q1[z];
	      cout<<menuList[opt-1].name<<"\t";
	      cout<<q<<"\t";
	      cout<<menuList[opt-1].T<<"\t";
	      cout<<menuList[opt-1].Charges<<"\t";
	      cout<<endl;
	}
	cout<<"Total Bill is  $"<<bill1;
}
int main()
{  
    menuItem menuList[9];
    getData(menuList,9);
    printCheck(menuList,9);
    
return 0;	
}


// data.txt

PlainEgg 10 0.1 10mints 1.45 A,B,C
BaconandEgg 22 0.2 20 2.45 E,F,G
Muffin 23 0.3 30mints 0.99 H,I,J
Frenchtoast 22 0.2 20 2.45 E,F,G
PlainEgg 10 0.1 10mints 1.45 A,B,C
BaconandEgg 22 0.2 20 2.45 E,F,G
PlainEgg 10 0.1 10mints 1.45 A,B,C
BaconandEgg 22 0.2 20 2.45 E,F,G
PlainEgg 10 0.1 10mints 1.45 A,B,C
