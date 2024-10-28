# HR Management System

The **HR Management System** is a C++ application designed to simplify and automate human resources tasks such as employee management, attendance tracking, payroll calculation, and leave management. It provides a command-line interface (CLI) for HR teams to efficiently manage employee records and generate reports, making it ideal for small to medium-sized organizations.

## Table of Contents
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Tools](#tools)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Employee Database Management**: Add, view, edit, and delete employee records, including name, ID, position, department, contact, and joining date.
- **Attendance Tracking**: Record daily attendance with check-in and check-out times, calculating total hours worked.
- **Payroll Calculation**: Automates salary calculations based on working hours, leave days, and individual employee rates.
- **Leave Management**: Manages leave requests and balances, ensuring policy compliance.
- **Report Generation**: Creates attendance, payroll, and employee reports for easy data analysis.

## Technologies Used

- **Backend**:  
  - C++: Primary programming language for core functionality.
  - File Handling (C++): Stores data for employees, attendance, and payroll in files for local persistence.

- **Data Management**:
  - Standard Template Library (STL): Uses data structures like `vector` and `map` to manage in-memory data.
  - Object-Oriented Programming (OOP): Encapsulates functionalities within classes for modular and maintainable code.

- **User Interface**:
  - Command-Line Interface (CLI): Provides a simple, accessible text-based interface for HR tasks.

## Tools

- **IDE / Code Editor**:
  - Visual Studio, CLion, Code::Blocks: For writing and debugging C++ code.

- **Compiler**:
  - g++ (GNU Compiler), Microsoft Visual C++ (MSVC), Clang: Compilers for building the project.

- **Version Control**:
  - Git, GitHub: Version control and collaboration.

- **Testing**:
  - GDB (GNU Debugger), Valgrind: For debugging and memory management.
  - Google Test (gTest): Optional framework for unit testing.

- **Documentation**:
  - Doxygen: Generates code documentation.
  - Markdown: Used for README and other documentation files.

## Getting Started

### Prerequisites

- C++ compiler (g++, MSVC, or Clang)
- Command-line terminal
- Git (optional, for cloning the repository)

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/maq77/HR_Managmet_System.git
   cd HR_Managmet_System
