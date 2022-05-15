#include "Class4.h"
#include <string>
using namespace std;
int main()
{
	string name;
	int num;
	cin >> name >> num;
	Class1* ob1 = new Class4(name, num);
	ob1->get_info();
	((Class2*)ob1)->get_info();
	((Class3*)ob1)->get_info();
	((Class4*)ob1)->get_info();
	return 0;
}
