#ifndef CLASS2_H
#define CLASS2_H
#include "Class1.h"
#include <string>
using namespace std;
class Class2 : public Class1
{
	string name;
	int num;
public:
	Class2(string, int);
	void get_info();
};
#endif // !CLASS2_H