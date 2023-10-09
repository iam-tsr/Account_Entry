# Bank ATM Project

This project implements a simple command-line interface for a basic ATM (Automated Teller Machine) system. It allows users to perform transactions like transferring money, depositing money, withdrawing money, and checking their account balance.

## How to Use

1. **Compile the Code**
   - Use a C compiler (e.g., GCC) to compile the code. For example, using GCC:
     ```
     gcc atm_project.c -o atm_project
     ```
2. **Run the Program**
   - Execute the compiled program:
     ```
     ./atm_project
     ```
3. **Options**
   - Once the program starts, you'll be presented with the following options:
     - 1: Transfer
     - 2: Deposit
     - 3: Withdraw
     - 4: Balance
     - 5: Exit
4. **Perform Transactions**
   - Select an option by entering the corresponding number and follow the prompts.
5. **Transaction Details**
   - After each transaction, the program will save the transaction details to a file named `DataEntry_tsrBANK.text`.
6. **Continue or Exit**
   - You'll be asked if you have any other queries. Enter 'Y' to continue or 'N' to exit.
7. **Note**
   - The program will ensure that the account balance remains above a minimum threshold (in this case, 1000) during transfers and withdrawals. If the balance falls below this threshold, it will display an "Insufficient Balance" message and exit.
## Code Overview
The code defines various functions for performing transactions (Transfer, Deposit, Withdraw, Balance), along with a main function. It utilizes a file (`DataEntry_tsrBANK.text`) to record transaction details.
### Functions
- `Transfer()`: Allows the user to transfer a specified amount to another account.
- `Deposit()`: Enables the user to deposit a specified amount into their account.
- `Withdraw()`: Allows the user to withdraw a specified amount from their account, ensuring that the account maintains a minimum balance.
- `Balance()`: Displays the current account balance.
### Main Function
- The main function initializes a file pointer (`cust`) and enters a loop to process user options.
- It generates a random customer ID for each session.
- Within the loop, the user is prompted to choose an option.
- Based on the chosen option, the corresponding function is called.
- Transaction details are recorded in the file.
- The user is then asked if they have any other queries. If they choose to continue, the loop repeats. If they choose to exit, the program terminates.
### File Handling
- The program uses `fprintf` to write transaction details to the file `DataEntry_tsrBANK.text`.
### Note
- The code assumes that the user interacts with the program through a console or terminal.
---
Feel free to modify or extend this project as needed. Happy coding!
