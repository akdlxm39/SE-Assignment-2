#ifndef VIEW_RENTED_BICYCLES_UI_H
#define VIEW_RENTED_BICYCLES_UI_H

#include <string>
#include <algorithm>

#include "fileio.h"

using namespace std;

#define MAX_NUMBER_OF_RENTED_BICYCLES 10

class ViewRentedBicyclesUI
{
private:

	pair<string, string> bicycle_infoes_[MAX_NUMBER_OF_RENTED_BICYCLES] = {}; // ������ ���� �迭
	
	int bicycle_count_ = 0; // ������ ����, 0���� �ʱ�ȭ

	void sortBicycleInfoes_(); // ������ ���� ����

public:

	void startInterface(); // ViewRentedBicyclesUI ����

	void addBicycleInfo(string bid, string bname); // ���޹��� ������ ���� ����

};
#endif
