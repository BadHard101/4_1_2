#include <string>
#include <cmath>
#include "Class2.h"
using namespace std;
Class2::Class2(string name, int num) : Class1(name, num)
{
	this->name = name + "_2";
	this->num = pow(num, 2);
}
void Class2::get_info()
{
	cout << name << " " << num << endl;
}