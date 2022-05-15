#ifndef CLASS4_H
#define CLASS4_H
#include "Class3.h"
#include <string>
using namespace std;
class Class4 : public Class3
{
	string name;
	int num;
public:
	Class4(string, int);
	void get_info();
};
#endif // !CLASS4_H