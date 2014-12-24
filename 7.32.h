#ifndef CP5_Screen
#define CP5_Screen
#include <string>
#include <vector>
using namespace std;
class Screen;
class Window_mgr{
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    vector<Screen> screens;
};
//void Window_mgr::clear(ScreenIndex);
class Screen{
public:
    friend void Window_mgr::clear(ScreenIndex);
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c){}
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' '){}
    char get() const{
        return contents[cursor];
    }
    char get(pos r, pos c) const{
        return contents[r * width + c];
    }
    Screen &move(pos r, pos c){
         cursor = r * width + c;
         return *this;
    }
    Screen &set(char c){
         contents[cursor] = c;
         return *this;
    }
    Screen &set(pos r, pos c, char ch){
         contents[r * width + c] = ch;
         return *this;
    }
    Screen &display(ostream &os){
         do_display(os);
         return *this;
    }
    const Screen &display(ostream &os) const{
         do_display(os);
         return *this;
    }
private:
    void do_display(ostream &os) const{
         os << contents;
    }
    pos height = 0;
    pos width = 0;
    pos cursor = 0;
    string contents;
};

#endif
