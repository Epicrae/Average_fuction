#include <iostream>
using namespace std;
#include <iomanip>



int main() {

	double item_one = 15.95, item_two = 24.95, item_three = 6.95, item_four = 12.95, item_five = 3.95;
	double sub_total = item_one + item_two + item_three + item_four + item_five;
	double sales_tax = 0.07;
	double total_price = sales_tax * sub_total;
	double grand_total = total_price + sub_total;
	
	
	cout << "Item1=$15.95\nItem2=$24.95\nItem3=$6.95\nItem4=$12.95\nItem5=$3.95\n______________\n"; // prices of items in a list
	cout << "The sales tax is 7% and your subtotal is "<<grand_total;
	   

	system("pause");
}