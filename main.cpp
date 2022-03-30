#include <iostream>
#include <string>

int main(int count, char ** val)
{
    int iter = std::stoi((std::string)val[1]); 
    for (int i=0; i < iter; i++)
    {
        std::cout << i+1 << "\t:" << "Hello !" << std::endl;
        if (iter - 1 == i)
            std::cout << "wery good nice" << std::endl;
    }
    return 0;
}
