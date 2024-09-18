#include <iostream>
#include <cmath> // for pow function
#include <iomanip>

using namespace std;

int main() {
  double principle;
  double rate;
  double time;
  double interest;
  double amount;

// display values to ueser
  cout << "Enter the principle amount: ";
  cin >> principle;
  cout << "Enter the interest rate (as a decimal): ";
  cin >> rate;
  cout << "Enter the time in years: ";
  cin >> time;

// calculate amount
  amount = principle * pow((1 + rate), time);
  interest = amount - principle;
  
//Display to user
  cout << fixed << setprecision(2);
  cout << "Interest rate: " << rate * 100 << "%" << endl;  
  cout << "Time: " << time << endl;
  cout << "Principle: $" << principle << endl;
  cout << "Total amount after interest: $" << amount << endl;
  cout << "Interest earned: $" << interest << endl;

return 0;
}