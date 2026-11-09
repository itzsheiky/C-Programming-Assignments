# Review notes for Sheik Dawood

These notes are based on the code in the [source assignment](https://github.com/saba1207B/C_Language_Assigments) and this adaptation. They do not claim anyone's personal experience in class.

## Suggested feedback

I like that the assignment uses four small programs to practice different parts of C. The calculator and ATM menus are easy to follow, and the student and feedback examples show structures and file handling. I would improve the original programs by checking input more carefully, keeping the student count within the array size, and using standard C instead of `conio.h` so they build with common compilers. I would also ask for a student's real feedback instead of putting opinions in the program. Overall, the topics are useful for practice, and the revised versions are easier to run and explain.

## Specific observations

- The original calculator uses `void main` and `conio.h`, so its README's GCC command does not work with a typical GCC installation.
- The original student program allocates 100 records but does not reject counts above 100. Its `forcefloat` function calls itself recursively without a stopping condition, although the program does not call that function.
- The original feedback program writes preset opinions about classes. This adaptation asks the person running it for their own name, rating, and comment.
- The original ATM program checks positive amounts and available balance, but does not check whether each `scanf` call succeeded. This adaptation adds basic input checks.
- These are learning examples. The ATM uses a demo PIN and in-memory balance; it is not suitable for real money.

The four topics and original repository are credited in the [README](README.md). The programs here were written separately for Sheik Dawood.
