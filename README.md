# C++ System of Equation Solver using Gauss Elimination Method

This is a simple C++ program that solves a system of linear equations using the Gauss elimination method. The program supports user input for matrices of size up to 10x10.

## Features

- Solves a system of linear equations of the form Ax = B using Gauss elimination.
- Accepts user input for matrices of size up to 10x10.

## Usage

1. Clone the repository:

    ```bash
    git clone https://github.com/Parth-2005/System-of-equation-solver.git
    ```

2. Compile the program:

    ```bash
    g++ -o solver main.cpp
    ```

3. Run the executable:

    ```bash
    ./solver
    ```

4. Follow the on-screen instructions to input the coefficients of the system of equations. Ensure that the input matrix does not exceed the size of 10x10.

## User Input

The program will prompt you to input the coefficients and constants of the system of equations. Example input for a system of three equations with three variables:

Enter the coefficients and constants of the matrix [A|B] (3x4):
```
2 3 -1 1
4 -2 3 -2
3 2 -4 3
```


Here, the last column represents the constants of the system.

## Example

Consider the system of equations:
```
2x + 3y - z = 1
4x - 2y + 3z = -2
3x + 2y - 4z = 3
```

The program will output the solution for `x`, `y`, and `z`.

## Contributing

Contributions are welcome! If you have suggestions, enhancements, or bug fixes, feel free to open an issue or create a pull request.

## License

This project is licensed under the MIT License.
