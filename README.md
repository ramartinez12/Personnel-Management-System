# Personnel-Management-System
Project that uses binary search trees to arrange a list of names received from a text file, it can arrange the names in ascending or descending order.

For this project, I used past notes from my data structures class, on the logic on how 
binary search trees work. I used online references to understand and implement the 
logic of binary search trees in c, i used https://www.tutorialspoint.com/c_standard_library/ and 
also http://stackoverflow.com/questions/7109964/creating-your-own-header-file-in-c to learn about 
header file for my program. When working on the program, Francisco Gallegos, Aaron Santellanes and 
myself talked about the struture of the insert Node method, we talked about how the algorithm worked 
and what ways it could be implemented. The command required to run my when in the directory where all 
my files are located are,

$ make clean 
$ make all 
$ make demo

This command will clean all .o files not required, create new .o files and then run the demo of my program. 
My program apparently arranges names in the binary search tree appropriately when hardcoded names are input
into the tree, but when trying to enter names manually, it has a problem with some names due to the stringcmp() 
method. “This assignment was prepared in a manner consistent with the instructor’s requirements. Clear documentation 
must be provided for all significant collaboration or guidance from external sources (including algorithms or code 
presented in the textbook or this web site).
