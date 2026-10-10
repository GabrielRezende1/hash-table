# Hash Table in C  

Hash Table in C from **[jamesroutley](https://github.com/jamesroutley/write-a-hash-table)** guided implementation.  

I wanted to make something challenging with C that wasn't a complex project, so I came up with the Hash Table idea. Although many modern languages have their own implementation of different hash tables, doing one from scratch while manipulating memory and pointers can be exhausting.  

## Installation  

If for some reason you want to test this implementation, you must have a C compiler installed on your machine. I used [GCC](https://www.mingw-w64.org/) for Windows.  
Clone the repo  
```
git clone https://github.com/GabrielRezende1/hash-table
```
Inside the folder, run the compiler.
``` powershell
gcc -std=c11 -Wall -Wextra -pedantic src/main.c src/prime.c -o build/hash_table_test; if ($LASTEXITCODE -eq 0) { ./build/hash_table_test }
```

## Credits  

This was a guided implementation provided by **[jamesroutley/write-a-hash-table](https://github.com/jamesroutley/write-a-hash-table)**.