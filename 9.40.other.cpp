#include <iostream>
#include <vector>

using std::vector; using std::string; using std::cout; using std::endl;

void readwords(int numOfWords)
{
    vector<string> svec;
    svec.reserve(1024); // sets capacity to at least 1024
    string word{"test"};
    for (int i=0; i<numOfWords; ++i)    // input word continually
        svec.push_back(word);
    svec.resize(svec.size()+svec.size()/2); // sets capacity to at least 3/2's size. may do nothing.
    cout << "|" << numOfWords << " | " << svec.size()<< " | " << svec.capacity() << " | " << endl;

}

int main()
{
    cout << "| read | size | capacity |" << endl;
    cout << "| ---- | ---- | -------- |" << endl;
    readwords(256);
    readwords(512);
    readwords(1000);
    readwords(1048);
}
