#include <iostream>
#include <cstring>
using namespace std;
class publication
{  private:
	char title[20];
	float price;
   public:
   	void getdata()
    {
	   cout<<"~enter Book Title~ "<<endl;
	   cin>>title;
	   cout<<"~enter the price~"<<endl;
	   cin>>price;    
  	}
	void putdata()
	{
		cout<<"TITLE IS "<<title<<endl;
		cout<<"PRICE IS : "<<price<<endl;	
	}

};


class book:public publication
{
	private:
		int page;
	public:
		void getdata()
		{
			cout<<"~Enter Number Of Page~ "<<endl;
			cin>>page;
		}
		void putdata()
		{
			cout<<"NUMBER OF PAGES : "<<page<<endl;
			
		}
		
};
class tape:public publication
{
	private:
		float time;
	public:
		void getdata()
		{   start:
			cout<<"~Enter Playing time in minutes~"<<endl;
			cin>>time;
			if(time<0 || time>59)
			{
				cout<<"~~INVALID ENTRY OF TIME~~"<<endl;
				goto start;
			}
	    }   	
		void putdata()
		{
			cout<<"PLAYING TIME OF THE TAPE IS: "<<time;
		}	
};

int main()
{
	publication p;
	book b;
	tape t;
	p.getdata();
	b.getdata();
	t.getdata();
	
	p.putdata();
	b.putdata();
	t.putdata();
	
	
	}
