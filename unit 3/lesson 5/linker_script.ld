/*linker_script cortexm-3 
khalid alazouni*/

MEMORY {
	flash(rx): ORIGIN = 0X08000000 , LENGTH = 128K
	sram(rwx): ORIGIN = 0X20000000 , LENGTH = 20K
}

SECTIONS {
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = .;
	}> flash

	.data : {
		_S_data = .;
    	*(.data*)
    	. = ALIGN(4);
    	_E_data = .;
	}> sram AT> flash

	.bss : {
		_S_bss = .;
		*(.bss*)
		_E_bss = .;	
		. = ALIGN(4);
		. = . + 0x1000;
		_heap_End = .;
		. = ALIGN(4);
		. = . + 0x1000;
		stack_top = .;
	}> sram
}