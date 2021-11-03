Task for this projects

Exercise 0:Write a script that runs a C file through the preprocessor 
and save the result into another file:gcc -E $CFILE >> c.

Exercise 1:Write a script that compiles a C file but does not link:
gcc -S $CFILE.

Exercise 2:Write a script that generates the assembly code of a C code
and save it in an output file:gcc -c $CFILE.

Exercise 3:Write a script that compiles a C file and creates an 
executable named cisfun:gcc $CFILE -o cisfun.

Exercise 4:Write a C program that prints exactly "Programming is 
like building a multilingual puzzle, followed by a new line:
puts("\"Programming is like building a multilingual puzzle");.

Exercise 5:Write a C program that prints exactly:
printf("with proper grammar, but the outcome is a piece of art,\n");

Exercise 6:Write a C program that prints the size of various types 
on the computer it is compiled and run on.
printf("Size of a char: %i byte(s)\n", sizeof(char));(Same format)

Exercise 8:Write a script that generates the assembly code(Intel syntax)
of a C code and save it in an output file:gcc -S -masm=intel $CFILE.

Exercise 9:Write a C program that prints exactly:write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);
