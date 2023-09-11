#include <iostream>

namespace namespace_with_long_name1 {
    void displayMessage1() {
        std::cout << "Hello from Namespace 1!" << std::endl;
    }
}

namespace namespace_with_long_name2 {
    void displayMessage1() {
        std::cout << "Hello from Namespace 2!" << std::endl;
    }
}

namespace {
    void displayMessage1() {
        std::cout << "Hello from Unnamed Namespace!" << std::endl;
    }
}

int main() {
    // Defining namespace aliases
    namespace ns1 = namespace_with_long_name1;
    namespace ns2 = namespace_with_long_name2;

    // Using namespace aliases to call functions
    ns1::displayMessage1();
    ns2::displayMessage1();
    
    // Call function in unnamed namespace
    displayMessage1();

    return 0;
}
