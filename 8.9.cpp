#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    ifstream file_in("8.9.txt");
    string file_string;
    vector<string> vec;
    while(getline(file_in, file_string)){
        vec.push_back(file_string);
    }
    file_in.close();
    istringstream string_in;
    for(const auto &i : vec){
        string_in.str(i);
        string word;
        while(string_in >> word){
             cout << word << endl;
        }
        string_in.clear();
    }
    return 0;
}
