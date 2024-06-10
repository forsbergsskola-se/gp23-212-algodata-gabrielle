
#include <iostream>
#include <vector>
#include <any>




int main(int argc, char* argv[])
{
    std::vector<int> list;
    list.push_back(137);
    list.push_back(1000);
    list.push_back(-200);

    for (int i =0; i <list.size();i++)
    {
        std::cout << list[i]<<std::endl;
    }

    std::vector<std::any> arrayList;
    arrayList.push_back("forsberg");
    arrayList.push_back(true);
    arrayList.push_back('a');
    arrayList.push_back(1000);
    arrayList.push_back(0.12f);

    
    for (const auto& item : arrayList) {
        if (item.type() == typeid(int)) {
            std::cout << std::any_cast<int>(item) << std::endl;
        } else if (item.type() == typeid(const char*)) {
            std::cout << std::any_cast<const char*>(item) << std::endl;
        } else if (item.type() == typeid(bool)) {
            std::cout << std::boolalpha << std::any_cast<bool>(item) << std::endl;
        } else if (item.type() == typeid(char)) {
            std::cout << std::any_cast<char>(item) << std::endl;
        } else if (item.type() == typeid(float)) {
            std::cout << std::any_cast<float>(item) << std::endl;
        }
        
    }
    
    return 0;
}
