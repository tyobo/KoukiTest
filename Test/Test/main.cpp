#include <iostream>
#include<list>
#include<vector>

#pragma region ��1��(10�_)
// �ȉ��̃N���X�ɃR���X�g���N�^�A�f�X�g���N�^��ǉ����Ă��������B
// �R���X�g���N�^�A�f�X�g���N�^�̏����̓��e�͂Ȃ�ł��\���܂���

//class Point
//{
//public:
//	Point()
//	{
//		printf("�R���X�g���N�^\n");
//	}
//	~Point()
//	{
//		printf("�f�X�g���N�^");
//	}
//};
//
//	int main()
//	{
//		Point point;
//	}
#pragma endregion
#pragma region ��2��(10�_)
// int�^�̕ϐ���new���g���m�ۂ��Ă��������B
// �܂��Achar�^�̔z���new���g���m�ۂ��Ă��������B
// �ǂ����delete���Ăяo���悤�ɂ��Ă��������B

//int main()
//{
//	int* newInt = new int(10);
//	char* newChar = new char;
//
//	printf("newInt = %d\n", *newInt);
//
//	delete newInt;
//	newInt = nullptr;
//	delete newChar;
//	newChar = nullptr;
//}
#pragma endregion
#pragma region ��3��(15�_)
// �ȉ��̌p����N���X�̃f�X�g���N�^���������Ăяo�����悤�ɁA
// �N���X���C�����Ă��������B

//class Test
//{
//public:
//    Test()
//    {
//        printf("Test\n");
//    }
//    ~Test()
//    {
//        printf("~Test\n");
//    }
//};
//class Test2 : public Test
//{
//public:
//    Test2()
//    {
//        printf("Test2\n");
//    }
//    ~Test2()
//    {
//        printf("~Test2\n");
//    }
//};
//int main()
//{
//    Test2* t;
//    t = new Test2();
//
//    delete t;
//    return 0;
//}
#pragma endregion
#pragma region ��4��(25�_)
// �ȉ��̊֐����e���v���[�g�����āA
// �l�X�Ȍ^�Ōv�Z�ł���悤�ɂ��Ă��������B
//template <typename T>
//float Calc(float a, float b, int type)
//{
//    float ans = 0;
//    switch (type)
//    {
//    case 0:
//        ans = a + b;
//        break;
//    case 1:
//        ans = a - b;
//        break;
//    case 2:
//        ans = a * b;
//        break;
//    case 3:
//        ans = a / b;
//        break;
//    }
//
//    return ans;
//}
//
//int main()
//{
//    int ans1;
//    float ans2;
//    char ans3;
//
//    ans1 = Calc<int>(2, 5, 0);
//    ans2 = Calc<float>(10.0f, 2.5f, 3);
//    ans3 = Calc<char>(10, 4, 2);
//
//    return 0;
#pragma endregion
#pragma region ��5��(25�_)
// ���̃v���O�������C�����A�ȉ��̂悤�ȕ\���ɂȂ�悤�Ƀv���O�������쐬���Ă��������B
// num = 50
// num = 40
// num = 30
// num = 20
// num = 10
// �܂��A���X�g���C�����Ă��������B���̍ە\���͈ȉ��̂悤�ɂȂ�悤�ɂ��Ă��������B
// num = 30
//int main()
//{
//	std::list<int> lst;
//	for (int i = 0; i < 5; ++i)
//	{
//		lst.push_front((i + 1) * 10);
//	}
//
//	for (std::list<int>::const_iterator it = lst.begin(); it != lst.end();it != lst.end())
//	{
//		 ���X�g���C������num=30�ƕ\�������悤�Ƀv���O�������L�q
//		if (*it == 30)
//		{
//			++it;
//		}
//		else
//		{
//			it = lst.erase(it);
//			
//
//		}
//
//	}
//	for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//	{
//		printf("num = %d\n", *it);
//	}
//}
#pragma endregion
int main()
{
    std::vector<int> vec;

    for (int i = 0; i < 5; ++i)
    {
            vec.push_back((i)*10);
    }

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); )
    {
        if (*it == 30)
        {
            it = vec.erase(it);
        }
        else
        {
            ++it;
        }
    }


    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        printf("num = %d\n", *it);
    }
}