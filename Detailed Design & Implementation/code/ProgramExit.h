#ifndef PROGRAM_EXIT_H
#define PROGRAM_EXIT_H

#include "ProgramExitUI.h"

using namespace std;

class ProgramExit
{
private:

	int* is_program_exit_ptr_; // is_program_exit �ּ�

	ProgramExitUI* program_exit_ui_ptr_;

public:

	ProgramExit(int* is_program_exit_ptr); // ������
	~ProgramExit(); // �ı���

	void run(); // ProgramExit ����

};
#endif