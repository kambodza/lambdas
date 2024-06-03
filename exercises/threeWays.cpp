#include <iostream>
#include <vector>
#include <algorithm>

// use STL algorithm to check if all elements are divisible by 3
// implement 3 versions:
// * lambda
// * functor
// * function

class Functor
{
private:
    /* data */
public:
    bool operator () (int num) const{ return ( num % 3 ) == 0; }
};


bool divisibleByThree( int num )
{
    return ( num % 3 ) == 0;
}

int main() {
    std::vector numbers = {18, 21, 36, 90, 27, 14, 103};

    //function
    std::cout << "Function:\n";
    for( auto i = 0; i < std::distance(numbers.begin(), numbers.end()); i++ )
    {
        std::cout << "Number " << numbers[i] << (divisibleByThree(numbers[i] ) ? " is divisible ":" is not divisible ") << "by 3\n";
    }

    //lambda
    std::cout << "Lambda:\n";
    auto lambdaDivByThree = [](int num){
        return ( num % 3 ) == 0;
    };
    for( auto i = 0; i < std::distance(numbers.begin(), numbers.end()); i++ )
    {
        std::cout << "Number " << numbers[i] << (lambdaDivByThree(numbers[i] ) ? " is divisible ":" is not divisible ") << "by 3\n";
    }

    //functor
    std::cout << "Functor:\n";
    Functor f;
    for( auto i = 0; i < std::distance(numbers.begin(), numbers.end()); i++ )
    {
        std::cout << "Number " << numbers[i] << (f(numbers[i] ) ? " is divisible ":" is not divisible ") << "by 3\n";
    }

    return 0;
}
