#include "RentedBicycleCollection.h"

/*
	�Լ� �̸� : RentedBicycleCollection::addBicycle()
	���	  : ���� ������ �迭�� ������ ��ü �ּ� ����
	���� ���� : Bicycle* -> ������ ��ü �ּ�
	��ȯ��    : ����
*/
void RentedBicycleCollection::addBicycle(Bicycle* bicycle)
{
	if (rented_bicycle_count_ < MAX_NUMBER_OF_RENTED_BICYCLES) {
		rented_bicycles_[rented_bicycle_count_] = bicycle;
		rented_bicycle_count_ += 1;
	}
}

/*
	�Լ� �̸� : RentedBicycleCollection::listAllBicycles()
	���	  : ���� ��� �������� ������ �� ������ ��ü���� ��ȯ�޾Ƽ�, �̸� ViewRentedBicyclesUI ��ü�� ����
	���� ���� : ViewRentedBicyclesUI* -> ������ ������ ������ ViewRentedBicyclesUI ��ü�� �ּ�
	��ȯ��    : ����
*/
void RentedBicycleCollection::listAllBicycles(ViewRentedBicyclesUI* view_rented_bicycles_ui_ptr)
{
	string bid, model_name;
	for (int i = 0; i < rented_bicycle_count_; i++) {
		bid = rented_bicycles_[i]->getBID();
		model_name = rented_bicycles_[i]->getModelName();
		view_rented_bicycles_ui_ptr->addBicycleInfo(bid, model_name);
	}
}
