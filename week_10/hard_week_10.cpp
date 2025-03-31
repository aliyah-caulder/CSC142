#include <iostream>
#include <string>

class MagicItem {
    private:
        std::string name;
        std::string power;
        int charges;

    public: 
        MagicItem(const std::string& n, const std::string& p, int c)
            : name{n}, power{p}, charges{c} {
                std::cout<<"Created "<<name<<" ("<<power<<" power) with "<<charges<<" charges."<<std::endl;
            }

        void use() {
            if (charges > 0) {
                charges -= 1;
                std::cout<<"Used "<<name<<". "<<charges<<" charges left."<<std::endl;
            }
            else {
                std::cout<<name<<" is out of charges."<<std::endl;
            }
        }
};

int main() {
    MagicItem bow{"Bow of Fire", "Fire", 2};
    bow.use();

    MagicItem staff{"Staff of Wind", "Air", 2};
    staff.use();

    MagicItem club{"Club of Ice", "Ice", 1};
    club.use();
    club.use();

    //Return 0 to indicate successful execution
    return 0;
}