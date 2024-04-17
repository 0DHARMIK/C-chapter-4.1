#include<iostream>
using namespace std;
class x{
	public:
		int a,b,c;
};
class y :public x{
	public:
		void setdata()
		{
			cout<<"enter the value of a = ";
			cin>>a;
			cout<<"enter the value of b = ";
			cin>>b;
			cout<<"enter the value of c = ";
			cin>>c;
		}
	    void getdata()
	    {
	    	cout<<"sum of all three cube = "<<a*a*a + b*b*b + c*c*c<<endl;
		}
};
int main()
{
	y v;
	v.setdata();
	v.getdata();
}