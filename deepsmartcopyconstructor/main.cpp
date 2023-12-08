#include <iostream>
#include<string.h>

//using namespace std;
class vec {
private:
    // Variable to store the number of elements contained in this vec.
    size_t elements;
    // Pointer to store the address of the dynamically allocated memory.


public:
double* data;
    vec(size_t size) : elements{ size }, data{ new double[size] } {std::cout << "First constructor" << "\n"; };

    vec(size_t size, double ival) : elements{ size }, data{ new double[size] } {
        std::cout << "Second constructor" << std::endl;
        for (int i = 0; i < elements; i++) {
            data[i] = ival;
        }
    }

    vec(std::initializer_list<double> iList): vec(static_cast<size_t>(iList.size())) {
        std::cout << "Third constructor" << std::endl;
        auto count{ 0 };

        for (auto element: iList) {
            data[count] = element;
            count++;
        }

    }

    /// Copy constructor that creates a copy of the vec variable 'v'.
    vec(const vec& v) : elements{ v.elements }, data{ new double[v.elements] }{
        std::cout << "Copy constructor " << "\n";
        std::copy(v.data, v.data + v.elements, data);
    }

    /// Copy assignment operator. Creates a copy of vec variable 'v'.
    vec& operator=(const vec& v) {
        std::cout << "Copy assignment " << "\n";
        if (this != &v) {
            const auto new_data{ new double[v.elements] };
            delete[] data;

            data = new_data;
            elements = v.elements;
            std::copy(v.data, v.data + v.elements, data);
        }
        return *this;
    }

    double& operator[](size_t idx){
        return this->data[idx];
    }

    friend std::ostream& operator<<(std::ostream& os, const vec& v) {

        for (int i = 0; i < v.elements; i++) {
            os << v.data[i] << "\n";
        }

        return os;
    }
};

int main(void) {

    vec v2 = {4, 5, 6};
vec v4 = v2;

//v4[0] = 11;                                          // call to operator[]
//v4[1] = 12;

                                          // call to operator[]

std::cout<<(v4[1])<<std::endl;

return 0;
}
