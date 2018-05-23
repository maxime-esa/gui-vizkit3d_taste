#ifndef GENERATED_ASN1SCC_CONTEXT_VIZKIT3D_SONARBEAM_H
#define GENERATED_ASN1SCC_CONTEXT_VIZKIT3D_SONARBEAM_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccVizkit3D_FilePath configfile;
    asn1SccVizkit3D_PluginLabel id;
} asn1SccContext_vizkit3d_sonarbeam;

#define asn1SccContext_vizkit3d_sonarbeam_REQUIRED_BYTES_FOR_ENCODING       252 
#define asn1SccContext_vizkit3d_sonarbeam_REQUIRED_BITS_FOR_ENCODING        2015
#define asn1SccContext_vizkit3d_sonarbeam_REQUIRED_BYTES_FOR_ACN_ENCODING   252 
#define asn1SccContext_vizkit3d_sonarbeam_REQUIRED_BITS_FOR_ACN_ENCODING    2015
#define asn1SccContext_vizkit3d_sonarbeam_REQUIRED_BYTES_FOR_XER_ENCODING   377

void asn1SccContext_vizkit3d_sonarbeam_Initialize(asn1SccContext_vizkit3d_sonarbeam* pVal);
flag asn1SccContext_vizkit3d_sonarbeam_IsConstraintValid(const asn1SccContext_vizkit3d_sonarbeam* val, int* pErrCode);


extern const asn1SccContext_vizkit3d_sonarbeam vizkit3d_sonarbeam_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif