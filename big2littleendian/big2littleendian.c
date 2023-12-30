#include<stdio.h> 
#include<stdint.h>


#define BIG_TO_LITTLE_ENDIAN_32(x) \
    (((x & 0xFF) << 24) | ((x & 0xFF00) << 8) | ((x & 0xFF0000) >> 8) | ((x & 0xFF000000) >> 24))
int main(){
    
    uint32_t bigEndianValue = 0x12345678;
    uint32_t littleEndianValue = BIG_TO_LITTLE_ENDIAN_32(bigEndianValue);
    printf("%d\n",littleEndianValue);
    printf("%x",littleEndianValue);
    return 0;
}