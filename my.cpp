#include <iostream>
#include <vector>
//#include <iterator>
/*
std::string parseString(int number) {
    int digits = 0;
    int divisor = 1;
    std::string result;

    for ( int i = number; i != 0 ; i /= 10 ) {
        digits += 1;
    }    
    for ( int i = digits; i > 0; i-- ) {
        divisor *= 10;
    }
    for ( ; divisor > 10; ) {
        int temp;

        divisor /= 10;
        temp = number / divisor;
        number -= temp * divisor;
        result += temp + 48;
    }

    return result;
}
*/
std::string parseString(int number) {
    std::string result;

    for ( ; number > 0; number /= 10 ) {
        result += number % 10 + 48;
    }
    result = std::string(result.rbegin(), result.rend());
    
    return result;
}

int main() {
    int num;    

    std::cin >> num;
    //std::cout << num % 100 << std::endl;
    std::cout << "-----------------\n" << parseString(num) << std::endl;

    return 0;
}

/*
class MyClass {
    protected:
        int a;
    public:
        MyClass(int a): a(a) {}
    
        virtual int func() = 0;
        virtual void sf() {}
         
        int getA() {
            return a;
        }
};

class Derived: public MyClass {
    public:
        Derived(int a): MyClass(a) {
            this->a = a;
        }

        int func() {
            return a + 100;            
        }

        int brbr() {
            return 100500;
        }
};

class Container {
public:
    std::vector<MyClass*> v;
    void add(MyClass* a) {
        v.push_back(a);
    }
};

std::ostream& operator<<(std::ostream& out, MyClass* unit) {
    out << unit->func() << std::endl;

    return out;
}

int main() {
    std::vector<int> myVector;
    //std::vector<int>::iterator it;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);

    std::vector<int>::iterator it = myVector.begin() + 1;

    myVector.erase(it);

    for(int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << ' ';
    }
    
            
    return 0;
}*/

