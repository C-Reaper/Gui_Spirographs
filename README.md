# Spirographs

## Overview

This project is a simple Spirograph visualization application developed in C. It allows users to generate and explore mathematical Spirograph patterns by combining rotating circles with customizable parameters. The application renders the resulting curves in real time and provides an interactive way to experiment with geometric designs.

## Features

* Real-time generation and rendering of Spirograph patterns.
* Adjustable circle radii and drawing parameters.
* Interactive exploration of mathematical curve generation.
* Cross-platform support for Linux, Windows, and WebAssembly.

## Project Structure

The project structure is organized as follows:

```text
<Project>/
├── build/
│   └── Main.(exe)
├── src/                # Source code directory
│   └── Main.c          # Entry point file
├── Makefile.linux      # Linux build configuration
├── Makefile.windows    # Windows build configuration
├── Makefile.wine       # Wine build configuration for cross-compiling to Windows
├── Makefile.web        # Emscripten build configuration for WebAssembly
└── README.md           # This file
```

## Prerequisites

* C/C++ Compiler and Debugger (GCC, Clang)
* Make utility
* Standard development tools

### Required Libraries

* **Linux:** X11, PNG, JPEG
* **Windows:** WINAPI
* **WebAssembly:** Emscripten

## Build & Run

### Build on Linux

```sh
cd <Project>
make -f Makefile.linux all
```

This will compile the source code and generate an executable named `Main` in the `build` directory.

### Build on Windows

```sh
cd <Project>
make -f Makefile.windows all
```

This will create an executable named `Main.exe` in the `build` directory using MinGW.

### Build for WebAssembly

```sh
cd <Project>
make -f Makefile.web all
```

This will compile the source code and generate HTML, JavaScript, and WebAssembly files in the `build` directory. You can serve the generated `index.html` file through a web server to run the application in a browser.

## Execute

After building, run the application with:

```sh
# On Linux
make -f Makefile.linux exe

# On Windows
make -f Makefile.windows exe
```

For the WebAssembly version, open the generated `index.html` file in a modern web browser.

## Controls

The application provides interactive controls for modifying Spirograph parameters. Depending on the platform version, users can adjust values such as:

* Outer circle radius
* Inner circle radius
* Pen offset
* Drawing speed
* Number of iterations

Changes are reflected immediately in the rendered Spirograph pattern.

## Clean Build

To remove all generated build artifacts:

```sh
make -f Makefile.linux clean
```

This will delete all files created during the build process and return the project to a clean state.

## License

This project is provided as-is for educational and demonstration purposes. Modify and distribute it according to the license included with the source code.
