#include<iostream>
#include<cstring>
using namespace std;
class message
{
	protected:
		string msg;
		public:
			string getmsg(void)
			{
				return msg;
			}
			void setmsg(string msg)
			{
				this->msg=msg;
			}
};

class sms : public message
{
	string msg;
	public:
		string getmsg(void)
		{
			return message::msg;
		}
		void setmsg(string msg)
		{
			message::msg=this->msg;
		}
};

int main()
{
	message *p_msg=new message();
	p_msg->setmsg("oopf");
	sms *p_sms=new sms();
	p_sms->setmsg("final exam");
	cout<<p_msg->getmsg();
	cout<<endl<<p_sms->getmsg();
	return 0;
}
