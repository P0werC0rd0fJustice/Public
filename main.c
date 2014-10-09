//
//  main.c
//  FileEncrypt
//
//  Created by Tristan Breetz on 4/5/14.
//  Copyright (c) 2014 Tristan Breetz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("clear");
    FILE *pWrite;
    FILE *pRead;
    char encryptText[100];
    int asciiValue;
    int choice = 0;
    int i = 0;
    int x = 0;
    while (x == 0){
        choice = 0;
        printf("1.Encrypt\n2.Decrypt\n3.Quit\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                system("clear");
                pWrite = fopen("/Users/TristanBreetz/Documents/Xcode Projects/FileEncrypt/FileEncrypt/encrypted.tpb", "w");
                if(pWrite == NULL){
                    printf("\nFile not opened\n");
                    exit(EXIT_SUCCESS);
                }
                else{
                    printf("\nEnter text to encrypt: ");
                    scanf("%s", encryptText);
                    strcat(encryptText, " ");
                    while(encryptText[i]){
                        fprintf(pWrite, "%d " , (encryptText[i++] * 314 + 628));
                    }
                }
                fclose(pWrite);
                break;
            case 2:
                system("clear");
                pRead = fopen("/Users/TristanBreetz/Documents/Xcode Projects/FileEncrypt/FileEncrypt/encrypted.tpb", "r");
                if(pRead == NULL){
                    printf("\nFile not found\n");
                    exit(EXIT_SUCCESS);
                }
                else{
                    printf("\nDecrypted Text: ");
                    fscanf(pRead, "%d ", &asciiValue);
                    while (!feof(pRead)) {
                        asciiValue = (asciiValue - 628) / 314;
                        printf("%c", asciiValue);
                        fscanf(pRead, "%d ", &asciiValue);
                    }
                }
                printf("\n");
                fclose(pRead);
                break;
            case 3:
                exit(EXIT_SUCCESS);
                break;
                
                
                
        }
        
    }
    
    
}

