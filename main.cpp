// description
#include <iostream>
using namespace std;

int main(){
  
//constants
  const float sugar_cups = 1.5;
  const int butter_cups = 1;
  const float flower_cups = 2.75;
  const int cookies_recipe = 48;

//Variables
  int num_of_cookies;
  float sugar_needed, butter_needed, flour_needed;

 // Get number of cookies from user
  cout << "Enter number of cookies: ";
  cin >> num_of_cookies;

//calulations
  sugar_needed = (num_of_cookies / static_cast<float>(cookies_recipe)) * sugar_cups;
  butter_needed = (num_of_cookies / static_cast<float>(cookies_recipe)) * butter_cups;
  flour_needed = (num_of_cookies / static_cast<float>(cookies_recipe)) * flower_cups;

 // Display
  cout << "To make " << num_of_cookies << " cookies, you will need:" << endl;
  cout << sugar_needed << " cups of sugar" << endl;
  cout << butter_needed << " cups of butter" << endl;
  cout << flour_needed << " cups of flower" << endl;

  return 0;
}

  