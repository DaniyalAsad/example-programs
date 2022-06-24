#include<iostream>
#include<fstream>
using namespace std;
struct student
{
	int stdId;
	char name[20];
	double gpa;

};

const int totalrecords=100;

void selectrecords(const int *list,const int listsize)
{


	ofstream out;
	struct Student tempStud;
	for(int i=0;i<listsize;i++ )
	{
			ifstream in;
			in.open("std.dat");
			if(!in.is_open()){	
			cout<<"Error opening file...!\n";
			return ;
		}
		in.seekg(i*sizeof(list[i-1]),ios::beg);
		in.read((char*)&list[i],sizeof(list[i]));
		in.write((char*)&list[i],sizeof(list[i]));
	}
	in.close();
	
	
	
	
	
	
}
