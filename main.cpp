#include <iostream>

using namespace std;
class Figura 
{
public:
    float x;
    Figura(int _x)
    {
        x = _x;
        cout << "hola soy una figura "<< endl;
    }  

    virtual float perimetro();
    virtual float area();              
};

class circulo: public Figura {
    public:
        circulo(int r) : Figura(r) {}
};

int main()
{
    return 0;
}

