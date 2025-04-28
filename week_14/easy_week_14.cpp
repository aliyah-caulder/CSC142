#include <iostream>

void countdown_to_lightspeed(int seconds) {
    for (int i = seconds; i > 0; --i) {
        std::cout << "\nJumping in " << i << "...";
    }
    std::cout << "\nPunch it, Chewie!";
}

int main() {
    countdown_to_lightspeed(5);
    return 0;
}