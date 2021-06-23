#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	string text = argv[1];

	reverse(text.begin(), text.end());

	cout << text << endl;

	return 0;

}