#include<iostream>
using namespace std;

class captulation 
{
	private :
		
		int a;
		int b;
	
	public :
		
		int getdata (int x)
		{
			x = a;
			return x;
		}
};

int main ()
{
	int c;
	captulation c1;
	
	cout << c1.getdata(23);
}
