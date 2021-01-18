//#include<iostream> 
//#include<cmath>
//#include<limits>
//#include<iomanip> //입출력관리((소수점 아래 컨트롤))
//
//int main()
//{
//	using namespace std;
//
//	bool bValue = false;
//	char chValue = 'A';
//	float fValue = 3.141592f; //f를 안붙히면 float형에 double을 넣는꼴 따라서 짤릴 수있
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
//	cout << "사이즈는 "<<sizeof(int) << endl; // byte 단위
//
//	int a = 123; // copy initialization
//	int b(123); // dirent initialization
//	int c{ 123 }; // uniform initialization
//	int d = (int)3.14;
//	
//	int k, l=123, m;
//
//	// short는 2Byte = 16 bits
//	cout << std::pow(2, sizeof(short) * 8 - 1)-1 << endl;//제곱힘수
//	// 음수 나타내는 비트 1 , 0을 나타내는 비트 1
//	cout << std::pow(2, sizeof(int) * 8 - 1) - 1 << endl;
//
//	cout << std::numeric_limits<short>::max() << endl;
//	cout << std::numeric_limits<short>::min() << endl;
//	cout << std::numeric_limits<short>::lowest() << endl;
//
//	short s = 32767;
//	s = s + 1;
//
//	cout << s << endl; // overflow 최대값에서 1을 더해서 맨 뒤로 감
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
//	std::int8_t i1 = 65; //char형식으로 변환
//	 
//	std::int_fast8_t fi(5); // 8bit 중에 제일빠른거
//	std::int_least64_t fi2(5); // 적어도 64bit 데이터 타입중에
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
//	//cout << std::setprecision(17) << endl; // 자리 수 조절 -> 오차발생확룰 높다
//	cout << 4.0 / 3.0 << endl;
//
//	double dou1(1.0);
//	double dou2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
//
//	cout << dou1 << endl;
//	cout << dou2 << endl; // ->오차 발생
//
//	double zero = 0.0;
//	double posinf = 5.0 / zero;
//	double neginf = -5.0 / zero;
//	double nan = zero / zero;
//
//	cout << posinf << std::isnan(posinf)<< endl; // 숫자인지 아닌지 1->숫자x
//	cout << neginf << std::isnan(neginf) << endl; // ind = 숫자가 아니다
//	cout << nan << std::isnan(nan) << endl;
//	cout << 1 << std::isnan(1.0) << endl;
//
//	cout << posinf << std::isinf(posinf) << endl; // 무한대인지 아닌지 1->숫자x
//	cout << neginf << std::isinf(neginf) << endl;
//	cout << nan << std::isinf(nan) << endl;
//
//	cout << std::setprecision(17) << endl;
//	cout << (double)1230002e-4 << endl;
//	cout << 1e-8 << endl;
//	cout << 23456e4<<endl;
//	
//}
