/*************************************************************************************************************
*                                                  MODULE                                                    *
*************************************************************************************************************/
#ifndef ENCRYPT_H
#define ENCRYPT_H

#ifdef __cplusplus
extern "C" {
#endif
  
/*************************************************************************************************************
*                                                 DEFINES                                                    *
*************************************************************************************************************/
#define CHIPHERTEXT_HEAD_SIZE                   10
    
    
/*************************************************************************************************************
*                                                  DATA TYPES                                                *
*************************************************************************************************************/
#pragma pack(1)

typedef struct
{
    unsigned int ID;
    unsigned int RN;
    unsigned int KEY;
} sMACTypeDef;

typedef struct
{
    unsigned int   id;
    unsigned int   rn;
    unsigned short len;
    unsigned char  data;
} sCiphertextTypeDef;

#pragma pack() 

    
/*************************************************************************************************************
*                                            FUNCTION STATEMENT                                              *
*************************************************************************************************************/
void Decrypt (unsigned int id, unsigned int rn, unsigned int key, unsigned char *pdata, unsigned int len);
void Encrypt (unsigned int id, unsigned int rn, unsigned int key, unsigned char *pdata, unsigned int len);


/*************************************************************************************************************
*                                               MODULE END                                                   *
*************************************************************************************************************/
#ifdef __cplusplus
}
#endif

#endif