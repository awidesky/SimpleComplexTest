#include <iostream>
#include <chrono>

void simple(int n) {
    while (n) 
        n -= 1;
}

void complex(int n) {
    while (true) {
        if (!n)
            break;
        n -= 1;
    }
}

int main() {
    /*void (*func[2 * 3])(int) = {
        simple, complex,
        simple, complex,
        simple, complex,
    };
    
    for(const auto& f : func) {
        
    }*/
    
    for(int i = 0; i < 3; i++){
        auto start = std::chrono::high_resolution_clock::now();
        simple(100000000);
        auto stop = std::chrono::high_resolution_clock::now();
        std::cout << "simple : " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count() << "ms" << std::endl;

        start = std::chrono::high_resolution_clock::now();
        complex(100000000);
        stop = std::chrono::high_resolution_clock::now();
        std::cout << "complex : " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count() << "ms" << std::endl;
    }
}
