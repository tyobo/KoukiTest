#include <iostream>
#include<list>
#include<vector>

#pragma region 第1問(10点)
// 以下のクラスにコンストラクタ、デストラクタを追加してください。
// コンストラクタ、デストラクタの処理の内容はなんでも構いません

//class Point
//{
//public:
//	Point()
//	{
//		printf("コンストラクタ\n");
//	}
//	~Point()
//	{
//		printf("デストラクタ");
//	}
//};
//
//	int main()
//	{
//		Point point;
//	}
#pragma endregion
#pragma region 第2問(10点)
// int型の変数をnewを使い確保してください。
// また、char型の配列をnewを使い確保してください。
// どちらもdeleteを呼び出すようにしてください。

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
#pragma region 第3問(15点)
// 以下の継承先クラスのデストラクタが正しく呼び出されるように、
// クラスを修正してください。

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
#pragma region 第4問(25点)
// 以下の関数をテンプレート化して、
// 様々な型で計算できるようにしてください。
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
#pragma region 第5問(25点)
// 次のプログラムを修正し、以下のような表示になるようにプログラムを作成してください。
// num = 50
// num = 40
// num = 30
// num = 20
// num = 10
// また、リストを修正してください。その際表示は以下のようになるようにしてください。
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
//		 リストを修正してnum=30と表示されるようにプログラムを記述
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