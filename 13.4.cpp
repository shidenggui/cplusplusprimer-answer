#include <iostream>
using namespace std;

class Point {
public:
    Point() = default;
    Point(const Point &p){
        cout << "use copy con..." << endl;
    }
};
Point global;
Point foo_bar(Point arg){
    Point local = arg;
    cout << "pointer ......\n";
    Point *heap = new Point(global);
    cout << "pointer ......\n";
    *heap = local;
    cout << "arr ....." << endl;
    Point pa[4] = {local, *heap};
    cout << "arr ....." << endl;
    return *heap;
}
int main(){
    foo_bar(global);
    return 0;
}
