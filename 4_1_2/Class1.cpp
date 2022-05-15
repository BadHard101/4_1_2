#include <string>

#include "Class1.h"
using namespace std;
Class1::Class1(string name, int num)
{
	this->name = name + "_1";
	this->num = num;
}
void Class1::get_info()
{
	cout << name << " " << num << endl;
}