#include <iostream>
#include <memory>
using std::unique_ptr;
int main(){
    unique_ptr<int> fp(new int(42));
    unique_ptr<int> sp = fp;
    return 0;
}
