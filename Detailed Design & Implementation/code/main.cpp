#include "main.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



// �Լ� ����
void startSystem();

// ���� ����
ifstream in_fp;
ofstream out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    startSystem();

    out_fp.close();
    in_fp.close();

    return 0;
}

void startSystem()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    MemberAccountCollection* member_accounts = new MemberAccountCollection();
    UserManager* user_manager = new UserManager();
    BicycleCollection* bicycles = new BicycleCollection();

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                CreateAccount* createAccount = new CreateAccount(member_accounts);
                createAccount->run();
                delete createAccount;
                break;
            }
            case 2:
            {
                break;
            }
            }
        }
    }
}