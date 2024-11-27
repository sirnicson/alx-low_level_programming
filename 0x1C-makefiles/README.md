# 0x1C. C - Makefiles

## Project Overview
This project focuses on learning and using Makefiles, a tool that automates the compilation process for C projects. The goal is to create efficient and optimized Makefiles for compiling C programs.

## Learning Objectives
By the end of this project, you should be able to:

- Understand what Makefiles are and when to use them.
- Create Makefiles to automate the compilation of C programs.
- Use rules and variables in Makefiles effectively.
- Differentiate between explicit and implicit rules.
- Understand the most common rules and how to use them.
  
## Project Tasks

### Task 0: Create Your First Makefile
- **Objective:** Create a Makefile that compiles two C files (`main.c` and `school.c`) into an executable called `school`.
- **Requirements:**
  - Name of the executable: `school`
  - No variables are required.
  - The `all` rule should build the executable.

### Task 1: Add Variables to Makefile
- **Objective:** Modify the Makefile to use variables for the compiler (`CC`) and the source files (`SRC`).
- **Requirements:**
  - Variables: `CC`, `SRC`
  - The `all` rule should still build the executable `school`.

### Task 2: Introduce Object Files
- **Objective:** Update the Makefile to compile object files (`.o`), and only recompile the updated source files.
- **Requirements:**
  - Variables: `CC`, `SRC`, `OBJ`, `NAME`
  - The `all` rule should recompile only changed source files.

### Task 3: Implement Clean and Rebuild Rules
- **Objective:** Enhance the Makefile to include cleaning rules like `clean`, `oclean`, `fclean`, and `re`.
- **Requirements:**
  - `clean` deletes all Emacs and Vim temporary files along with the executable.
  - `oclean` deletes object files.
  - `fclean` deletes all temporary files, the executable, and object files.
  - `re` forces recompilation of all source files.
  - The `all` rule should still only recompile updated source files.

### Task 4: Complete Makefile with Additional Flags
- **Objective:** Complete the Makefile by adding compilation flags to the `CFLAGS` variable and fine-tuning other existing rules.
- **Requirements:**
  - Include the `CFLAGS` variable for compiler flags.
  - Ensure the `clean`, `oclean`, `fclean`, and `re` rules function correctly.
