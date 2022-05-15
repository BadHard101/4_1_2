#include <string>
#include <cmath>
#include "Class3.h"
using namespace std;
Class3::Class3(string name, int num) : Class2(name, num)
{
	this->name = name + "_3";
	this->num = pow(num, 3);
}
void Class3::get_info()
{
	cout << name << " " << num << endl;
}