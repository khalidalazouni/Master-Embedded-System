#created by khalid alazouni
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -gdwarf-2
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_name=learn-in-depth
all: $(Project_name).bin
	@echo "=======build is done========"

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(AsOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@ 
clean:
	rm *.elf *.bin
	@echo "removing .elf and .bin files"

clean_all:
	rm *.o *.bin *.elf
	@echo "all files deleted"