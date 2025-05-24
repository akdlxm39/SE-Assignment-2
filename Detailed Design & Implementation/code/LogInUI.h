#ifndef LOG_IN_UI_H
#define LOG_IN_UI_H

#include <string>

#include "fileio.h"

using namespace std;

class LogIn;

class LogInUI
{
private:

	LogIn* log_in_ptr_; // LogIn 객체 주소

	string id_; // 로그인 하려는 회원의 ID
	string password_; // 로그인 하려는 회원의 비밀번호

public:
	LogInUI(LogIn* log_in_ptr); // 생성자

	string getID(); // ID 반환
	string getPassword(); // 비밀번호 반환

	void startInterface(); // LogInUI 실행
	void logIn(); // 로그인 회원 정보 입력 이벤트 처리 함수

};
#endif
