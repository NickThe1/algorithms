# Sorting algorithms
---

### Bubble sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly 
swapping the adjacent elements if they are in the wrong order.

#### Illustration

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


#### Illustration

**Video**

#### When to use and when don't


#### Performance

![img_10.png](img_10.png)

---

### Radix sort


#### Illustration

**Video**

#### When to use and when don't


#### Performance

![img_11.png](img_11.png)

---

### Merge sort