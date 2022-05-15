#ifndef CLASS3_H
#define CLASS3_H
#include "Class2.h"
#include <string>
using namespace std;
class Class3 : public Class2
{
	string name;
	int num;
public:
	Class3(string, int);
	void get_info();
};
#endif // !CLASS3_H