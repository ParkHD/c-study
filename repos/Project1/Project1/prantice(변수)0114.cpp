//#include<iostream> 
//#include<cmath>
//#include<limits>
//#include<iomanip> //����°���((�Ҽ��� �Ʒ� ��Ʈ��))
//
//int main()
//{
//	using namespace std;
//
//	bool bValue = false;
//	char chValue = 'A';
//	float fValue = 3.141592f; //f�� �Ⱥ����� float���� double�� �ִ²� ���� ©�� ����
//	double dValue = 3.141592;
//
//	auto aValue1 = 3.141592;
//	auto aValue2 = 3.141592f;
//
//	cout << (bValue ? 1 : 0) << endl;
//	cout << (int)chValue << endl;
//
//	cout << fValue << endl;
//	cout << dValue << endl;
//
//	cout << "������� "<<sizeof(int) << endl; // byte ����
//
//	int a = 123; // copy initialization
//	int b(123); // dirent initialization
//	int c{ 123 }; // uniform initialization
//	int d = (int)3.14;
//	
//	int k, l=123, m;
//
//	// short�� 2Byte = 16 bits
//	cout << std::pow(2, sizeof(short) * 8 - 1)-1 << endl;//��������
//	// ���� ��Ÿ���� ��Ʈ 1 , 0�� ��Ÿ���� ��Ʈ 1
//	cout << std::pow(2, sizeof(int) * 8 - 1) - 1 << endl;
//
//	cout << std::numeric_limits<short>::max() << endl;
//	cout << std::numeric_limits<short>::min() << endl;
//	cout << std::numeric_limits<short>::lowest() << endl;
//
//	short s = 32767;
//	s = s + 1;
//
//	cout << s << endl; // overflow �ִ밪���� 1�� ���ؼ� �� �ڷ� ��
//
//	short s1 = -32768;
//	s1 = s1 - 1;
//	cout << s1 << endl << endl;
//
//	unsigned int i = -1;
//	cout <<i << endl;
//
//	cout << (float)22 / 4 << endl;
//
//	std::int16_t ii(5);
//	std::int8_t i1 = 65; //char�������� ��ȯ
//	 
//	std::int_fast8_t fi(5); // 8bit �߿� ���Ϻ�����
//	std::int_least64_t fi2(5); // ��� 64bit ������ Ÿ���߿�
//	std::int_fast32_t fi3(5);
//	
//	float ff(3.141592f);
//	double dd(3.141592);
//	long double d1;
//
//	cout << 3.14 << endl;
//	cout << 31.4e-1 << endl; // e = 10^
// 
//	cout << 4.0 / 3.0 << endl;
//	//cout << std::setprecision(17) << endl; // �ڸ� �� ���� -> �����߻�Ȯ�� ����
//	cout << 4.0 / 3.0 << endl;
//
//	double dou1(1.0);
//	double dou2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
//
//	cout << dou1 << endl;
//	cout << dou2 << endl; // ->���� �߻�
//
//	double zero = 0.0;
//	double posinf = 5.0 / zero;
//	double neginf = -5.0 / zero;
//	double nan = zero / zero;
//
//	cout << posinf << std::isnan(posinf)<< endl; // �������� �ƴ��� 1->����x
//	cout << neginf << std::isnan(neginf) << endl; // ind = ���ڰ� �ƴϴ�
//	cout << nan << std::isnan(nan) << endl;
//	cout << 1 << std::isnan(1.0) << endl;
//
//	cout << posinf << std::isinf(posinf) << endl; // ���Ѵ����� �ƴ��� 1->����x
//	cout << neginf << std::isinf(neginf) << endl;
//	cout << nan << std::isinf(nan) << endl;
//
//	cout << std::setprecision(17) << endl;
//	cout << (double)1230002e-4 << endl;
//	cout << 1e-8 << endl;
//	cout << 23456e4<<endl;
//	
//}
