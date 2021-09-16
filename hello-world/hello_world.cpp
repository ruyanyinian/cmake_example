#include "hello_world.hpp"

string ConcatString::returnConcatString()
{
    Hello hello; World world;
    string res = hello.return_hello() + world.return_world();
    return res;
}