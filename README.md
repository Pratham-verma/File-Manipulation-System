# File-manipulation-system
• FileManager
FileManager is a C++ class that provides functionality to manage files. It includes methods to create, save, view, delete, and get information about files.

• Usage
1. To use the FileManager class, follow these steps:

Include the necessary headers:

cpp
Copy code
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sys/stat.h>
  
2. Create an instance of the FileManager class, providing the desired filename as a parameter:

  FileManager fm("test.txt");
  
3. Use the FileManager methods to perform file operations. The available methods are:
save_to_file(string content): Saves the given content to the file specified during FileManager initialization.
  

view_file_content(): Displays the content of the file on the console.

get_file_size(): Retrieves and prints the size of the file in bytes.

get_file_detail(): Displays detailed information about the file, including the filename and file size.

clear_file(): Clears the content of the file.

delete_file(): Deletes the file from the file system.

4. After performing the desired operations, return 0 to exit the program.
  
Example:-
cpp
Copy code
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sys/stat.h>

using namespace std;

class FileManager {
    // Class implementation...
};

int main() {
    FileManager fm("test.txt");

    fm.save_to_file("Hello, world!\nThis is a test file.\n");

    cout << "File content:\n";
    fm.view_file_content();

    fm.get_file_size();

    fm.get_file_detail();

    fm.clear_file();

    fm.delete_file();

    return 0;
}  
