int lengthOfLongestSubstring(char *str)
{
    int L_len = 1;  // lenght of longest substring
    int C_len = 1;  // lenght of current substring

    int P_ind, i;      //  P_ind for previous index
    int visited[256];  //  visited will keep track of visiting char for the last
                                //  instance. since there are 256 ASCII char, its size is
                                //  limited to that value.
    int n = strlen(str);
	if (!n) return 0;

    memset(visited, -1, sizeof(int) * 256);
    visited[str[0]] = 0;  //  the index of that char will tell us that when it was visited.
    for (i = 1; i < n; i++) {
        P_ind = visited[str[i]];
        if (P_ind == -1 || i - C_len > P_ind)
            C_len++;  //  if the current char was not visited earlier, or it is
							 //  not the part of current substring
        else {  //  otherwise, we need to change the current/longest substring length
            if (C_len > L_len)  L_len = C_len;
            C_len = i - P_ind;
        }
        visited[str[i]] = i;
    }
    if (C_len > L_len)
        L_len = C_len;
    return L_len;
}
