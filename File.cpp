#include "File.h"

void File::processFile(string infileName, string outfileName) {
    // Open the input and output files
    ifstream infile(infileName);
    ofstream outfile(outfileName);

    // Read each line from the input file
    string line;
    while (getline(infile, line)) {
        // Split the line into separate data elements
        vector<int> data;
        string element;
        for (char c : line) {
            if (c == ' ') {
                data.push_back(stoi(element));
                element.clear();
            }
            else {
                element += c;
            }
        }
        if (!element.empty()) {
            data.push_back(stoi(element));
        }

        // Sort the data using radix sort
        Radix::radix_sort(data);

        // Write the sorted data to the output file
        for (int x : data) {
            outfile << x << ' ';
        }
        outfile << '\n';
    }

    // Close the input and output files
    infile.close();
    outfile.close();
    cout << "File is complete." << endl;
}