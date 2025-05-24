#ifndef RENTED_BICYCLE_COLLECTION_H
#define RENTED_BICYCLE_COLLECTION_H

#include <string>

#include "Bicycle.h"
#include "ViewRentedBicyclesUI.h"

using namespace std;

#define MAX_NUMBER_OF_RENTED_BICYCLES 10

class RentedBicycleCollection
{
private:

	Bicycle* rented_bicycles_[MAX_NUMBER_OF_RENTED_BICYCLES] = {}; // ���� ������ ��ü �ּ� �迭, nullptr�� �ʱ�ȭ

	int rented_bicycle_count_ = 0; // ���� ������ ��ü�� ���� ���, 0���� �ʱ�ȭ


public:

	void addBicycle(Bicycle* bicycle_ptr); // ������ �뿩

	void listAllBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr);  // ���� ��� ������ ���� ����

};
#endif
