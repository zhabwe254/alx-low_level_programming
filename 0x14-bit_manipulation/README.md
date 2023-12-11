0x14-bit_manipulation

Bit manipulation is a fundamental concept in computer science and programming. It involves manipulating individual bits in a binary representation of data. This can be useful for tasks like optimizing memory usage, implementing algorithms, and solving various programming problems efficiently. Below, I'll provide you with some study notes, techniques, examples, and templates for bit manipulation.

Basics of Bit Manipulation:
Bitwise Operators: Bit manipulation is primarily done using bitwise operators. The common ones are:

& (AND)
| (OR)
^ (XOR)
~ (NOT)
<< (Left Shift)
>> (Right Shift)
Bit Representation: Understand how numbers are represented in binary. Each digit in binary is a bit, either 0 or 1.

Bitwise AND (&): It's used to check if a particular bit is set or not. For example, num & (1 << bit) checks if the bit is set in num.

Bitwise OR (|): It's used to set a particular bit. For example, num | (1 << bit) sets the bit in num.

Bitwise XOR (^): It's used to toggle a particular bit. For example, num ^ (1 << bit) toggles the bit in num.

Bitwise NOT (~): It inverts all the bits in a number.

Bit Shifts (<< and >>): Used for left and right shifts, respectively. Shifting left by n bits is equivalent to multiplying by 2^n, and shifting right by n bits is equivalent to dividing by 2^n.

Techniques:
Setting a Bit: To set a specific bit (e.g., the 3rd bit) in a number num to 1, use num |= (1 << 3).

Clearing a Bit: To clear a specific bit (e.g., the 2nd bit) in a number num to 0, use num &= ~(1 << 2).

Toggling a Bit: To toggle a specific bit (e.g., the 4th bit) in a number num, use num ^= (1 << 4).

Checking if a Bit is Set: To check if a specific bit (e.g., the 0th bit) in a number num is set, use (num & (1 << 0)) != 0.

Checking if a Number is Even or Odd: You can use the least significant bit to check for even or odd numbers. If the LSB is 0, it's even; if it's 1, it's odd.

Bit Count (Counting Set Bits): Counting the number of set bits in a number can be done using various algorithms like the Brian Kernighan algorithm or using lookup tables for smaller bit widths.

Bit Manipulation in Algorithms: Bit manipulation is often used in various algorithms like subset generation, permutations, and finding the unique element in an array (XOR all elements).

Examples:
Swap two variables without using a temporary variable:

c
Copy code
a = a ^ b;
b = a ^ b;
a = a ^ b;
Check if a number is a power of 2:

c
Copy code
isPowerOf2 = (num & (num - 1)) == 0;
Count set bits in an integer (Brian Kernighan's Algorithm):

c
Copy code
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        num = num & (num - 1);
        count++;
    }
    return count;
}
Find the missing number in an array of numbers from 1 to N:

c
Copy code
int findMissingNumber(int[] arr, int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result ^= i;
    }
    for (int num : arr) {
        result ^= num;
    }
    return result;
}
Templates for Common Tasks:
Here are some code templates for common bit manipulation tasks:

Setting a Bit:

c
Copy code
num |= (1 << bit);
Clearing a Bit:

c
Copy code
num &= ~(1 << bit);
Toggling a Bit:

c
Copy code
num ^= (1 << bit);
Checking if a Bit is Set:

c
Copy code
if (num & (1 << bit)) {
    // Bit is set
}
Counting Set Bits (Brian Kernighan's Algorithm):

c
Copy code
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        num = num & (num - 1);
        count++;
    }
    return count;
}
