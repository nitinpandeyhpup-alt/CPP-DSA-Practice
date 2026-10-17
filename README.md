# CPP-DSA-Practice

# C++ & DSA Practice Journey

Welcome to my personal practice repository! Here I keep track of the C++ and Data Structures & Algorithms problems I solve, along with the core concepts and toolbox functions I learn.

---

## 📌 Problem: Largest Odd Number in String

### 🧠 The Core Idea (In Plain English)
- An integer is odd if and only if its **last digit** is odd.
- **The Trick:** If you scan **backward (from right to left)**, the very first odd digit you hit gives you the longest and largest possible odd substring starting from index 0. You don't need to look any further!

### 💻 Code Solution
```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] % 2 != 0){
           cout << s.substr(0, i + 1); 
           return 0;
        }
    }
}
