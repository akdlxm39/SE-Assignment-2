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

	pair<string, string> bicycle_infoes_[MAX_NUMBER_OF_RENTED_BICYCLES] = {}; // 자전거 정보 배열
	
	int bicycle_count_ = 0; // 자전거 개수, 0으로 초기화

	void sortBicycleInfoes_(); // 자전거 정보 정렬

public:

	void startInterface(); // ViewRentedBicyclesUI 실행

	void addBicycleInfo(string bid, string bname); // 전달받은 자전거 정보 저장

};
#endif
