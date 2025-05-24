#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

using namespace std;

class Bicycle
{
private:

	string bid_; // ������ ID
	string model_name_; // ������ �� ��

public:

	Bicycle(string bid, string model_name); // ������

	string getBID(); // ������ ID ��ȯ
	string getModelName(); // ������ �� �� ��ȯ

	bool isMatched(string bid); // �´� ���������� Ȯ��

};
#endif
