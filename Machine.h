#ifndef MACHINE_H
#define MACHINE_H
#include <iostream>
#include <map>
#include <fstream>
using namespace std;
class Machine{
private:
    map <string, string> memory_cells;
    map <char, string> registers;
    string PC;
    string IR;
    //Program counter, points to the memory cell that will be executed next.
    //Instruction counter, every memory cell can only store 2 bits, and the IR should be 4 bits,
    //so the IR will equal to the value stored in PC + the value stored in the memory cell after PC.
    bool is_valid_opcode(string memory_cell);     // yassin
    bool is_valid_operand1(string memory_cell);   // noor
    bool is_valid_operand2(string str);   // yahia
    void i_1();                 // noor
    void i_2();                 // Yassin
    void i_3();                 // noor
    void i_4();                 // yahia
    void i_5();                 // noor
    void i_B();                 // yassin
    void i_C();                 // Yassin
    void show_status();         // Yassin
    void load_program(ifstream);// yahia
public:
    Machine(); // noor, constructor for initializing the PC.
    void menu(); // yahia
};
#endif //MACHINE_H
