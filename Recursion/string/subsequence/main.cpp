#include <iostream>
#include <cmath>
using namespace std;

int sequence(string in, string* out);
void display(string*, int);
int main(int argc, char const* argv[]) {
    string str;
    cout << "Enter the word: ";
    getline(cin, str);
    int possible_seq = pow(2, str.size());
    string* output = new string[possible_seq];
    cout << "The string is: " << str << endl;
    cout << "Subsequences are: " << endl;
    display(output, sequence(str, output));
    return 0;
}

void display(string* str, int size) {
    for (int i = 0; i < size; i++)
        cout << str[i] << endl;
}

int sequence(string in, string* out) {
    if (in.empty()) {
        *out = "";
        return 1;
    }
    string subs = in.substr(1);
    int substrsize = sequence(subs, out);
    // remaining a is concated
    for (int i = 0; i < substrsize; i++)
        out[i + substrsize] = out[i] + in[0];
    // since size is doubled
    return 2 * substrsize;
}