#include <iostream>
using namespace std;

int main() 
{
	int l,b,perimeter;
	cout<<"enter the length of the rectangle:";
	cin>>l;
	cout<<"enter the breadth of the rectangle:";
	cin>>b;
	perimeter=2*(l+b);
	cout << "Perimeter="<< perimeter;
	return 0;
}
