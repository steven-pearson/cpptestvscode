[![CMake](https://github.com/steven-pearson/cpptestvscode/actions/workflows/cmake.yml/badge.svg)](https://github.com/steven-pearson/cpptestvscode/actions/workflows/cmake.yml)
# Simple demo with CMake and GTest

Builds a simple C++ library, runs unit tests and generates code coverage.

## Requirements
Homebrew [https://brew.sh](url)
VSCode [https://code.visualstudio.com/download](url)

CMake
```
brew install cmake
```

GTest
```
brew install googletest
```

Useful VSCode extensions

- CMake Tools (Microsoft)
- Coverage Gutters (rynluker)
- C/C++ (Microsoft)
- C/C++ Themes (Microsoft)
- Makefile Tools (Microsoft)

### Build
```
cd build
cmake ..
make
```

### Run tests
```
cd build
./tests/addtest
```

### Generate coverage
```
cd build/src/CMakeFiles/cpptest.dir
gcov cpptest.cpp.gcno
mkdir ../../../../coverage
lcov --capture --directory . --output-file ../../../../coverage/lcov.info
cd ../../../../coverage
genhtml lcov.info --output-directory results
```

### View coverage
Open results/index.html
