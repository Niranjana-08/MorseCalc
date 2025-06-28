#include <stdio.h>
#include <string.h>
#include <ctype.h>
// I have included the ctype library to use the toupper character handling function.

// creating a function to convert the character to it's Morse code representation 
char* morse_encode(char character) {
    switch(toupper(character)) 
    // very crucial : used toupper function to ensure case-insensitivity in encoding. 
    {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
    // including the cases of digits 0-9
        case '0': return "-----";
        case '1': return ".----";
        case '2': return "..---";
        case '3': return "...--";
        case '4': return "....-";
        case '5': return ".....";
        case '6': return "-....";
        case '7': return "--...";
        case '8': return "---..";
        case '9': return "----.";
    /*including special symbols like : 
    Period (.) ; Comma (,) ; Question Mark (?) ;
    Apostrophe (') ; Exclamation Mark (!) ; Slash (/) ;
    Left Parentheses (() ; Right Parentheses ()) ; Ampersand (&) ; 
    Colon (:) ; Semicolon (;) ;Equal Sign (=) ; 
    Plus Sign (+) ; Hyphen (-) ; Underscore (_) ; 
    Quotation Mark (") ; Dollar Sign ($) ; At Sign (@) ;  */


        case '.': return ".-.-.-"; 
        case ',': return "--..--"; 
        case '?': return "..--.."; 
        case '\'': return ".----."; 
        case '!': return "-.-.--"; 
        case '/': return "-..-.";  
        case '(': return "-.--.";  
        case ')': return "-.--.-";  
        case '&': return ".-..."; 
        case ':': return "---..."; 
        case ';': return "-.-.-.";  
        case '=': return "-...-"; 
        case '+': return ".-.-."; 
        case '-': return "-....-"; 
        case '_': return "..--.-"; 
        case '"': return ".-..-."; 
        case '$': return "...-..-";  
        case '@': return ".--.-."; 
        default: return ""; // return empty string for unsupported characters
    }
}

// creating a function to convert Morse code to character
char morse_decode(const char* morse) {
    // using stringcomparing :  Comparing the input Morse code sequence with predefined ones.
    // using if statements to move within 
    // decoding alphabets (A-Z)
    if(strcmp(morse, ".-") == 0) return 'A';
    else if(strcmp(morse, "-...") == 0) return 'B';
    else if(strcmp(morse, "-.-.") == 0) return 'C';
    else if(strcmp(morse, "-..") == 0) return 'D';
    else if(strcmp(morse, ".") == 0) return 'E';
    else if(strcmp(morse, "..-.") == 0) return 'F';
    else if(strcmp(morse, "--.") == 0) return 'G';
    else if(strcmp(morse, "....") == 0) return 'H';
    else if(strcmp(morse, "..") == 0) return 'I';
    else if(strcmp(morse, ".---") == 0) return 'J';
    else if(strcmp(morse, "-.-") == 0) return 'K';
    else if(strcmp(morse, ".-..") == 0) return 'L';
    else if(strcmp(morse, "--") == 0) return 'M';
    else if(strcmp(morse, "-.") == 0) return 'N';
    else if(strcmp(morse, "---") == 0) return 'O';
    else if(strcmp(morse, ".--.") == 0) return 'P';
    else if(strcmp(morse, "--.-") == 0) return 'Q';
    else if(strcmp(morse, ".-.") == 0) return 'R';
    else if(strcmp(morse, "...") == 0) return 'S';
    else if(strcmp(morse, "-") == 0) return 'T';
    else if(strcmp(morse, "..-") == 0) return 'U';
    else if(strcmp(morse, "...-") == 0) return 'V';
    else if(strcmp(morse, ".--") == 0) return 'W';
    else if(strcmp(morse, "-..-") == 0) return 'X';
    else if(strcmp(morse, "-.--") == 0) return 'Y';
    else if(strcmp(morse, "--..") == 0) return 'Z';
    
    // decoding numbers (0-9)

    else if(strcmp(morse, "-----") == 0) return '0';
    else if(strcmp(morse, ".----") == 0) return '1';
    else if(strcmp(morse, "..---") == 0) return '2';
    else if(strcmp(morse, "...--") == 0) return '3';
    else if(strcmp(morse, "....-") == 0) return '4';
    else if(strcmp(morse, ".....") == 0) return '5';
    else if(strcmp(morse, "-....") == 0) return '6';
    else if(strcmp(morse, "--...") == 0) return '7';
    else if(strcmp(morse, "---..") == 0) return '8';
    else if(strcmp(morse, "----.") == 0) return '9';

    /* decoding special symbols like :
    Period (.) ; Comma (,) ; Question Mark (?) ;
    Apostrophe (') ; Exclamation Mark (!) ; Slash (/) ;
    Left Parentheses (() ; Right Parentheses ()) ; Ampersand (&) ;
    Colon (:) ; Equal Sign (=) ; Plus Sign (+) ;
    Hyphen (-) ; Underscore (_) ; Quotation Mark (") ; 
    Dollar Sign ($) ; At Sign (@) ; */ 

    else if(strcmp(morse, ".-.-.-") == 0) return '.';  
    else if(strcmp(morse, "--..--") == 0) return ',';  
    else if(strcmp(morse, "..--..") == 0) return '?';  
    else if(strcmp(morse, ".----.") == 0) return '\'';  
    else if(strcmp(morse, "-.-.--") == 0) return '!';  
    else if(strcmp(morse, "-..-.") == 0) return '/';  
    else if(strcmp(morse, "-.--.") == 0) return '(';  
    else if(strcmp(morse, "-.--.-") == 0) return ')';  
    else if(strcmp(morse, ".-...") == 0) return '&';  
    else if(strcmp(morse, "---...") == 0) return ':';  
    else if(strcmp(morse, "-...-")== 0) return '=';  
    else if(strcmp(morse, ".-.-.") == 0) return '+';  
    else if(strcmp(morse, "-....-") == 0) return '-';  
    else if(strcmp(morse, "..--.-") == 0) return '_';  
    else if(strcmp(morse, ".-..-.") == 0) return '"';  
    else if(strcmp(morse, "...-..-") == 0) return '$';  
    else if(strcmp(morse, ".--.-.") == 0) return '@'; 
    else return ' '; // return space for unrecognized sequences
}

