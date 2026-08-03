# libc

A personal project to reimplement parts of the C Standard Library from scratch.

The purpose of this repository is to understand how common C library functions work internally by implementing them manually. The focus is on learning low-level programming, writing clean code, and understanding the algorithms behind the standard library.

## Current Scope

- `string.h`
- `stdlib.h`
- `stdio.h`

Additional libraries may be implemented in the future.

## Goals

- Learn low-level C programming
- Understand pointers, memory, and common algorithms
- Improve problem-solving skills
- Write clean and maintainable code
- Build a personal reference for studying C

## Design Philosophy

- Implement every function from scratch whenever practical.
- Follow general software engineering best practices.
- Prioritize readability over unnecessary optimizations.
- Keep implementations as independent as possible.
- Write tests for every implemented function.
- Document behavior, limitations, and edge cases.

## Project Structure

```text
.
├── include/
│   ├── string.h
│   └── stdio.h
│   └── stdlib.h
├── src/
│   ├── string.c
│   └── stdio.c
│   └── stdlib.c
├── tests/
├── examples/
├── Makefile
├── LICENSE
└── README.md
```

## Progress

| Library |        Status        |
|---------|----------------------|
| `string.h`   | ✅ Completed,   |
| `stdlib.h`   | 🚧 In Progress  | 
| `stdio.h`    | ⏳ Paused       |

## Notes

- Written in C.
- Functions are implemented manually without relying on their standard library equivalents whenever possible.
- Source files are designed to have minimal dependencies.
- The project is intended for educational purposes and is **not** a replacement for the standard C library.

## Contributing

This is primarily a personal learning project. Suggestions, bug reports, and improvements are always welcome.

## License

This project is licensed under the MIT License.
