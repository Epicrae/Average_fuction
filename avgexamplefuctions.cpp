#include <iostream>
using namespace std;
#include <iomanip>


int sum(int num1, int num2, int num3, int num4, int num5);

int main() {

	cout << "The avg would be :" << sum(28, 32, 37, 24, 33) << endl;

	system("pause");
	
}

int sum(int num1, int num2, int num3, int num4, int num5)
{
	int answer = num1 + num2 + num3 + num4 + num5;
	int real_answer = answer / 5;
	return real_answer;
}



