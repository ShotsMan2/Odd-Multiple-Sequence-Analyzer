# Odd Multiple Sequence Analyzer

This project implements a numerical search and filter algorithm in C. It generates a specific sequence of integers based on modular arithmetic constraints and employs a **Reverse Output Strategy** to present the data in descending order without the computational cost of a sorting algorithm.

## 🧮 Mathematical Constraints

The algorithm searches for a set of integers $S = \{x_1, x_2, \dots, x_5\}$ such that for every $x$:

1.  **Threshold:** $x > 10$
2.  **Odd Parity:** $x \equiv 1 \pmod 2$ (Odd Number)
3.  **Divisibility:** $x \equiv 0 \pmod 3$ (Multiple of 3)

The resulting sequence (found in ascending order) is:
$$S = \{15, 21, 27, 33, 39\}$$

## ⚙️ Algorithm Logic

1.  **Search Loop:** Iterates starting from 11 ($x=11 \dots \infty$).
2.  **Filtering:** Applies nested `if` conditions to validate constraints.
3.  **Storage:** Valid numbers are stored in a fixed-size array (`buffer[5]`).
4.  **Reverse Rendering (Optimization):**
    * Instead of running a sorting algorithm (like Bubble Sort) which costs $O(n^2)$, the program takes advantage of the fact that data is discovered in ascending order.
    * It iterates the array backwards (Index $4 \to 0$) to print the result "Largest to Smallest".
    * **Time Complexity:** $O(n)$ (Linear scan).

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o sequence_filter
    ```
2.  Run the executable:
    ```bash
    ./sequence_filter
    ```
3.  **Output:** `39 33 27 21 15`

---
*This repository demonstrates conditional logic, array manipulation, and algorithmic efficiency in C.*
