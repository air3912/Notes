#include <stdio.h>
#include<assert.h>

#define N 201

char* longestCommonPrefix(char **strs, size_t sz, char *pref);
 
int main () {
    char *strs[] = {"flower","flow","flight"};  
    char CommonPref[N];
    
    longestCommonPrefix(strs,sizeof(strs)/sizeof(strs[0]),CommonPref);
    
    for(int i=0; i<2; i++) {
        assert(strs[0][i]==CommonPref[i]);
    }
    assert(!CommonPref[2]);
    return 0;
} 

char* longestCommonPrefix(char **strs, size_t sz, char *pref){
    *pref = 0;    //Ä¬ÈÏÇ°×ºÎª¿Õ 
    int i=0; 
    for(int i=0;;i++) {
        char c = *(*strs+i);  // strs[0][i]
        if (!c) return pref;
        for (int j=1;j<sz;j++) {
            if (c!=strs[j][i]) return pref;
        }
        *pref++ = c;
        *pref = 0;
    }  
}
