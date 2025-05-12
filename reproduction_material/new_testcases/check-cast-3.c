#include <stdio.h>
#include <inttypes.h>

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef signed char INT8;
typedef signed short INT16;
typedef signed int INT32;
typedef float FLOAT;
typedef double DOUBLE;
typedef char CHAR;
typedef unsigned char UCHAR;
typedef unsigned int BOOL;
typedef unsigned long long UINT64;
typedef signed long long INT64;

typedef struct {
    UINT16 hfTpcSoft;
    UINT8 ucThreeSlotCmFlag;
    UINT8 ucThreeSlotFngNum;
} STRU_CCH_DLTPC_PARA;

__attribute__((section(".ll2.cch.bss"))) __attribute__ ((aligned(4))) STRU_CCH_DLTPC_PARA gastruDlTpcPara[56];
__attribute__((section(".ddr.cch.uncache.bss"))) UINT32 TpcFingerNum[20][4];
__attribute__((section(".ddr.cch.data"))) UINT32 TpcIdex = 0;

void UBB_CCH_DLTPC_Sche(UINT8 ucLocalChanlNo,
                        UINT8 ucSubSlotIdx,
                        UINT8 ucDpcMode,
                        UINT8 ucCfnNoFingerInd) {
    STRU_CCH_DLTPC_PARA *pstruDlTpcPara;
    pstruDlTpcPara = &gastruDlTpcPara[ucLocalChanlNo];

    if (ucDpcMode == 1) {
        if (ucSubSlotIdx == 0) {
            // Capture original values
            TpcFingerNum[TpcIdex][0] = *(UINT32*)(void*)pstruDlTpcPara;
            TpcFingerNum[TpcIdex][1] = pstruDlTpcPara->ucThreeSlotFngNum;

            // Clear memory via volatile pointer
            *(volatile UINT32*)(void*)pstruDlTpcPara = 0;

            // Capture post-clear values
            TpcFingerNum[TpcIdex][2] = *(UINT32*)(void*)pstruDlTpcPara;
            TpcFingerNum[TpcIdex][3] = pstruDlTpcPara->ucThreeSlotFngNum;

            // Print results
            //printf("Before clear (raw struct): 0x%08X\n", TpcFingerNum[TpcIdex][0]);
            //printf("Before clear (ucThreeSlotFngNum): 0x%02X\n", TpcFingerNum[TpcIdex][1]);
            //printf("After clear (raw struct):  0x%08X\n", TpcFingerNum[TpcIdex][2]);
            printf("0x%02X\n", TpcFingerNum[TpcIdex][3]);

            TpcIdex = (TpcIdex + 1) % 20;
        }

        // Just for completeness
        pstruDlTpcPara->ucThreeSlotFngNum += ucCfnNoFingerInd;
    }
}

int main() {
    // Initialize known struct values
    gastruDlTpcPara[0].hfTpcSoft = 0xABCD;
    gastruDlTpcPara[0].ucThreeSlotCmFlag = 0x12;
    gastruDlTpcPara[0].ucThreeSlotFngNum = 0x34;

    // Run with parameters that trigger the memory clear
    UBB_CCH_DLTPC_Sche(0, 0, 1, 0);
    return 0;
}

