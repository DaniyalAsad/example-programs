#include<iostream>
using namespace std;
class factorial
{
	private:
	
		
	public:
	
		
		int fact(int n){
		
		if(n<=1)
		{
			return 1;
		}
		else
		{
			return n* fact(n-1);
		}
}
};
int main()
{
	factorial f;
	int x;
	cout<<"Enter the number : ";
	cin>>x;
	cout<<"factorial of the number "<<x<<" is :"<<f.fact(x);
}
