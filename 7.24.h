#ifndef CP5_Screen
#define CP5_Screen
#include <string>
using namespace std;
class Screen{
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), concents(ht * wd, c){}
    Screen(pos ht, pos wd): height(ht), width(wd), concents(ht * wd, ' '){}
    char get() const{
        return concents[cursor];
    }
    char get(pos r, pos c) const{
        return concents[r * width + c];
    }
    Screen &move(pos r, pos c){
         cursor = r * width + c;
         return *this;
    }
private:
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    string concents;
};
#endif
