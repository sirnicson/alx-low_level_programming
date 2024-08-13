# 0x15. C - File I/O

## Project Description

The objective of this project is to explore file input/output (I/O) operations in the C programming language. The tasks focus on performing various file manipulations such as reading from files, creating files, appending content to files, copying files, and extracting metadata from ELF files. By completing this project, you'll gain practical experience working with file descriptors, managing file permissions, handling errors, and manipulating file content using C.



# Tasks

0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);

Reads up to letters number of characters from the specified file.
Returns the actual number of characters read and printed.
Returns 0 if the file cannot be opened or read, if the filename is NULL, or if a write error occurs.

1. Under the snow
Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);

Creates a file with the specified filename and writes text_content to it.
The file should have the permissions rw------- (only the owner can read/write).
If the file already exists, it should be truncated.
Returns 1 on success, and -1 on failure.

2. Speak gently, she can hear
Write a function that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content);

Appends the text_content to the end of the specified file.
Returns 1 on success and -1 on failure.
If text_content is NULL, do nothing and return 1.
Do not create the file if it does not exist.

3. cp
Write a program that copies the content of a file to another file.

Usage: cp file_from file_to

Copies the content of file_from to file_to.
If file_to already exists, truncate it.
Handle errors such as inability to read from file_from or write to file_to by printing an error message and exiting with the appropriate code.
The program should use a buffer to read and write in chunks of 1,024 bytes.

4. elf (Advanced)
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename

Displays detailed information about the ELF file's header including magic number, class, data, version, OS/ABI, ABI version, type, and entry point address.
If the file is not an ELF file, exit with code 98 and display a comprehensive error message.
Use system calls like lseek and read efficiently.

