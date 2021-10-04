// Convert lower case to upper case
// using bit wise operation
#include <bits/stdc++.h>
using namespace std;

char convert_to_upper_case(char ch) {
	char upper_case = ch & '_';
	return upper_case;
}
int main() {
	char ch = 'a';
	char upper_case = convert_to_upper_case(ch);
	cout << "input: "<< ch << endl;
	cout << "output: " << upper_case << endl;
	return 0;
}
// here lower case 'a' will convert into 'A'
// input: a
// output: A