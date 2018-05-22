/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Context-vizkit3d-bodystate.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccContext_vizkit3d_bodystate_Initialize(asn1SccContext_vizkit3d_bodystate* pVal)
{
    *pVal = (asn1SccContext_vizkit3d_bodystate) {
    .configfile = "",
    .id = " "
};
}
#endif

 
flag asn1SccContext_vizkit3d_bodystate_IsConstraintValid(const asn1SccContext_vizkit3d_bodystate* pVal, int* pErrCode)
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

const asn1SccContext_vizkit3d_bodystate vizkit3d_bodystate_ctxt = {
    .configfile = "config-bodystate.yml",
    .id = "BS"
};
