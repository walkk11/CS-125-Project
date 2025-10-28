/*
	different things to try for mad lib
*/

#include <stdio.h>

int main() {
	char exArr[3][10] = {{"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"},
        {"Pack", "my", "box", "with", "five", "dozen", "liquor", "jugs"},
        {"Sphinx", "of", "black", "quartz,", "judge", "my", "vow"}
    };
    
    char arr1[3][10] = {{"The", "quick", " ", "fox", "jumps", "over", "the", "lazy", "dog"},
        {"Pack", "my", "box", "with", "five", " ", "liquor", "jugs"},
        {"Sphinx", "of", "black", "quartz,", " ", "my", "vow"}
    };
    
    char arr2[3][10] = {{"The", "quick", "___", "fox", "jumps", "over", "the", "lazy", "dog"},
        {"Pack", "my", "box", "with", "five", "___", "liquor", "jugs"},
        {"Sphinx", "of", "black", "quartz,", "___", "my", "vow"}
    };
    
    char arr3[3][10] = {{"The", "quick", "(word)", "fox", "jumps", "over", "the", "lazy", "dog"},
        {"Pack", "my", "box", "with", "five", "(word)", "liquor", "jugs"},
        {"Sphinx", "of", "black", "quartz,", "(word)", "my", "vow"}
    };
    
    printf("Enter the word: ");
    scanf("%s", arr1[0][2]);
    
    printf("Enter the word: ");
    scanf("%s", arr1[1][5]);
    
    printf("Enter the word: ");
    scanf("%s", arr1[2][4]);
    
    printf("Enter the word: ");
    scanf("%s", arr2[0][2]);
    
    printf("Enter the word: ");
    scanf("%s", arr2[1][5]);
    
    printf("Enter the word: ");
    scanf("%s", arr2[2][4]);
    
    printf("Enter the word: ");
    scanf("%s", arr3[0][2]);
    
    printf("Enter the word: ");
    scanf("%s", arr3[1][5]);
    
    printf("Enter the word: ");
    scanf("%s", arr3[2][4]);
    
    printf("
}
