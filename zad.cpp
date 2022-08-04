#include <iostream>
#include <cstring>

int main(){
    char* input = new char[1024];
    std::cin.getline(input, 1024);
    
    bool valid = false;
    int signsCount = 0;
    int letterCount = 0;
    int arr[100];
    int size = 0;
    for(int i = 0 ; i < strlen(input); i++){
        if(input[i] == ' '){
            valid = true;
            //std::cout << "1";
        }
        if(((int)input[i] >= 65 && (int)input[i] <= 90) || ((int)input[i] >= 97 && (int)input[i] <= 122)){
            valid = true;
            letterCount++;
            //std::cout << "2";
        }
        if(input[i] == '.' || input[i] == ',' || input[i] == '!'|| input[i] == '?'|| input[i] == ';'){
            signsCount++;
            valid = true;
            arr[size++] = i;
            //std::cout << "3";
        }
        // if(signsCount > 1){
        //     for(int a = lastSeenSign; a < i; a++){
        //         if(((int)input[a] >= 65 && (int)input[a] <= 90) || ((int)input[a] >= 97 && (int)input[a] <= 122)){
        //             valid = true;
        //         }
        //         else{
        //             valid = false;
        //             break;
        //         }
        //     }
        //     std::cout << "4";
        // }
        if(letterCount > 0){
            for(int a = strlen(input); a >= 0; a--){
                //std::cout << "5";
                if(((int)input[a] >= 65 && (int)input[a] <= 90) || ((int)input[a] >= 97 && (int)input[a] <= 122)){

                    for(int b = a; b < strlen(input); b++){
                        if(input[b] == '.' || input[b] == ',' || input[b] == '!'|| input[b] == '?'){
                            valid = true;
                        }
                        else{
                            valid = false;
                            break;
                        }
                    }
                    
                }
            }
            
        }
    }
    for(int i = 0; i < size; i++){
        for(int a = 0; a < i; a++){
            if(((int)input[arr[i]] >= 65 && (int)input[arr[i]] <= 90) || ((int)input[arr[i]] >= 97 && (int)input[arr[i]] <= 122)){
                
            }
        }
    }
    if(!valid){
        std::cout << "Error!";
    }
    delete[] input;
}