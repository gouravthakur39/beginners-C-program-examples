# Buffer Overflow in C

# What is a buffer?
A buffer, in terms of a program in execution, can be thought of as a region of computer’s main memory that has certain boundaries in context with the program variable that references this memory.
### Example Code :
**char buff[10];**

The above line will declare an array of 10 characters in C. Here buff[0] is the left boundary and buff[9] is the right boundary of the buffer. 

# What is Buffer Overflow?
![Example of Buffer Overflow](https://developer.apple.com/library/archive/documentation/Security/Conceptual/SecureCodingGuide/Art/stringcopy.gif)

Now that we have seen the idea of a buffer, we can talk about what is meant by buffer overflow.
A buffer is said to be overflown when the data (meant to be written into memory buffer) gets written past the left or the right boundary of the buffer. This way the data gets written to a portion of memory which does not belong to the program variable that references the buffer.

**Note** : Though in the above case we have taken the example of a character array as a buffer, we can have buffer overflow with different types of data structures as well such as stack, linked lists, etc if we violate their boundary conditions. 

### Example Code :
**char buff[10];**
**buff[10] = 'a';** 

The effect of the above code will be that most likely during runtime, your code will throw a Segmentation Fault or Stack Smashing Error.
This is due to buffer overflow.

**Similarly,**

**char buff[10];**
**buff[-1] = 'a';** 

This code will also throw the same kind of array index violation errors.

In general accessing a memory location that has not been assigned for your program can lead to buffer overflow.
Hence, de-referencing dangling pointers, filling array or string with more elements than it is defined to, etc can all lead to a buffer overflow and hence segfault.

**More Examples :**
1. ***char a[10] = "This string is longer than the buffer can hold";***

2. ***int \*a = (int \*)malloc(10 \* sizeof(int)) ;*** 
	***a[20] = 100 ;*** 
	
	![Example of Buffer Overflow](http://www.cs.fsu.edu/~baker/opsys/notes/graphics/bufferoverflow2.gif)
## Why does it matter to us?

Buffer overflows are one of the most common and also one of the most notorious errors in programming as they can lead to overwriting of memory and also unexpected program crashes.

The 'Segmentation Fault' error is the most common type of error associated with buffer overflow.

There can also be cases where buffer overflow does not give errors immediately. But what happens in these cases is that the program will secretly overwrite neighboring memory allocated to other programs/same program and eventually will lead to a crash.

Example of a segfault crash :<br>

![enter image description here](https://qph.fs.quoracdn.net/main-qimg-669ba1b3d021390ed98c70ed29e71d62.webp)

**Special Note for C Programmers :**
C Programmers need to be extra careful when writing code to take care of buffer overflow because many C functions do have the feature of boundary checking and hence the slightest mistake can lead to a segfault easily.
Also since it allows pointer and low level memory manipulation, it is the programmers duty to check for buffer overflow.

**Thank You !**



