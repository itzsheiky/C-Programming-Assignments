# C Programming Assignments

**Student:** Sheik Dawood  
**Course:** B.E. Computer Science and Engineering

Four small C programs for practicing first-year programming concepts. Each program is independent and has its own `main` function.

| File | What it does | Main concept |
| --- | --- | --- |
| `calculator.c` | Adds, subtracts, multiplies, or divides two numbers. | `switch` and arithmetic |
| `feedback.c` | Takes a name, rating, and comment; saves and displays them. | Text file handling |
| `atm.c` | Simulates balance checking, deposits, and withdrawals. | `do-while`, `switch`, and conditions |
| `student_records.c` | Stores and prints details for up to five students. | Structures, arrays, and `for` loops |

## Compile and run

Open a terminal in this folder. Compile each file separately with GCC:

```sh
gcc -std=c11 -Wall -Wextra calculator.c -o calculator
gcc -std=c11 -Wall -Wextra feedback.c -o feedback
gcc -std=c11 -Wall -Wextra atm.c -o atm
gcc -std=c11 -Wall -Wextra student_records.c -o student_records
```

On Windows, run `./calculator.exe`, `./feedback.exe`, `./atm.exe`, or `./student_records.exe` from PowerShell. On Linux or macOS, omit `.exe`. The feedback program creates `feedback.txt` in the folder where you run it; that generated file is ignored by Git.

## How to explain the programs in a practical exam

- **Calculator:** The user picks an operation and enters two `float` numbers. A `switch` selects the calculation. Division checks the second number before dividing.
- **Feedback:** `fgets` reads text, and `scanf` reads the rating. `fopen` creates the text file, `fprintf` writes the answers, and `fclose` closes it. The program opens the file again and displays its contents with `fgets`.
- **ATM:** A demo PIN unlocks a menu. A `do-while` loop repeats the menu, while a `switch` handles the chosen action. `balance` changes only for valid deposits and withdrawals. This program does not use real banking services.
- **Student records:** One `struct Student` holds a student's four details. An array holds up to five structures. The first `for` loop fills the array and the second prints it.

## Concepts practiced

Input and output, variables, arithmetic, conditions, `switch`, loops, arrays, structures, text files, and simple input validation.

## Sample test runs

These are excerpts from actual runs compiled with GCC 16.2.0. Input was redirected for testing, so prompts appear together on one line.

Calculator, with input `1`, `18`, `7`:

```text
Enter your choice: Enter first number: Enter second number: Answer = 25.00
```

Feedback, with input `Asha Nair`, `5`, `The examples made loops easier.`:

```text
Feedback saved successfully!
Saved feedback:
Name: Asha Nair
Rating: 5/5
Comment: The examples made loops easier.
```

ATM, with PIN `4321`, a balance check, a deposit of `300`, and a withdrawal of `100`:

```text
Enter choice: Available Balance: Rs. 2500.00
Enter choice: Enter amount to deposit: Deposit successful. Balance: Rs. 2800.00
Enter choice: Enter amount to withdraw: Withdrawal successful. Balance: Rs. 2700.00
```

Student records, with one student (roll number `208`, Asha Nair, CSE, `88.5` marks):

```text
===== STUDENT DETAILS =====
Student 1
Roll Number: 208
Name: Asha Nair
Department: CSE
Marks: 88.50
```

I also ran checks for division by zero, an invalid feedback rating, invalid PIN, insufficient balance, negative amounts, and student counts of `0`, `5`, and `6`. All 14 local checks passed.

## Inspiration

The four assignment topics were inspired by [saba1207B/C_Language_Assigments](https://github.com/saba1207B/C_Language_Assigments). The programs and this README were written afresh for this project; no source files, screenshots, or README text were copied from that repository.
