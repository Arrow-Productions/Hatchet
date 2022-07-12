#include "headers/vulkanClass.hpp"

#include <iostream>
#include <stdexcept>

// Hatchet Function
int main() {
    Hatchet app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}