#include <iostream>
#include <fstream>
using namespace std;

void printFile(char *filename){
	//opens file
	ifstream infile(filename);
		//if file exsists
		if (!infile.fail()){
			//print each line of file character by character
			char ch;
			while (infile.get(ch)) {
				cout << ch;
			}
			//close opened file
			infile.close();
		}
		// if file isnt found give error message
		else {
					cerr << "cat: " << filename << ": no such file or directory" << "\n";
			}
	}



int main(int argc, char *argv[]) {
	// if no arguements are passed return nothing
	if (argc == 1){
		return 0;
	}
	//if they are call print file to print arguements
	else {
		for (int i = 1;i < argc;i++){
		printFile(argv[i]);
		}
		return 0;
	}

}
