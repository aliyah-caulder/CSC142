#include <iostream>
#include <iterator>

void write_to(char *ptr, std::size_t len, const int index, char input) {
    if (index < 0 || index > len - 1) {
        std::cerr<<"Invalid index at "<<index<<"\n";
    }
    else {
        ptr[index] = input;
    }
}

void read_from(const char *ptr, std::size_t len, const int index) {
    if (index < 0 || index > len - 1) {
        std::cerr<<"Invalid index at "<<index<<"\n";
    }
    else {
        std::cout<<"ptr["<<index<<"] = "<<ptr[index]<<"\n";
    }
}

int main() {
    char lower[] = "abc?e";
    auto lower_len = std::size(lower);

    char upper[] = "ABC?E";
    auto upper_len = std::size(upper);

    write_to(lower, lower_len, 3, 'd');
    read_from(lower, lower_len, 3);

    write_to(upper, upper_len, 3, 'D');
    read_from(upper, upper_len, 3);

    std::cout<<"lower: "<<lower<<"\n";
    std::cout<<"upper: "<<upper<<"\n";

    //Return 0 to indicate successful execution.
    return 0;
}