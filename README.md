# 🔍 Optimized Binary Search Algorithm

A clean and highly efficient C++ application demonstrating the **Binary Search** algorithm. The program searches for a target integer within a sorted array of 1,000 elements, achieving logarithmic time complexity.

---

## **🛠️ Development Tools**

* **VS Code:** The primary text editor used for writing the algorithm logic.
* **GCC / MinGW Compiler:** Used for strict C++ compilation.
* **Git & GitHub:** For local version control and cloud repository hosting.

---

## **Key Features**

* **Logarithmic Efficiency:** Performs rapid lookups by cutting the search space in half with each iteration.
* **Automated Dataset Generation:** Dynamically generates a pre-sorted sequence of 1,000 sequential integers starting from `2000` to satisfy the strict pre-conditions of the algorithm.
* **Clear Index Mapping:** Instantly returns the exact zero-based index of the target if found, or gracefully alerts the user if the target is out of bounds.

---

## **Technical Breakdown**

### **The Binary Search Logic**
Unlike Linear Search which checks elements one by one ($O(n)$ complexity), Binary Search uses a "divide and conquer" strategy. It continually targets the middle element (`mid`) of the current search bounds:

1. If the target matches the middle element, the index is returned.
2. If the target is greater than `mid`, the `left` boundary is shifted to `mid + 1`.
3. If the target is smaller than `mid`, the `right` boundary is shifted to `mid - 1`.

### **Mathematical Complexity**
The maximum number of comparisons required to find any element in an array of size $n$ is defined by:

$$\text{Max Comparisons} = \lfloor \log_2(n) \rfloor + 1$$

For this specific implementation where $n = 1000$, the algorithm will find any number (or confirm its absence) in **at most 10 operations**, compared to up to 1,000 operations in a standard linear search.

* **Time Complexity:** $O(\log n)$
* **Space Complexity:** $O(1)$ (In-place memory utilization)

---

## **Credits & License**

* Developed by **Zyad Ahmed**.
* Open-source and available under the [MIT License](LICENSE).
