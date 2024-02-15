/*
 Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.

 

Example 1:

Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.
Example 2:

Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".
Example 3:

Input: words = ["def","ghi"]
Output: ""
Explanation: There are no palindromic strings, so the empty string is returned.
*/

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char* firstPalindrome(char** words, int wordsSize) {
    int i;
    int j;
    int first;
    int last;
    int c = 0;

    i = 0;
    while(c < wordsSize)
    {
        last = ft_strlen(words[i]) - 1;
        first = 0;
        j = 0;
        if (last == 0)
            return (words[i]);
        while(first < last)
        {
            if(words[i][first] == words[i][last])
            {
                j = 1;
            }
            else{
                j = 0;
                break;
            }
            first++;
            last--;
        }
        if(j){
            return(words[i]);
        }
        i++;
        c++;
    }
    return ("");
}
