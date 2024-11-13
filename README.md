Random Password Generator in C
This is a command-line tool for generating random passwords with customizable length and complexity. Users can specify whether to include lowercase letters, uppercase letters, numbers, and special characters, resulting in a secure and randomly generated password based on their preferences.

Features
Customizable Length: Set the password length.
Character Types: Choose which types of characters to include:
Lowercase letters
Uppercase letters
Numbers
Special characters
Strong Security: Generates secure, unpredictable passwords.
Usage
Clone or download this repository.
Compile the program with a C compiler. For example, with gcc, run:
bash
Copy code
gcc password_generator.c -o password_generator
Run the compiled program:
bash
Copy code
./password_generator
Example
Upon running the program, the user is prompted to provide the password length and select the character types. Here’s an example session:

plaintext
Copy code
Welcome to the Random Password Generator!
Enter the desired password length: 12
Include lowercase letters? (1 for Yes, 0 for No): 1
Include uppercase letters? (1 for Yes, 0 for No): 1
Include digits? (1 for Yes, 0 for No): 1
Include special characters? (1 for Yes, 0 for No): 1
Generated Password: aB3@rM9!LwZ
Error Handling
If no character types are selected, the program will display:

plaintext
Copy code
Error: No character types selected. Cannot generate password.
Code Overview
Character Pool Setup: Based on user input, the program constructs a pool of characters from which it can randomly select.
Random Password Generation: Using rand(), the program generates a password of the specified length, selecting random characters from the pool.
Display: Outputs the generated password.
Requirements
C compiler
Standard C libraries (<stdio.h>, <stdlib.h>, <time.h>, and <string.h>)
License
This project is open-source and available under the MIT License.
