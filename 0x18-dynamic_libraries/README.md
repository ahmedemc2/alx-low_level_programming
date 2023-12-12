Learn about dynamic libraries, and the command used with the steps to create a dynamic library
in this task are :

# create file1.c and file2.c

gcc -c -fPIC file1.c -o file1.o |OR| gcc -c -fPIC file1.c => file1.o
gcc -c -fPIC file2.c -o file2.o |OR| gcc -c -fPIC file12c => file2.o

# create the dynamic library

gcc -shared file1.o file2.o -o lib(library-name).so |OR| gcc -shared *.o -o lib(library-name).so

# create the main function => main.c

# export the dynamic library path

export LD_LIBRARY_PATH=/PATH/:$LD_LIBRARY_PATH

#and just to check the PATH

echo $LD_LIBRARY_PATH => /PATH/

# lets now create the main file

gcc main.c -o main -L/path/ -l(library-name)

==> PS1 : when creating the main file, after the -L we can put just '.' if we are in the same LD_LIBRARY_PATH

==> PS2 : the library name is not between two parenthese

# "nm" command : is used to display the symbols (functions, variables, ...) present in object files and shared libraries.

nm lib(library-name).so

# "ldd" command : is used to display the shared library dependencies of an executable or shared library. It shows which shared libraries a program or library is linked against.

ldd main (main its just for our example)
