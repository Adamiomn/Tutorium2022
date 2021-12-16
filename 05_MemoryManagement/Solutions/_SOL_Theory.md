1. Why use alloca() at all?
Don't. Use variable length arrays (VLAs)

2. Why use heap memory?
Because the stack has a limited size and because ressources on the stack have limited lifetime. They are freed after the block has ended.

3. Why not use heap for everything?
Allocating memory on the heap is (comparatively) very slow. This can be a big issue in real-time systems.

4. Why are memory leaks bad?
Because the memory will be reserved as long as the program is running. If the program reserves all the memory for itself, the system could run out of memory.

5. Why use valgrind to check for memory leaks?
Because in complicated programs, memory leaks are easy to create and hard to find. This is such a big issue that most other languages are built around being memory safe (e.g. Rust, C++, Java).