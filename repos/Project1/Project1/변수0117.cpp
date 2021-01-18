#include<iostream>
#include<limits>
#include"헤더0118.h"

bool isEqual(int a, int b)
{
	bool result = (a == b);
	std::cout << std::boolalpha;
	return result; 
}
void printNumber(const int my_number)
{
	
	std::cout << my_number << std::endl;
}
int main()
{
	using namespace std;

	//bool b1 = true;

	//cout << b1 << endl;
	//cout << std::boolalpha; // 0,1을 true false로 출력
	////noboolalpha -> 다시 01로 표현
	//
	//cout << b1 << endl;
	//cout << !b1 << endl;
	//cout << (true && true) << endl; 
	//cout << std::noboolalpha;

	//if (false)
	//{
	//	cout << "This is true" << endl;
	//}
	//cout << isEqual(1, 0) << endl;


	//int x;
	//cout << "정수하나를 입력 :" << endl;
	//cin >> x;

	//if (x % 2 == 0) {
	//	cout << "짝수" << endl;
	//}
	//else
	//	cout << "홀수" << endl;
	//

	//char c1(65);
	//char c2('A');

	//cout << c1 << "" << c2 << "" << int(c1) << int(c2) << endl;
	//cout << static_cast<char>(c1) << endl;
	//cout << static_cast<int>(c2) << endl;

	//cout << "this is HD \n";
	//cout << "this is HD \t";
	//cout << "this is HD \"";
	//cout << sizeof(char);
	//cout << (int)std::numeric_limits<char>::max() << endl;
	////for (int i = 0; i < 128; i++)
	////{
	////	cout << (char)i << endl;
	//}
	

	//float pi = 3.14f; // 변수에 숫자를 대입하는게 literal상수
	//unsigned int n = 5u;

	//int x = 0xF; // 8진수
	//int y = 077; // 16진수

	//cout << x << endl;
	//cout << y << endl;

	//x = 0b1010'1101'0101; // 2진수 사입
	//cout << x << endl;

	const double gravity = 9.8;
	int number;
	cin >> number;
	const int special_number = number; // 런파일 정의
	cout << number << endl;
	
	constexpr int my_const = 123; //컴파일 정의

	const int price_per_item = 30;
	int price = number * price_per_item;

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::moon_gravity;

	return 0;
}