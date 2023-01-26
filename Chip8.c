#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

uint16_t opcode;
uint16_t I;
uint8_t loadMem[3584]; 
uint8_t Memory[4096];
uint8_t v[16];
int display[64][32];
int PC;

uint8_t* loadMemory()
{
    FILE* ptr;
    int ch;
    int i = 0;

    // Opening file in reading mode
    ptr = fopen("IBMLogo.ch8", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        //printf("%x ", ch);
        loadMem[i] = ch;
        i++;
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);

    // Closing the file
    fclose(ptr);
    return (loadMem);
}

int main(){
    PC = 0x0200;
    uint8_t* Mem = loadMemory();

    for(int i = 0; i < sizeof(loadMem);i++){
        Memory[0x0200 + i] = Mem[i];
    }   

    opcode = Memory[PC] << 8 | Memory[PC+1];
    uint16_t nnn = opcode & 0x0FFF;
    uint8_t nn = opcode & 0x00FF;
    uint8_t n = opcode & 0x000F;
    int x = opcode & 0x0F00;
    int y = opcode & 0x00F0;
    while(1){
        switch(opcode & 0xF000){
            case 0x0000:
                switch (opcode & 0x00FF)
                {
                case 0x00E0:
                    for(int i = 0; i < 32; i++){
                        for(int j = 0; j < 64; j++){
                            display[i][j] = 0;
                        };
                    };
                    break;
                
                default:
                    break;
                }
            break;

            case 0x1000:
                PC = nnn;
                break;

            case 0x6000:
                v[x] = nn;
                break;

            case 0x7000:
                v[x] = nn;
                break;

            case 0xA000:
                I = nnn;
                break;

            case 0xD000:
                break;

            default:
                exit(42);
        }
    }
}
