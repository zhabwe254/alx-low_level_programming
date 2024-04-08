# Search Algorithms

This project contains implementations of two search algorithms: Linear search and Binary search, along with their time and space complexities.

## Files

* `0-linear.c` - Implementation of the Linear search algorithm.
* `1-binary.c` - Implementation of the Binary search algorithm.
* `2-O` - Big O notation for the time complexity of Linear search.
* `3-O` - Big O notation for the space complexity of Linear search.
* `4-O` - Big O notation for the time complexity of Binary search.
* `5-O` - Big O notation for the space complexity of Binary search.
* `6-O` - Big O notation for the space complexity of a function `allocate_map` for allocating a 2D array.

## How to Use

You can compile each of the C files separately along with the provided `main` files to test the search algorithms.

### Compilation

For example, to compile `0-linear.c` along with its `main` file:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
