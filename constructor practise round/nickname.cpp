#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
// Returns true if character c can be interpreted as a letter.
bool canBeLetter(char c) {
    // Any alphabet letter (A–Z) is acceptable.
    if(isalpha(c))
        return true;
    // The ambiguous character: digit '0' can be interpreted as letter.
    if(isdigit(c) && c == '0')
        return true;
    return false;
}
 
// Returns true if character c can be interpreted as a digit.
bool canBeDigit(char c) {
    // Any digit (0–9) is acceptable.
    if(isdigit(c))
        return true;
    // The ambiguous character: letter 'O' can be interpreted as digit.
    if(isalpha(c) && c == 'O')
        return true;
    return false;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        
        // Check: if the first character is a digit, then print "NO" immediately.
        if(isdigit(s[0])) {
            cout << "NO" << "\n";
            continue;
        }
        
        int validSplits = 0;
        
        // Try every partition index p from 0 to n.
        // p = 0 means the letter part is empty and the entire string is digits.
        // p = n means the digit part is empty and the entire string is letters.
        for (int p = 0; p <= n; p++){
            bool valid = true;
            // Check the left part [0, p-1]: every character must be interpretable as a letter.
            for (int i = 0; i < p; i++){
                if(!canBeLetter(s[i])){
                    valid = false;
                    break;
                }
            }
            // Check the right part [p, n-1]: every character must be interpretable as a digit.
            for (int i = p; i < n; i++){
                if(!canBeDigit(s[i])){
                    valid = false;
                    break;
                }
            }
            // A valid nickname is one where at least one part is non-empty.
            // (Since s is non-empty, either p>0 or p<n is automatically satisfied.)
            if(valid)
                validSplits++;
        }
 
        // The nickname is unambiguous if and only if there is exactly one valid partition.
        cout << (validSplits == 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}
