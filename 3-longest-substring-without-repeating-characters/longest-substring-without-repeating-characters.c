int lengthOfLongestSubstring(char* s) {
   int maxLen = 0, start = 0;
    int index[256];

    for (int i = 0; i < 256; i++) index[i] = -1;

    for (int end = 0; s[end] != '\0'; end++) {
        char c = s[end];
        if (index[(unsigned char)c] >= start) {
            start = index[(unsigned char)c] + 1;
        }
        index[(unsigned char)c] = end;
        int windowLen = end - start + 1;
        if (windowLen > maxLen) maxLen = windowLen;
    }

    return maxLen;


}