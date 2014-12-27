#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

map<string, string> buildMap(ifstream &map_file){
    map<string, string> trans_map;
    string short_word;
    string words;
    while(map_file >> short_word){
        getline(map_file, words);
        words = words.substr(1);
        //trans_map.insert({short_word, words});
        trans_map[short_word] = words;
    }
    for(const auto &i : trans_map){
        cout << i.first << " " << i.second << endl;
    }
    return trans_map;
}
const string & transform(const string &s, const map<string, string> &m){
    //auto key = m.find(s);
    auto key = m[s];
    if(key != m.end()){
        return key->second;
    }
    return s;
}
void word_transform(ifstream &map_file, ifstream &input){
    auto trans_map = buildMap(map_file);
    string word;
    string line;
    while(getline(input, line)){
        istringstream word_stream(line);
        while(word_stream >> word){
            cout << transform(word, trans_map);
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    ifstream map_file("transkeyword.txt");
    ifstream input("source.txt");
    word_transform(map_file, input);
    return 0;
}
