#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class cuboid
{
  private:	
	float D1;
	float D2;
	float D3;
	
  public:
	cuboid()
	{
	    D1=1.00;
		D2=1.00;
	    D3=1.00;
	 	
	}	
	cuboid(float a,float b,float c)
	{
		D1=a;
		D2=b;
		D3=c;	 
	}
	
	cuboid(const cuboid &c)
	{
		D1=c.D1;
		D2=c.D2;
		D3=c.D3;
	}
	void setD1(float d)
	{
		D1=d;
	}
	
	void setD2(float e)
	{
		D1=e;
	}
	
	void setD3(float r)
	{
		D1=r;
	}
	
	void input()
	{
		start:
		cout<<"Enter the value of first Dimention: "<<endl;
		cin>>D1;
		if(D1<0 || D1>35.00){
		cout<<"Entered value is above requirments "<<endl;
		goto start;
	}
	
	else {
		sec:
		cout<<"Enter the value for 2nd Dimention: "<<endl;
		cin>>D2;
		}
		
		if(D2<0 || D2>35.00){
		cout<<"Entered value is above requirments "<<endl;
		goto sec;
	}
	else {
		rd:
		cout<<"Enter the value for 3rd Dimention: "<<endl;
		cin>>D3;
	}
		if(D3<0 || D3>35.00){
		cout<<"Entered value is above requirments "<<endl;
		goto rd;
	}
		
}
	
	
		
		
		void sum()
	{
		st:
		cout<<"Enter the value of first Dimention for sum: "<<endl;
		cin>>D1;
		if(D1<0 || D1>35.00){
		cout<<"Entered value is above requirments "<<endl;
		goto st;
	}
	
	else {
		se:
		cout<<"Enter the value for 2nd Dimention for sum: "<<endl;
		cin>>D2;
		}
		
		if(D2<0 || D2>35.00){
		cout<<"Entered value is above requirments "<<endl;
		goto se;
	}
	else {
		th:
		cout<<"Enter the value for 3rd Dimention for sum: "<<endl;
		cin>>D3;
	}
		if(D3<0 || D3>35.00){
		cout<<"Entered value is above requirments "<<endl;
		goto th;
	}
			
		
}
		



	
	cuboid& operator=(const cuboid& c)
	{
		D1=c.D1;
		D2=c.D2;
		D3=c.D3;
	}
	
	
	cuboid operator +(const cuboid & c2)
	{
		return cuboid(D1+c2.D1, D2+c2.D2, D3+c2.D3 );
		
	}
	
	
	
	write2file();
	
		
	void output()
	{
		cout<<"Sum of two Dimentions are: "<<D1<<" "<<D2<<" "<<D3<<endl;
	}
	
};
  int cuboid::write2file()
  {
   fstream file;
   file.open("data.txt",ios::app);
   if(file.is_open()){
   	file<<"Dimentions values are: "<<D1<<" "<<D2<<" "<<D3<<endl;
   	file.close();
   	
   }
   
  }

int main()
{

cuboid c,c1(1.00,1.00,1.00);
cuboid cube[3];
cuboid c2=c1;
for(int i=0;i<3;i++)
{
	cube[i].input();
	cube[i].write2file();
}
c.sum();
c1.sum();
c=c+c1;
c.output();

}