// creating a function to check if the characters entered is valid for Morse encoding
int is_valid_char(char character) {

/* I used this function to check if : the character is alphabetic (a-z or A-Z), a digit (0-9),
a space, or one of the Morse code special characters.*/ 

    return (isalpha(character) || isdigit(character) || isspace(character)
            || character == '.' || character == ',' || character == '?' || character == '\''
            || character == '!' || character == '/' || character == '(' || character == ')'
            || character == '&' || character == ':' || character == ';' || character == '='
            || character == '+' || character == '-' || character == '_' || character == '"'
            || character == '$' || character == '@');
}

// creating a function to check if a Morse code sequence is valid
int is_valid_morse(const char* morse) {
    // here using while loop to run through each characters
    while (*morse) {
        if (*morse != '.' && *morse != '-' && *morse != ' ') {
            return 0; // to indicate : Invalid Morse code character
        }
        morse++;
        // move to next character of the sequence
    }
    return 1;
}

// Function to convert a string to Morse code
void encode_to_morse(const char* text) {
    int i;
    // here using for loop to run through each characters
    for(i = 0; i < strlen(text); i++) {
        if(is_valid_char(text[i])) {
            if(text[i] != ' ') {
                printf("%s ", morse_encode(text[i]));
            } else {
                printf(" ");
                // very crucial : printing a space if the character is itself a space
            }
        } else {
            // printing a ERROR MESSAGE to let know the user that input is not valid for morse coding
            printf("[Invalid input: '%c'] ", text[i]);
        }
    }
    // to print two new lines to beautify the oupput 
    printf("\n\n");
}

// Function to convert Morse code to string
void decode_to_text(const char* morse) {
    char *token, *rest = strdup(morse);
    //  very crucial : using if statement to remove trailing newline character
    // to check if the last character is a newline
    
    if (rest[strlen(rest) - 1] == '\n')
    //If it is, remove it by replacing with null terminator
        rest[strlen(rest) - 1] = '\0';

    while ((token = strsep(&rest, " ")) != NULL) {
        if (*token != '\0') { // Check for empty token
            if (is_valid_morse(token)) {
                printf("%c", morse_decode(token));
            } else {
                // printing a ERROR MESSAGE to let know the user that input is not a valid morse code
                printf("[Invalid Morse: '%s'] ", token);
            }
        }
    }
    // to print two new lines to beautify the output 
    printf("\n\n");
}

int main() {

    printf("\n");

    int choice;
    char input[100];

    // giving an introductory messsage 
    
    printf("Welcome to Morse Code Calculator !\n\n");

    while (1) {
        // to improve output interface using menu options with print statements
        printf("Please select any of the following menu items : \n");
        printf("1. Encode to Morse code\n");
        printf("2. Decode Morse code\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // using switch statemnent to flow between cases
        // gave condition as choice so that the user can give input and exit whenever needed by using exit choice
    
        switch(choice) {
            case 1:
                printf("Enter text to encode: ");
                // Clearing the input buffer by using getchar
                getchar();
                // I used fgets to read the text and store in input array 
                fgets(input, sizeof(input), stdin);
                printf("Encoded Morse code: ");
                encode_to_morse(input);
                break;
            case 2:
                printf("Enter Morse code to decode (use space to separate characters): ");
                // Clearing the input buffer by using getchar
                getchar(); 
                // I ussed fgets to read the text and store in input array
                fgets(input, sizeof(input), stdin);
                printf("Decoded text: ");
                decode_to_text(input);
                break;
            case 3:
            // printing proper exit statement 
                printf("Thank you for using my  Morse Code Calculator!\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

