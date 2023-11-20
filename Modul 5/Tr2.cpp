#include <iostream>

using namespace std;

int main()
{
	int p[4] = {1, 1, 0, 0};
	int q[4] = {1, 0, 1, 0};

	cout << "----------------------------------------------" << endl;
	cout << "| P | Q | P AND Q | P OR Q | NOT P | P XOR Q |\n";
	cout << "----------------------------------------------" << endl;

	for (int a = 0; a < 4; a++)
	{
		cout << "| " << p[a] << " | " << q[a] << " |    " << (p[a] && q[a]) << "    |    " << (p[a] || q[a]) << "   |   " << !p[a] << "   |    " << (p[a] ^ q[a]) << "    |\n";
	}

	cout << "----------------------------------------------" << endl;
}