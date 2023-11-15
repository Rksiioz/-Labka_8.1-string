#include <iostream>
#include <string>

using namespace std;


bool includes(string str, string substr) {
	return str.find(substr) != string::npos;
}

bool hasNoOrOn(const string str) {
	return includes(str, "no") || includes(str, "on");
}

string replaceAll(const string& input, const string from, const string to) {
	string result = input;
	size_t pos = result.find(from);

	while (pos != string::npos) {
		result.replace(pos, from.length(), to);
		pos = result.find(from);
	}

	return result;
}

string replaceNo(const string& input) {
	return replaceAll(input, "no", "***");
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);

	cout << "String contains no or on: " << boolalpha << hasNoOrOn(str) << endl;
	cout << "Replaced: " << replaceNo(str) << endl;

	system("pause");
	return 0;
}
