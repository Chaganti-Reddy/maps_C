# maps_C

**A Basic Hashmap (Key-Value Store) Implementation in C**

---

## 📚 Overview

`maps_C` is a simple and lightweight **hash map** (key-value store) built using C.  
It supports **insertion**, **retrieval**, **deletion**, **updating**, and **printing** of key-value pairs with dynamic memory management. Collision handling is managed through **chaining** using **linked lists**.

Perfect for:
- Practicing C programming and pointers
- Learning how basic data structures work internally
- Exploring hashing, collisions, and memory handling

---

## ⚙️ Features

- 🛠 Insert a key-value pair
- 🔎 Retrieve a value by key
- 🧹 Delete a key
- ✏️ Update a key’s value
- 📜 Print the entire hashmap
- 📏 Get the number of entries
- 🧹 Proper memory cleanup

---

## 🗂️ Project Structure

```bash
maps_C/
├── LICENSE         # License file (MIT)
├── main.c          # Program with interactive menu to use the hashmap
├── map.c           # Implementation of hashmap functions
├── map.h           # Header file (definitions and function declarations)
├── Makefile        # For easy compilation
├── maps            # Compiled executable
├── README.md       # Project documentation (this file)
├── map.o           # Object file for map.c
├── main.o          # Object file for main.c
```

---

## 🚀 Getting Started

### Prerequisites
- GCC or any C compiler
- Basic familiarity with terminal commands

### Building and Running

```bash
# Clone the repository
git clone https://github.com/Chaganti-Reddy/maps_C.git
cd maps_C

# Compile using Makefile
make

# Run the executable
./maps
```

Alternatively, compile manually:
```bash
gcc main.c map.c -o maps
./maps
```

---

## 📖 Example Usage (Menu Options)

On running the program, you can:

```
1. Insert    → Add a key-value pair
2. Get       → Retrieve the value for a given key
3. Delete    → Remove a key and its value
4. Print     → Display all key-value pairs
5. Length    → Show the number of stored pairs
6. Update    → Modify the value of an existing key
7. Exit      → Free memory and exit
```

---

## 🧠 Core Concepts Demonstrated

- Hashing with modulus operator
- Collision resolution with **chaining** (linked lists)
- Dynamic memory allocation with `malloc`, `calloc`, and `free`
- Modular programming in C (`.h` and `.c` separation)
- Basic CLI-based interface

---

## 📋 Limitations

- Fixed array size (`SIZE = 100`), no dynamic resizing
- Only supports integer keys and integer values
- Not thread-safe (designed for single-threaded environments)

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).

---

## 🤝 Contributing

Feel free to open issues or submit pull requests!  
Improvements, optimizations, and feature additions are very welcome.

