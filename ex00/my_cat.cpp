#include <iostream>
#include <fstream>
using namespace std;

void printFile(char *filename){
	ifstream infile(filename);
		if (!infile.fail()){
			char ch;
			while (infile.get(ch)) {
				cout << ch;
			}
			infile.close();
		}
		else {
					cerr << "cat: " << filename << ": no such file or directory" << "\n";
			}
	}



int main(int argc, char *argv[]) {
	if (argc == 1){
		return 0;
	}
	else {
		for (int i = 1;i < argc;i++){
		printFile(argv[i]);
		}
		return 0;
	}

}
