#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

using namespace std;

class Bicycle
{
private:

	string bid_; // 자전거 ID
	string model_name_; // 자전거 모델 명

public:

	Bicycle(string bid, string model_name); // 생성자

	string getBID(); // 자전거 ID 반환
	string getModelName(); // 자전거 모델 명 반환

	bool isMatched(string bid); // 맞는 자전거인지 확인

};
#endif
