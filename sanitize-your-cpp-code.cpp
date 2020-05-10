#include <thread> // C++11 
int main() { 
    int *a = new int[4]; 
    int *b = new int[4]; 
    std::thread t{[&](){b++;}}; 
    delete a; 
    t.detach(); 
    return *a + (*++b) + b[3]; 
}

