## GCC

* `gcc -c source1 source2 ... sourceN` compile '.c' sourcefile to '.o' objectfile with the same name
* `gcc in1 in2 .. inN -o outfile` compile sources and link them to outfile
* `gcc -E file.c` show preprocessor output
* `nm object_file.o` show defined symbols in object_file.o 
*  `valgrind --leak-check-full program` check program for memory leaks
