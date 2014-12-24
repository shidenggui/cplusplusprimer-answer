#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main(){
  vector<const char*> csl1{"hello world", "hello china"};
  vector<const char*> csl2{"hello world", "hello china"};

  cout << equal(csl1.cbegin(), csl1.cend(), csl2.cbegin()) << endl;
}
