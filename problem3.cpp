#include<iostream>
using namespace std;
int main()
{
	int x,y,s,d,m,q,r;
	cout << "Enter two numbers: " << endl;
	cin >> x;
	cin >> y;
	s=x+y;
	d=x-y;
	m=x*y;
	q=x/y;
	r=x%y;
	cout << "Sum=" << s << endl << "Difference=" << d << endl << "Product=" << m << endl << "Quotient=" << q << endl << "Remainder=" << r;
 
}
