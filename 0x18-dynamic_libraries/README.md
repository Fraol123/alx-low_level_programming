**C - Dynamic libraries**
========================
# dynamic liberaries
- genrate one object file for each source code
- fPIC flag ensures the code is postion independent. it wouldn't matter where in the meomry its loaded
- c ensures each -o is not linked yet
- shared flag The shared flag create the shared library. 
   Shared libraries have the prefix lib and suffix.so for shared library.
# how to compile
```
gcc *.c -c -fPIC
gcc -shared -o libholberton.so *.o
```
[further read](https://medium.com/@mohamethseck/dynamic-libraries-shared-library-2b14c5121904)
