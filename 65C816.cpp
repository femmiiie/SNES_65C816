#include <iostream>
using namespace std;



struct CPU {
    using Byte = unsigned char;    
    using Word = unsigned short;
    
    Byte PC; //Program Counter
    Word SP; //Stack Pointer

    Byte A, X, Y; //Registers

    Byte N, V, S, C : 1; //Status Flags
    Byte D, I, X, M, E, B : 1; //Status Flags

    void Reset() {

        A, X, Y = 0;

        N, V, S, C, D, I, X, M, E, B = 0;
    }
};


int main() {
    return 1;
}
