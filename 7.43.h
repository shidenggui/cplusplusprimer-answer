#ifndef NO_DEFAULT_H
#define NO_DEFAULT_H
class NoDefault{
public:
    NoDefault(int a){
        mem = a;
    }
private:
    int mem;
};
class C{
public:
    C():nd(0){}
private:
    NoDefault nd;
};
#endif
