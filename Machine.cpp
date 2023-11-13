#include "Machine.h"

bool Machine :: is_valid_operand2(string memory_cell)
{
	//It must be 4 digits, first two for 0x the other two for the memory cell
	if (memory_cell.size() != 4 || !(memory_cell[0] == '0' && memory_cell[1] == 'x'))
		return 0;
	
	//The memory cell can't exceed F or be less than 0
	if (!(0 > memory_cell[2] && memory_cell[2] > 'F') && !(0 > memory_cell[3] && memory_cell[3] > 'F'))
		return 0;

	return 1; //If previus conditions are false then the memory cell is valid
}

bool Machine::is_valid_operand1(string str)
{
    string charset = "0123456789ABCDEF";
    //It must be 3 digits, first two for 0x the other one for the memory cell
    //the register must be one character in hexa (1-f)
    if (str.size() == 3 && charset.find(toupper(str[2])) != string::npos)
        return 1;
    return 0;

}