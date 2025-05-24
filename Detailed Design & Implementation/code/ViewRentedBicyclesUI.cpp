#include "ViewRentedBicyclesUI.h"

/*
	�Լ� �̸� : ViewRentedBicyclesUI::sortBicycleInfoes_()
	���	  : ���� ���� ��� ������ ������ ID ���� ���������� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void ViewRentedBicyclesUI::sortBicycleInfoes_()
{
	sort(bicycle_infoes_, bicycle_infoes_ + bicycle_count_);
}

/*
	�Լ� �̸� : ViewRentedBicyclesUI::startInterface()
	���	  : ViewRentedBicyclesUI ���� (�Է� �̺�Ʈ ����, ���� ���� ��� �������� ������ ID ���� ���������� ���)
	���� ���� : ����
	��ȯ��    : ����
*/
void ViewRentedBicyclesUI::startInterface()
{
	sortBicycleInfoes_();
	out_fp << "5.1. ������ �뿩 ����Ʈ\n";
	for (int i = 0; i < bicycle_count_; i++) {
		out_fp << "> " << bicycle_infoes_[i].first << " " << bicycle_infoes_[i].second << "\n";
	}
	out_fp << "\n";

}

/*
	�Լ� �̸� : ViewRentedBicyclesUI::addBicycleInfo()
	���	  : �Ű������� ���޹��� ������ ������ ������ ���� �迭�� ����
	���� ���� : string, string -> ������ ID, ������ �𵨸�
	��ȯ��    : ����
*/
void ViewRentedBicyclesUI::addBicycleInfo(string bid, string model_name)
{
	if (bicycle_count_ < MAX_NUMBER_OF_RENTED_BICYCLES) {
		bicycle_infoes_[bicycle_count_++] = { bid, model_name };
	}
}
