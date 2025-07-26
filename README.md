# 🎯 GoF Design Patterns in C++

This repository contains clean, modular implementations of the **23 Gang of Four (GoF) design patterns** using **modern C++ (C++17)**.

Each pattern is placed in its own subdirectory, includes a small demo (`main.cpp`), and is compiled using **CMake**.

---

## 🧠 What are GoF Patterns?
The "Gang of Four" refers to the four authors of the book:
> **Design Patterns: Elements of Reusable Object-Oriented Software** (1994)
>
> by Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides.

They documented 23 design patterns, categorized into:
- **Creational** (object creation)
- **Structural** (object composition)
- **Behavioral** (communication & flow)

---

## 📁 Project Structure
```
GoF-Patterns-in-Cpp/
├── CMakeLists.txt
├── README.md
├── Creational/
│   ├── CMakeLists.txt
│   ├── Singleton/
│   ├── FactoryMethod/
│   ├── AbstractFactory/
│   └── Builder/
├── Structural/
│   ├── CMakeLists.txt
│   ├── Adapter/
│   ├── Composite/
│   ├── Decorator/
│   └── Proxy/
├── Behavioral/
│   ├── CMakeLists.txt
│   ├── Strategy/
│   ├── Observer/
│   ├── Command/
│   ├── TemplateMethod/
│   └── State/
└── build/                 # CMake build folder (not checked in)
```

---

## 🚀 Getting Started
### ✅ Requirements:
- CMake >= 3.10
- C++17-compatible compiler (e.g., g++, clang++)

### 🧪 Build & Run Example:
```bash
# Clone the repo
cd GoF-Patterns-in-Cpp
mkdir build && cd build
cmake ..
make

# Run Singleton demo
./Creational/Singleton/SingletonDemo
```

---

## ✅ Completed Patterns
| Category     | Pattern            |
|--------------|--------------------|
| Creational   | ✅ Singleton        |
| Creational   | ✅ Factory Method   |
| Creational   | ✅ Abstract Factory |
| Creational   | ✅ Builder          |
| Structural   | ✅ Adapter          |
| Structural   | ✅ Composite        |
| Structural   | ✅ Decorator        |
| Structural   | ✅ Proxy            |
| Behavioral   | ✅ Strategy         |
| Behavioral   | ✅ Observer         |
| Behavioral   | ✅ Command          |
| Behavioral   | ✅ Template Method  |
| Behavioral   | ✅ State            |

---

## 🧩 Learning Goals
- Master the 23 GoF patterns in hands-on C++
- Apply patterns in real-world projects like **GenCamPP**
- Improve system design, modularity, and readability

---

## 📅 Learning Schedule
| Week | Focus |
|------|-------|
| Week 1 | Creational Patterns (5) |
| Week 2 | Structural Patterns (7) |
| Week 3 | Behavioral Patterns (11) |

---

## 📚 References
- "Design Patterns: Elements of Reusable Object-Oriented Software" (GoF)
- "Head First Design Patterns" (O’Reilly)
- "Design Patterns in Modern C++" by Dmitri Nesteruk

---

Feel free to fork, clone, and experiment!

> ⭐ Star this repo if you're learning GoF patterns in C++!

---

Maintained by [Naveen Kumar Bisai](https://github.com/NaveenkumarBisai ✨
