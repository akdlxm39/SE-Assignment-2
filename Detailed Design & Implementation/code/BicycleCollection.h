#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include <string>

#include "Bicycle.h"

using namespace std;

#define MAX_NUMBER_OF_BICYCLES 100

class BicycleCollection
{
private:

	Bicycle* bicycles_[MAX_NUMBER_OF_BICYCLES] = {}; // ������ ��ü �ּ� �迭, nullptr�� �ʱ�ȭ

	int bicycle_count_ = 0; // ������ ��ü�� ���� ���, 0���� �ʱ�ȭ

public:

	void addNewBicycle(string bid, string model_name); // ������ �߰�

	Bicycle* getBicycle(string bid); // ���ϴ� ������ ��ü �ּ� ��ȯ

};
#endif
