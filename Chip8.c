#include <stdio.h>

//Refresh should clear then draw
//Case to Choose which Opcode is running
char keypad{
  
  return(key);  
};

const char FontSet[80] = {
    //Font
    0xF0, 0x90, 0x90, 0x90, 0xF0, // 0
    0x20, 0x60, 0x20, 0x20, 0x70, // 1
    0xF0, 0x10, 0xF0, 0x80, 0xF0, // 2
    0xF0, 0x10, 0xF0, 0x10, 0xF0, // 3
    0x90, 0x90, 0xF0, 0x10, 0x10, // 4
    0xF0, 0x80, 0xF0, 0x10, 0xF0, // 5
    0xF0, 0x80, 0xF0, 0x90, 0xF0, // 6
    0xF0, 0x10, 0x20, 0x40, 0x40, // 7
    0xF0, 0x90, 0xF0, 0x90, 0xF0, // 8
    0xF0, 0x90, 0xF0, 0x10, 0xF0, // 9
    0xF0, 0x90, 0xF0, 0x90, 0x90, // A
    0xE0, 0x90, 0xE0, 0x90, 0xE0, // B
    0xF0, 0x80, 0x80, 0x80, 0xF0, // C
    0xE0, 0x90, 0x90, 0x90, 0xE0, // D
    0xF0, 0x80, 0xF0, 0x80, 0xF0, // E
    0xF0, 0x80, 0xF0, 0x80, 0x80  // F
};

/*uint16_t opcodes[6] = {
    00E0, //Clear screen
    1NNN, //Jump
    6XNN, //Set Register VX
    7XNN, //Add value to register VX
    ANNN, //Set index register
    DXYN  //Display/draw
};*/

uint16_t opcode;
bool Display[64][32];
//Point Counter and Index Register
uint16_t I;
int PC;
//Registers V0-VF
uint8_t V[16];
//Instruction
uint16_t inst;

uint8_t CPU()
{
    uint8_t Memory[4096];
    
    //Display Set to blank
    for(int i = 0; i < 64; i++){
        for(int j = 0; j < 32; j++){
            Display[i][j] = 0;
        }
    }
    
    uint8_t delayTimer;
    uint8_t soundTimer;
    
    return 0;
};

int main(){
    //Font Allocated in Memory
    for(int i = 0; i < sizeof(FontSet[80]); i++){
        Memory[50+i] = FontSet[i];
    }
    
    while(1){
        //Fetch
        inst = memory[PC] + memory[PC+1];
        PC += 2;
        //Decode
        
    }
    return 0;
}
