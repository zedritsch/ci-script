#include <iostream>
#include <fstream>

// @Zedritsch

const char REPLACEMENTS[] = {'\t', '\n', ' '};
const char BUILT_IN[] = {'"', '$', '\'', '(', ')', '*', ',', '.', ':', ';', '?', '@', '[', ']', '{', '}'};


// Function that add two numbers
int add(int x, int y) {
	return x + y;
}

// Function that multiplies two
// numbers
int multiply(int x, int y) {
	return x * y;
}

// Function that takes a pointer
// to a function
int invoke(int x, int y, int (*func)(int, int)) {
	return func(x, y);
}

// Driver Code
int main() {
	// Pass pointers to add & multiply
	// function as required
	std::cout << "Addition of 20 and 10 is ";
	std::cout << invoke(20, 10, &add) << '\n';

	std::cout << "Multiplication of 20" << " and 10 is ";
	std::cout << invoke(20, 10, &multiply) << '\n';

	return 0;
}

/*int main(const int ARGC, const char *ARGV[]) {
	if (ARGC < 2)
		return 0;

	std::wifstream file(ARGV[1]);
	if (file.fail())
		return 0;

	std::wstring str = L"😏😏😏😏😏";
	std::wcout << str;
	wchar_t ch = file.get();
	while (ch != 65535) {
		switch (ch) {
			case L' ':
				break;
		}

		ch = file.get();
	}

	return 1;
}*/