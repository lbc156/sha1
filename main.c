#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"sha1.h"

typedef unsigned char       uint8;

void main(){
    //test ham SHA1

    char const string[] = "sha1-test"; // string input
    char const expect[] = "cebb8a6019488e80ca1e1c92322cfdfbff5c04a4"; // expected result = hexresult
    char result[21];
    char hexresult[41];
    size_t offset;

    /* calculate hash */
    SHA1(result, string, strlen(string) );

    /* format the hash for comparison */
    for( offset = 0; offset < 20; offset++) {
    sprintf( (hexresult + (2*offset)), "%02x", result[offset]&0xff );
    }

    for(int i = 0; i < 20; i++) {
        printf("\n%c", hexresult[i]);
    }
}
