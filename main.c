#define REGISTER volatile unsigned char * const

REGISTER DDRB  = (REGISTER) 0x24;
REGISTER PORTB = (REGISTER) 0x25;

int main(void){
    // set pin 13 as output pin
    *DDRB |= (1 << 5);

    // set pin 13 high
    *PORTB |= (1 << 5);

    while(1) {}  
}