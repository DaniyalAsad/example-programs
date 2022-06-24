#include<iostream>
using namespace std;
class matrix
{
	int noOfRows;
	int noOfColums;
	int ** data;
	int *ptr;
	int *ptr1;
  public:
  	matrix()
  	{
  		noOfRows=0;
  		noOfColums=0;
	}
	matrix(const matrix &m ) 
	{
		noOfRows=m.noOfRows;
		noOfColums=m.noOfColums;		
	}
  void 	input(int noOfRows,int noOfColums)
	{
		cout<<"Enter No Of Rows : "<<endl;
		cin>>noOfRows;
		if(noOfRows<0){
			noOfRows=0;
		ptr=&noOfRows;
		 
		}
		else{
			 ptr= new int[noOfRows];
			 ptr=&noOfRows;
		}
		cout<<"Enter No OF colums : "<<endl;
		cin>>noOfColums;
		if (noOfColums<0)
		{
			noOfColums=0;
				 ptr1=&noOfColums;
			
		}
		else{
			 ptr1=new int [noOfColums];
			 ptr1=&noOfColums;
			 
		}
	}
	void displaydata()
	{
		data=&ptr;
		cout<<"No of rows are : "<<**data<<endl;
		data=&ptr1;
		cout<<"No of colums are : "<<**data<<endl;
	}
	~matrix()
	{
			cout<<"\n~~memory deleted~~";
		delete [] ptr;
		delete [] ptr1;
	
	}
	
};

int main()
{
	matrix m1;
	matrix m2=m1;
	m2.input(1,1);
	m2.displaydata();
	m2.~matrix();
}
