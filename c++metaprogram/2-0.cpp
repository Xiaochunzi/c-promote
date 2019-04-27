#include <iostream>

template<typename T>
struct add_const_ref
{
   typedef const T type;
};

int main()
{
    add_const_ref<int>::type a = 10;
    a = 11;
    return 0;
}
