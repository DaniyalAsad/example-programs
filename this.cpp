#include <iostream> 
#include <fstream> 
 
using namespace std; 
 
int main(){ 
	char ch;	
	ifstream fin; 
	fin.open("this.cpp");	//this.cpp is the name of the current file 
	while(!fin.eof()){ 
		fin.read((char*)&ch, sizeof(ch)); 
		cout << ch; 
	} 
	return 0; 
} 
