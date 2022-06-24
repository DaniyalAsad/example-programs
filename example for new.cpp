#include<iostream>
using namespace std;
class sum
{
	
	public:
		int calculator(int a, int b)
		{
			return a+b;
		}
		
};
int main()
{
	sum *s=new sum();
	cout<<"sum of the values are : "<<s->calculator(1,2)<<endl;
}
