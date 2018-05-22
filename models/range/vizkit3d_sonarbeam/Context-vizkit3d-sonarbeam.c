/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Context-vizkit3d-sonarbeam.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccContext_vizkit3d_sonarbeam_Initialize(asn1SccContext_vizkit3d_sonarbeam* pVal)
{
    *pVal = (asn1SccContext_vizkit3d_sonarbeam) {
    .configfile = "",
    .id = " "
};
}
#endif

 
flag asn1SccContext_vizkit3d_sonarbeam_IsConstraintValid(const asn1SccContext_vizkit3d_sonarbeam* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccVizkit3D_FilePath_IsConstraintValid(pVal->configfile, pErrCode);
	if (ret) {
	    ret = asn1SccVizkit3D_PluginLabel_IsConstraintValid(pVal->id, pErrCode);
	
	}

	return ret;
}

const asn1SccContext_vizkit3d_sonarbeam vizkit3d_sonarbeam_ctxt = {
    .configfile = "config-range.yml",
    .id = "Sonar"
};
