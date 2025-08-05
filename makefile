all:
	avr-gcc -mmcu=atmega328p -Os -o main.elf main.c
	avr-objcopy -O ihex -R .eeprom main.elf main.hex

flash:
	avrdude -c arduino -p m328p -P COM4 -b 57600 -U flash:w:main.hex:i