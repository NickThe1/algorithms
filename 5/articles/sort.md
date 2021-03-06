# Sorting algorithms
---

### Bubble sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly 
swapping the adjacent elements if they are in the wrong order.

#### Illustration

![img_14.png](img_14.png)

![img_4.png](img_4.png)

**Video**

[![img_2.png](img_2.png)](https://www.youtube.com/watch?v=xli_FI7CuzA&ab_channel=MichaelSambol)

#### Performance

![img_3.png](img_3.png)

---

### Insertion sort

Insertion sort is a simple sorting algorithm that works similar to the 
way you sort playing cards in your hands. The array is virtually split into 
a sorted and an unsorted part. Values from the unsorted part
are picked and placed at the correct position in the sorted part.

#### Illustration

![img_15.png](img_15.png)

**Video**

[![img_7.png](img_7.png)](https://www.youtube.com/watch?v=JU767SDMDvA&ab_channel=MichaelSambol)

#### When to use and when don't

Use insertion sort in the following scenarios:

- When the array is nearly sorted - since insertion sort is adaptive
- When we have memory usage constraints
- When a simple sorting implementation is desired
- When the array to be sorted is relatively small
- When you need to sort elements online - that is sorting them as they come in.

Avoid using insertion sort when:

- The array to be sorted has a large number of elements
- The array is completely  unsorted
- You want a faster run time and memory is not a concern.

#### Performance

![img_5.png](img_5.png)

---

### Selection sort

The selection sort algorithm sorts an array by repeatedly finding 
the minimum element (considering ascending order) from unsorted part and
putting it at the beginning. 
The algorithm maintains two subarrays in a given array.

#### Illustration

![img_16.png](img_16.png)

**Video**

[![img_9.png](img_9.png)](https://www.youtube.com/watch?v=g-PGLbMth_g&ab_channel=MichaelSambol)

#### When to use and when don't

Use selection sort in the following scenarios:

- When the array is NOT partially sorted
- When we have memory usage constraints
- When a simple sorting implementation is desired
- When the array to be sorted is relatively small

Avoid using Selection sort when:

- The array to be sorted has a large number of elements
- The array is nearly sorted
- You want a faster run time and memory is not a concern.

#### Performance

![img_8.png](img_8.png)

---

### Counting sort
(Sort only positive integers)

Counting sort is a sorting algorithm that sorts the elements of an array 
by counting the number of occurrences of each unique element in the array. 
The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

#### Illustration

![img_12.png](img_12.png)

**Video**

[![img_13.png](img_13.png)](https://www.youtube.com/watch?v=OKd534EWcdk)

#### When to use and when don't

- This sorting technique is effective when the difference between different keys are not so big, otherwise, it can increase the space complexity.
- Counting sort makes assumptions about the data, for example, it assumes that values are going to be in the range of 0 to 10 or 10 ??? 99 etc, Some other assumptions counting sort makes are input data will be all real numbers.
- Like other algorithms this sorting algorithm is not a comparison-based algorithm, it hashes the value in a temporary count array and uses them for sorting.
#### Performance

![img_10.png](img_10.png)

---

### Radix sort

**What if the elements are in the range from 1 to n2?**
We can???t use counting sort because counting sort will
take O(n2) which is worse than comparison-based sorting algorithms. Can we sort such an array in linear time?

Radix Sort is the answer. The idea of Radix Sort is to do digit by digit sort starting from
least significant digit to most significant digit. Radix sort uses counting sort as a subroutine to sort.

#### Illustration

![img_20.png](img_20.png)

**Video**

[![img_17.png](img_17.png)](https://www.youtube.com/watch?v=XiuSW_mEn7g&ab_channel=CSDojo)

#### When to use and when don't

- It makes assumptions about the data like the data must be between a range of elements.
- Input array must have the elements with the same radix and width.
- Radix sort works on sorting based on individual digit or letter position.
- We must start sorting from the rightmost position and use a stable algorithm at each position.
- Radix sort is not an in-place algorithm as it uses temporary count array.

#### Performance

![img_11.png](img_11.png)

---

### Merge sort

It divides the input array into two halves,
calls itself for the two halves, and then it merges the two sorted halves. 
The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key 
process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.

#### Illustration

![img_21.png](img_21.png)

![img_22.png](img_22.png)

![img_23.png](img_23.png)

**Video**

[![img_18.png](img_18.png)](https://www.youtube.com/watch?v=4VqmGXwpLqc&ab_channel=MichaelSambol)

#### When to use and when don't

- Mergesort is quicker when dealing with linked lists. This is because pointers can easily be changed when merging lists. It only requires one pass (O(n)) through the list.

- Quicksort's in-place algorithm requires the movement (swapping) of data. While this can be very efficient for in-memory dataset, it can be much more expensive if your dataset doesn't fit in memory. The result would be lots of I/O.

#### Performance

![img_19.png](img_19.png)

---

### Quick sort

Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

- Always pick first element as pivot.
- Always pick last element as pivot (implemented below)
- Pick a random element as pivot.
- Pick median as pivot.

#### Illustration

![img_26.png](img_26.png)

**Video**

[![img_24.png](img_24.png)](https://www.youtube.com/watch?v=Hoixgm4-P4M&t=149s&ab_channel=MichaelSambol)

#### When to use and when don't

- Commercial Computing is used in various government and private organizations for the purpose of sorting various data like sorting files by name/date/price, sorting of students by their roll no., sorting of account profile by given id, etc.
- The sorting algorithm is used for information searching and as Quicksort is the fastest algorithm so it is widely used as a better way of searching.
- It is used everywhere where a stable sort is not needed.
- Quicksort is a cache-friendly algorithm as it has a good locality of reference when used for arrays.

#### Performance

![img_25.png](img_25.png)

---

### Heap sort

Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements.

What is Binary Heap?
Let us first define a Complete Binary Tree. A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible 
A Binary Heap is a Complete Binary Tree where items are stored in a special order such that the value in a parent node is greater(or smaller) than the values in its two children nodes. The former is called max heap and the latter is called min-heap. The heap can be represented by a binary tree or array.

#### Illustration

![img_28.png](img_28.png)

**Video**

[![img_29.png](img_29.png)](https://www.youtube.com/watch?v=2DmK_H7IdTo&t=180s&ab_channel=MichaelSambol)

#### When to use and when don't

Heap Sort in Data Structure is used when the smallest (shortest) or highest (longest) value is needed instantly. Other usages include finding the order in statistics, dealing with priority queues in Prim???s algorithm (also called the minimum spanning tree) and Huffman encoding or data compression.

#### Performance

![img_27.png](img_27.png)
