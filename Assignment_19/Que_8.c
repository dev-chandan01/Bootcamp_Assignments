// Given a list of words followed by two words, the task is to find the minimum distance 
//between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 2 )
// Asignment_19, Que_8
// Topic~ String and function in C language
// Author~ Shree Chandan Samal
// Date~ 05/09/2022

#include<stdio.h>
#include<string.h>
int main()
{
    char words[5][20]={"my","name","my","is","chandan"};
    char word1[]="my";
    char word2[]="chandan";
    int i,w1=-1,w2=-1,min=1000,temp;
    for ( i = 0; i < 5; i++)
    {
        if (strcmp(words[i],word1)==0)
        w1=i;
        if (strcmp(words[i],word2)==0)
        w2=i;
        if (w1 != -1 && w2 != -1)
        {
            temp = abs(w2-w1);
            if (temp<min)
            min = temp;
        }
        
    }
    printf("%d",min-1);
    return 0;

}