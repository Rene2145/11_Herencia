#include <iostream>
#include <string>
using namespace std;

class Figura {
protected:
string color;
public:
Figura(string c) : color(c) {}
};

int main() {
Figura f("Rojo");
return 0;
}
