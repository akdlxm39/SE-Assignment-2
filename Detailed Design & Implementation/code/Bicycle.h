#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
using namespace std;

class Bicycle
{
private:
	string bid_;

	string model_name_;


public:
	Bicycle(string bid, string model_name);

	string getBID();

	string getBname();

	bool isMatched(string bid);

};
#endif
