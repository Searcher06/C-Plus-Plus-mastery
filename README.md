# C++ Fundamentals & Practical Applications

This repository serves as a comprehensive collection of C++ programming concepts and practical exercises. 💡 From core language features like data types, control structures, and memory management to advanced topics such as Object-Oriented Programming (OOP) principles and templates, this project demonstrates a solid grasp of C++ fundamentals. It also includes several mini-applications that showcase problem-solving skills and practical implementation of C++. ✨

## Features

This project explores a wide array of C++ features and applications:

### Core Concepts
-   **Variables and Data Types**: Demonstrations of `char`, `string`, `int`, `double`, `bool`, `typedef`, and `enum`.
-   **Control Flow**: Implementations of `if/else` statements, `switch` cases, `for` loops, `while` loops, `do-while` loops, `nested loops`, `break`, and `continue`.
-   **Functions**: Creation and usage of standard functions, `return` keyword, `function templates`, and `overloaded functions`.
-   **Arrays**: Examples of `1D arrays`, `2D arrays`, `array input/output`, `passing arrays to functions`, `forEach loops`, and searching elements within arrays.
-   **Strings**: Various `string methods` including `append`, `length`, `empty`, `clear`, `at`, `insert`, and `find`.
-   **Pointers & Memory Management**: Exploration of `pointers`, `memory addresses`, `null pointers`, and `dynamic memory allocation`.
-   **Object-Oriented Programming (OOP)**:
    -   **Classes and Objects**: Defining classes and instantiating objects with attributes and methods.
    -   **Constructors**: Using `constructors` and `overloaded constructors` for object initialization.
    -   **Abstraction**: Hiding internal implementation details using getters and setters.
    -   **Inheritance**: Demonstrating `inheritance` with base and derived classes.
-   **Standard Library & Math Functions**: Utilizing `iostream` for input/output, `cmath` for mathematical operations (`pow`, `sqrt`, `max`, `min`, `abs`, `round`, `ceil`, `floor`).
-   **Miscellaneous**: `namespace` usage, `sizeof` operator, `const` parameter, and `type conversion`.
-   **Recursion**: Illustrative examples of recursive function calls.
-   **Structures (Structs)**: Grouping related data types and passing structs to functions.

### Practical Applications
-   **Banking System**: A console-based application for managing deposits, withdrawals, and balance inquiries.
-   **CLI Calculator**: An interactive command-line calculator supporting basic arithmetic operations with input validation.
-   **Credit Card Validator**: Implementation of the Luhn algorithm to validate credit card numbers.
-   **Number Guessing Game**: An engaging game where the player guesses a randomly generated number.
-   **Quiz Game**: A simple quiz application with multiple-choice questions.
-   **Rock-Paper-Scissors**: A classic game played against the computer.
-   **Temperature Conversion**: Utility for converting temperatures between Celsius and Fahrenheit.
-   **Tic-Tac-Toe**: A two-player (human vs. computer) implementation of the popular game.
-   **Sorting Algorithm**: Example of a `bubble sort` implementation.
-   **Geometric Calculations**: Program to calculate the `hypotenuse` of a right triangle.

## Getting Started

To get a copy of this project up and running on your local machine, follow these steps.

### Installation

To set up the project environment, you'll need a C++ compiler (like G++).

1.  **Clone the Repository**:
    ```bash
    git clone https://github.com/Searcher06/C-Plus-Plus-mastery.git
    ```
2.  **Navigate to the Project Directory**:
    ```bash
    cd C-Plus-Plus-mastery
    ```
3.  **Compile an Individual File**:
    Since this repository contains multiple independent C++ programs, you will compile and run each file separately.
    For example, to compile `main.cpp`:
    ```bash
    g++ main.cpp -o main_app
    ```
    (Replace `main.cpp` with the desired `.cpp` file you wish to run, and `main_app` with your preferred executable name.)

### Environment Variables

This project does not require any specific environment variables for compilation or execution.

## Usage

Each `.cpp` file in this repository is a standalone program demonstrating a specific C++ concept or a mini-application.

To run any of the programs:

1.  **Compile the desired `.cpp` file** using your C++ compiler.
    *   Example for a file in the root directory (e.g., `conditionals.cpp`):
        ```bash
        g++ conditionals.cpp -o conditionals_app
        ```
    *   Example for a file within the `Practice` directory (e.g., `Practice/Calculator.cpp`):
        ```bash
        g++ Practice/Calculator.cpp -o calculator_app
        ```

2.  **Execute the compiled program**:
    *   For the root directory example:
        ```bash
        ./conditionals_app
        ```
    *   For the `Practice` directory example:
        ```bash
        ./calculator_app
        ```

You can explore each `.cpp` file to understand the specific concept or application it demonstrates. For interactive programs like the `BankingSystem.cpp` or `TicTacToe.cpp`, follow the on-screen prompts after execution.

## Technologies Used

| Technology | Description                                         |
| :--------- | :-------------------------------------------------- |
| C++        | The primary programming language used for the project. |
| G++        | A widely used C++ compiler.                       |

## Contributing

Contributions are welcome! If you have suggestions for improvements, bug fixes, or new examples, please follow these guidelines:

✨ Fork the repository.
🚀 Create a new branch for your features or fixes (`git checkout -b feature/AmazingFeature`).
💡 Commit your changes (`git commit -m 'Add some AmazingFeature'`).
⬆️ Push to the branch (`git push origin feature/AmazingFeature`).
⭐ Open a Pull Request.

Please ensure your code adheres to a consistent style and includes clear comments where necessary.

## License

This project is provided for educational purposes.

## Author Info

Connect with me:

*   **Your Name**
*   LinkedIn: [Your LinkedIn Profile](https://linkedin.com/in/YourUsername)
*   Twitter: [Your Twitter Profile](https://twitter.com/YourUsername)

---

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B)
![Repo Size](https://img.shields.io/github/repo-size/Searcher06/C-Plus-Plus-mastery?style=for-the-badge&label=Repo%20Size)
![Lines of Code](https://img.shields.io/tokei/lines/github/Searcher06/C-Plus-Plus-mastery?style=for-the-badge)

[![Readme was generated by Dokugen](https://img.shields.io/badge/Readme%20was%20generated%20by-Dokugen-brightgreen)](https://www.npmjs.com/package/dokugen)