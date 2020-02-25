#include <iostream>
using namespace std;


int main(){
	int a =5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int* *z = &x;
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl<<"\n";

	cout<<"&a = "<<&a<<endl;
	cout<<"&b = "<<&b<<endl;
    cout<<"&c = "<<&c<<endl;
	cout<<"&x = "<<&x<<endl;
	cout<<"&y = "<<&y<<endl;
	cout<<"&z = "<<&z<<endl<<"\n";

    c = 'F';

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl<<"\n";

	*y = 'W';

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl<<"\n";

	*x = 6;

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl<<"\n";

	**z = 7;

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl<<"\n";




	return 0;
}
