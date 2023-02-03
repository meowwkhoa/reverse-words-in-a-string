#include <iostream>
#include <cstring>
using namespace std;

void dao(char s[], int i, int j){
    while(i<j)
        swap(s[i++], s[j--]);
}

int main(){
    char s[500];
    cin.getline(s, 500);
    
    int n = strlen(s);
    for(int k = 0; k < n; k++){
        if(s[k] == ' ')
            continue;
        int q = k;
        while(s[q + 1] != ' ' && q < n -1)
            q++;
        dao(s, k, q);
        k = q;
    }
    
    cout << s << endl;
}
