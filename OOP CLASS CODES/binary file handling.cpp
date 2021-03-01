#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void open_file()
{
	ofstream fout;
	string line = " my test line --- ";
	fout.open("sample.txt");
	fout << line << endl;
	fout.close();
	
	ifstream fin;
	fin.open("sample.txt");
	while (fin)
	{
		getline(fin,line);
		cout << line << endl;
	}
	fin.close();
}
void output_matrix(int a[][3],int rows ,int cols)
{
	for(int i=0;i<rows;i++){
	 for(int j=0;j<cols;j++)
	 {
	 	cout << a[i][j] << "  ";
	 }
	 cout << endl;
}

	
}
void bin_example()
{
	int pixels[3][3];
	for(int i=0;i<3;i++)
	for(int j=0;i<3;j++)
	pixels[i][j] = 1+i*j;
	
	output_matrix (pixels , 3,3);
	// writing to the file
	ofstream fout("data.txt",ios::binary);
	for (int i=0;i<3;i++)
	for (int j=0;j<3;j++)
	fout.write((char*)&pixels[i][j] ,sizeof(int));
	
	
	fout.close();
	
	cout <<"Ressetting the pixels" << endl;
	for (int i=0;i<3;i++)
	for (int j=0;j<3;j++)
	pixels [i][j] = 0;
	output_matrix(pixels,3,3);
	
	cout <<"reding again " << endl;
	ifstream fin ("data.txt", ios::binary);
	if(fin.fail())
	{
		cout <<"file could not be open" << endl;
	}
	else
	{
		for(int i=0;i<3;i++)
		 for(int j=0;j<3;j++)
		 fin.read((char*)&pixels[i][j] ,sizeof(int));
		 
	}
	fin.close();
	output_matrix(pixels,3 ,3);
}
int main()
{
//	open_file();

bin_example();	
	
	system ("pause");
	return 0;
}

