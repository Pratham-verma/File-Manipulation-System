#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sys/stat.h>

using namespace std;

class FileManager {
    private:
        string filename;
    
    public:
        FileManager(string name) {
            filename = name;
        }

        // Save to a file
        void save_to_file(string content) {
            ofstream file(filename);
            if(file.is_open()) {
                file << content;
                file.close();
                cout << "File saved successfully!\n";
            } else {
                cout << "Failed to save file!\n";
            }
        }

        // View file content
        void view_file_content() {
            ifstream file(filename);
            if(file.is_open()) {
                string line;
                while(getline(file, line)) {
                    cout << line << endl;
                }
                file.close();
            } else {
                cout << "Failed to open file!\n";
            }
        }

        // Obtain file size
        void get_file_size() {
            struct stat file_stat;
            if(stat(filename.c_str(), &file_stat) != 0) {
                cout << "Failed to get file size!\n";
            } else {
                cout << "File size: " << file_stat.st_size << " bytes\n";
            }
        }

        // File Detail
        void get_file_detail() {
            struct stat file_stat;
            if(stat(filename.c_str(), &file_stat) != 0) {
                cout << "Failed to get file detail!\n";
            } else {
                cout << "File name: " << filename << endl;
                cout << "File size: " << file_stat.st_size << " bytes\n";

            }
        }

        // Clear the file
        void clear_file() {
            ofstream file(filename);
            if(file.is_open()) {
                file.close();
                cout << "File cleared successfully!\n";
            } else {
                cout << "Failed to clear file!\n";
            }
        }

        // Delete the file
        void delete_file() {
            if(remove(filename.c_str()) != 0) {
                cout << "Failed to delete file!\n";
            } else {
                cout << "File deleted successfully!\n";
            }
        }
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
