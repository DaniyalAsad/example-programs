#include <iostream>
using namespace std;
class publication
{  public:
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
	virtual void showprice()
	{
		cout<<"PRICE FROM CLASS PUBLICATION : "<<price<<endl;
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
		void showprice()
	{
		cout<<"PRICE FROM CLASS BOOK : "<<price<<endl;
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
			cout<<"PLAYING TIME OF THE TAPE IS: "<<time<<endl;
		}	
		void showprice()
	{
		cout<<"PRICE FROM CLASS TAPE : "<<price<<endl;
	}
};

int main()
{
	publication *p,p1;
	book *b,b1;
	tape *t,t1;
	p=&p1;
	p->getdata();
	b=&b1;
	b->getdata();
	t=&t1;
	t->getdata();
	p->putdata();
	b->putdata();
	t->putdata();
	p=&b1;
	p->showprice();
	p=&t1;
	p->showprice();
	
	
	}
