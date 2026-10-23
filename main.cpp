/*
 * Object Oriented Programming (OOP) - Lab No. 01
 * Name    : Ali Raza
 * Reg No. : 9864
 *
 * All 11 lab tasks combined in a single source file.
 * Each task is a separate function; run the program and pick a task
 * from the menu (or choose 0 to run all of them in order).
 */

#include <iostream>
#include <string>
using namespace std;

// ---------- Helper functions (Tasks 8, 9, 10, 11) ----------

// Task 8: returns the sum of two numbers
int add(int a, int b) {
    return a + b;
}

// Task 9: returns the factorial of n
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Task 10: returns true if n is even, otherwise false
bool isEven(int n) {
    return n % 2 == 0;
}

// Task 11: calculates base^exponent without using built-in pow()
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// ---------- Task functions ----------

// Task 1: store name, age and GPA in variables and print them
void task1() {
    string name = "ALI RAZA";
    int age = 21;
    float gpa = 3.7;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
}

// Task 2: sum, difference, product and division of two integers
void task2() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    if (b != 0)
        cout << "Division: " << (float)a / b << endl;
    else
        cout << "Division: undefined (cannot divide by zero)" << endl;
}

// Task 3: variables of different data types
void task3() {
    int i = 10;
    float f = 3.14;
    char c = 'A';
    string s = "Hello";
    bool b = true;

    cout << "Integer: " << i << endl;
    cout << "Float: " << f << endl;
    cout << "Char: " << c << endl;
    cout << "String: " << s << endl;
    cout << "Boolean: " << b << endl;
}

// Task 4: print numbers from 1 to 10 using a loop
void task4() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Task 5: multiplication table of 5
void task5() {
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// Task 6: sum of all even numbers from 1 to 100
void task6() {
    int sum = 0;
    for (int i = 2; i <= 100; i += 2) {
        sum += i;
    }
    cout << "Sum of even numbers from 1 to 100: " << sum << endl;
}

// Task 7: check whether a number is prime (using a loop)
void task7() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
}

// Task 8: use add(int a, int b)
void task8() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = add(x, y);
    cout << "Sum: " << result << endl;
}

// Task 9: use factorial(int n)
void task9() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;
}

// Task 10: use isEven(int n)
void task10() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << num << " is Even." << endl;
    else
        cout << num << " is Odd." << endl;
}

// Task 11: use power(int base, int exponent)
void task11() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
}

// ---------- Menu ----------

void runTask(int n) {
    cout << "\n--- Task " << n << " ---" << endl;
    switch (n) {
        case 1:  task1();  break;
        case 2:  task2();  break;
        case 3:  task3();  break;
        case 4:  task4();  break;
        case 5:  task5();  break;
        case 6:  task6();  break;
        case 7:  task7();  break;
        case 8:  task8();  break;
        case 9:  task9();  break;
        case 10: task10(); break;
        case 11: task11(); break;
        default: cout << "Invalid task number." << endl;
    }
}

int main() {
    int choice;

    cout << "OOP Lab 01 - Ali Raza (Reg No. 9864)" << endl;
    cout << "Enter task number (1-11), or 0 to run all tasks: ";
    cin >> choice;

    if (choice == 0) {
        for (int t = 1; t <= 11; t++) {
            runTask(t);
        }
    } else {
        runTask(choice);
    }

    return 0;
}
