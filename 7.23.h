#ifndef CP5_Screen
#define CP5_Screen
#include <string>
using namespace std;
class Screen{
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), concents(ht * wd, c){}
    char get() const{
        return concents[cursor];
    }
    char get(pos r, pos c) const{
        return concents[r * width + c];
    }
private:
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    string concents;
};
#endif
