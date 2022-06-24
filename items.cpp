#include<iostream>
using namespace std;
class item
{
	char name[100];
	double price;
public:
	void setname(){
		cout<<"Enter Name of the items : ";
		gets(name);
	}
	void setprice()
	{
		cout<<"Enter Price : ";
		cin>>price;
	}	
	char* getname()
	{
		return name;
	}
	double getprice()
	{
		return price;
	}
		
	
};

class bill
{
	int id;
	int itemCount;
	int *list;
	double billAmount;
public:
	bill()
	{
		id=0;
		id++;
	}
	void coumputeallbills(bill b[],int numbills)
	{
		for (int i=0; i<numbills; i++ )
		{
			b[i].computeonebill(b+i);
			itemcount++;
		}
	}
	void computeonebill(bill *bi)
	{
	
	}
};


int main()
{
	
}
