#Simple vs Complex loop test
  
Java & C++ version of simple loop vs complex loop benchmark from a [SO question](https://stackoverflow.com/questions/77634955/why-is-the-simpler-loop-slower)  
  
  
Below is benchmark data from my macbook 13.  
It seems that both launguage found out that both functions are dead code(with an optimization flag or a couple of method invocations).
  
  
```

simple 2.6292877197265625 complex 2.601916790008545
simple 2.6300859451293945 complex 2.6173789501190186
simple 2.6323330402374268 complex 2.6118500232696533
Python: 3.12.1 (main, Dec  7 2023, 20:45:44) [Clang 15.0.0 (clang-1500.0.40.1)]


simple : 102ms complex : 101ms
simple : 102ms complex : 102ms
simple : 102ms complex : 102ms
Apple clang version 15.0.0 (clang-1500.1.0.2.5)
Target: arm64-apple-darwin23.2.0
Thread model: posix
(compiled without any optimization, levels above -O1 will eliminate both function's code)


simple = 1ms complex = 103ms
simple = 0ms complex = 102ms
simple = 0ms complex = 0ms
simple = 0ms complex = 0ms
simple = 0ms complex = 0ms
simple = 0ms complex = 0ms
OpenJDK 64-Bit Server VM version 17.0.9+9, mixed mode, Eclipse Adoptium
```
