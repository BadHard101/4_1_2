#include <string>
#include <cmath>
#include "Class4.h"
using namespace std;
Class4::Class4(string name, int num) : Class3(name, num)
{
	this->name = name + "_4";
	this->num = pow(num, 4);
}
void Class4::get_info()
{
	cout << name << " " << num;
}