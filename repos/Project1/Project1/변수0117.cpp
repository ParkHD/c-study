#include<iostream>
#include<limits>
#include"���0118.h"

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
	//cout << std::boolalpha; // 0,1�� true false�� ���
	////noboolalpha -> �ٽ� 01�� ǥ��
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
	//cout << "�����ϳ��� �Է� :" << endl;
	//cin >> x;

	//if (x % 2 == 0) {
	//	cout << "¦��" << endl;
	//}
	//else
	//	cout << "Ȧ��" << endl;
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
	

	//float pi = 3.14f; // ������ ���ڸ� �����ϴ°� literal���
	//unsigned int n = 5u;

	//int x = 0xF; // 8����
	//int y = 077; // 16����

	//cout << x << endl;
	//cout << y << endl;

	//x = 0b1010'1101'0101; // 2���� ����
	//cout << x << endl;

	const double gravity = 9.8;
	int number;
	cin >> number;
	const int special_number = number; // ������ ����
	cout << number << endl;
	
	constexpr int my_const = 123; //������ ����

	const int price_per_item = 30;
	int price = number * price_per_item;

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::moon_gravity;

	return 0;
}