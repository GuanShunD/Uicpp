#define _CRT_SECURE_NO_WARNING 1
#include<iostream>
#include<string>
#include<assert.h>

using namespace std;

namespace gsd
{
	class string
	{
	public:
		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}
void test_string1() {
	string s1;
	string s2("hello world");
	string s3(s2);
	string s4(s2, 6, 1000);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	for (size_t i = 0; i < s1.size(); i++) {
		s2[i] += 1;
	}

	for (size_t i = 0; i < s1.size(); i++) {
		cout << s2[i] << " ";
	}
}
int main() {

	return 0;
}

//int main() {
//	string s1;
//	string s2("hello world");
//	string s3(s2);
//	string s4(s2, 6, 1000);
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	return 0;
//}

//int main() {
//	int x = 10;
//	//Ö¸Õë
//	auto y = &x;
//	auto* z = &x;
//	//ÒýÓÃ
//	auto& m = x;
//
//	return 0;
//}