#include <iostream>
#include <string>
#include <vector>

class hello
{
    public:
    int length;
    int breadth;
    hello()
    {
        int length = 0;
        int breadth = 0;
    }
    hello(int lenght)
    {
        // this(5,8);
        this->length = 4;
        breadth = 5;
    }
    hello(int length, int breadth)
    {
        this->length = 7;
        this->breadth = 8;
    }
    void m1()
    {
        std::cout << length * breadth << std::endl;
    }
};
class Recatangle8
{
    public:
    static void main(std::vector<std::string> &args)
    {
        hello* obj = new hello();
        obj->m1();
        hello* obj1 = new hello(10);
        obj1->m1();
        hello* obj2 = new hello(12, 2);
        obj2->m1();
    }
};
int main(int argc, char **argv){
	std::vector<std::string> parameter(argv + 1, argv + argc);
	Recatangle8::main(parameter); 
	return 0;
};
