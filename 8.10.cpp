#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    ifstream in_file("8.10.txt");
    vector<string> v;
    string line;
    string word;
    while(in_file >> line){
        v.push_back(line);
    }
    for(const auto &i : v){
         istringstream iss(i);
         while(iss >> word){
             cout << word << " ";
         }
    }
    return 0;
}
