#include <iostream>

int main()
{
    std::string strValue = "workspace";

    int indexPos = 3;

    // Remove character from string at given index position
    strValue.erase( strValue.begin() + indexPos,
                    strValue.begin() + indexPos + 2);

    std::cout<<strValue << std::endl;


    return 0;
}