#include <iostream>
using namespace std;
#include <iomanip>



int main()
{
	int user_guess;	
	cout << "Please choose a number of years to check the oceans water level :\n";
	cin >> user_guess;
	cout << "The ocean's level will be : " << user_guess * 1.5 << " millimeter per year in " << user_guess <<"years"<< endl;;

}
