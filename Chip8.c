#include <stdio.h>

//Refresh should clear then draw
//Case to Choose which Opcode is running
char keypad{
  
  return(key);  
};

const uint8_t FontSet[80] = {
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

uint16_t opcodes[6] = {
    00E0, //Clear screen
    1NNN, //Jump
    6XNN, //Set Register VX
    7XNN, //Add value to register VX
    ANNN, //Set index register
    DXYN  //Display/draw
};

bool Display[64][32];
//Point Counter and Index Register
uint16_t I;
uint16_t PC;
//Registers V0-VF
uint8_t V0;
uint8_t V1;
uint8_t V2;
uint8_t V3;
uint8_t V4;
uint8_t V5;
uint8_t V6;
uint8_t V7;
uint8_t V8;
uint8_t V9;
uint8_t VA;
uint8_t VB;
uint8_t VC;
uint8_t VD;
uint8_t VE;
uint8_t VF;

uint8_t CPU()
{
    uint8_t Memory[4096];
    //Font Allocated in Memory
    for(int i = 0; i <= sizeof(FontSet[80]); i++){
        Memory[50+i] = FontSet[i];
    }
    
    //Display Set to blank
    for(int i = 0; i <= 64; i++){
        for(int j = 0; j <= 32; j++){
            Display[i][j] = 0;
        }
    }
    
    uint8_t delayTimer;
    uint8_t soundTimer;
    
    return 0;
};

int main(){
    while(1){
        code = memory[PC];
    }
    return 0;
}
