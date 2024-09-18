// description
#include <iostream>
using namespace std;

int main(){
  
//constants
  const float sugar_cups = 1.5;
  const int butter_cups = 1;
  const float flower_cups = 2.75;
  const int cookies_recipe = 48;

//get # of cookies from user
  float(input "Enter number of cookies: ") = num_of_cookies

//calulations
  float sugar_needed = (num_of_cookies / cookies_recipe) * sugar_cups;
  float butter_needed = (num_of_cookies / cookies_recipe) * butter_cups;
  float flour_needed = (num_of_cookies / cookies_recipe) * flower_cups;

//Display
  print(f"To make {num_of_cookies} cookies, you will need: "))
  print(f"{sugar_needed} cups of sugar")
  print(f"{butter_needed} cups of butter")
  print(f"{flour_needed} cups of flour")

  