#include "13.18.h"
int Employee::id_seed = 0;
Employee::Employee(const string &s): id(id_seed++), name(s){}
void Employee::print() const {
    cout << "id: " << id << " name: " << name << endl;
}

