Step 1: 
	RUN: 
		docker build -t hw1_debugger .
		docker run -it --rm --name hw1_running hw1_debugger
		
Step 2: You are inside docker container
	RUN: gdb hw1

Step 3: You are inside GDB with hw1 binary
	USEFUL COMMANDS:
		disassemble main		// code of main function
		disassemble secret		// code of secret function
		...
		b secret 				// break point in secret function
		run						// run program
		x/20x $sp				// this will print the top 10 elements of the stack
		please see 
			https://users.ece.utexas.edu/~adnan/gdb-refcard.pdf
			https://sourceware.org/gdb/current/onlinedocs/gdb/
