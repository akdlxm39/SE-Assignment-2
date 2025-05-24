#include "BicycleCollection.h"

/*
	�Լ� �̸� : BicycleCollection::addNewBicycle()
	���	  : ������ �迭�� ������ �߰�
	���� ���� : string, string -> ������ ����
	��ȯ��    : ����
*/
void BicycleCollection::addNewBicycle(string bid, string model_name)
{
	Bicycle* new_bicycle = new Bicycle(bid, model_name);

	if (bicycle_count_ < MAX_NUMBER_OF_BICYCLES) {
		bicycles_[bicycle_count_] = new_bicycle;
		bicycle_count_ += 1;
	}
}

/*
	�Լ� �̸� : BicycleCollection::getBicycle()
	���	  : ã������ �����ſ� �ش��ϴ� ������ ��ü ��ȯ
	���� ���� : string -> ������ ID
	��ȯ��    : Bicycle* -> ������ ��ü �ּ�
*/
Bicycle* BicycleCollection::getBicycle(string bid)
{
	for (int i = 0; i < bicycle_count_; i++) {
		if (bicycles_[i]->isMatched(bid)) {
			return bicycles_[i];
		}
	}
	return nullptr;
}
