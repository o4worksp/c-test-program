#include <iostream>
using namespace std;

template<typename T, typename U>
auto add(T x, U y) -> decltype(x+y)
{
	return x+y;
}

int main()
{
	int x = 12;
	int y = 13;
	decltype (x+y) z;
	z = x+y;

	cout << z << endl;

	auto t = add ("hello","world");
	cout << t << endl;

	return 0;
}
