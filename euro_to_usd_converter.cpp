#include <iostream>
// Convert euro to USD

using namespace std;


int main()
{
  const double usd_per_euro{1.19};


  cout << "\n\t\t\t\t\tWelcome To The Euro To The USD converter" << endl;

  cout << "\n\tEnter the value in Euro: ";


  double euros {0.0};
  cin >> euros;



  double dollars{0.0};

  dollars = euros * usd_per_euro;

  cout << euros << " euros is equivalent to " << dollars << " dollars" << endl << endl;
}
