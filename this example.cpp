#include<iostream>
using namespace std;
class exp
{
	private:
		int a,b;
		public:
		exp(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		exp sum(exp &v)
		{
			a=v.a;
			b=v.b;
			return *this;
		}	
		void display()
		{
			cout<<"values of ab is : "<<a<< b;
		}
};
int main()
{
	exp a(5,6),b(0,0),c(0,0);
	b=c.sum(a);
	b.display();
}
