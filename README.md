# Task Manager in C++

This is a simple task manager in C++ that allows you to add, remove, complete, and list tasks. It uses the C++ Standard Library and a vector to store the tasks.

## Features

- Add tasks
- Remove tasks
- Mark tasks as completed
- List tasks
- And more

## Compilation

This project uses CMake as the build system. To compile the project, follow these steps:

1. Clone the repository:
    ```
    git clone https://github.com/abssolutte/TaskManager.git
    ```

2. Navigate to the project directory:
    ```
    cd taskmanager
    ```

3. Create the build directory:
    ```
    mkdir build && cd build
    ```

4. Run CMake:
    ```
    cmake ..
    ```

5. Compile the project:
    ```
    make
    ```

6. Run the task manager:
    ```
    ./TaskManager
    ```

## Usage

Once you run the program, you will be presented with a menu of options:

1. **Add task**: Enter the title of a task to add it to the list.
2. **Remove task**: Enter the index of the task you want to remove.
3. **Complete task**: Enter the index of the task you want to mark as completed.
4. **List tasks**: Shows all tasks with their status (completed or not).
5. **Exit**: Closes the program.

## Dependencies

This project does not require external dependencies, only the C++ Standard Library.
