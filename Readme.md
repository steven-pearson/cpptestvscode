### Build
```
cd build
cmake ..
make
```

### Run tests
```
./tests/addtest
```

### Generate coverage
```
cd src/CMakeFiles/cpptest.dir
gcov cpptest.cpp.gcno
mkdir ../../../../coverage
lcov --capture --directory . --output-file ../../../../coverage/lcov.info
cd ../../../../coverage
genhtml lcov.info --output-directory results
```

### View coverage
Open results/index.html
