/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Context-vizkit3d-rigidbodystate.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccContext_vizkit3d_rigidbodystate_Initialize(asn1SccContext_vizkit3d_rigidbodystate* pVal)
{
    *pVal = (asn1SccContext_vizkit3d_rigidbodystate) {
    .configfile = "",
    .id = " "
};
}
#endif

 
flag asn1SccContext_vizkit3d_rigidbodystate_IsConstraintValid(const asn1SccContext_vizkit3d_rigidbodystate* pVal, int* pErrCode)
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

const asn1SccContext_vizkit3d_rigidbodystate vizkit3d_rigidbodystate_ctxt = {
    .configfile = "config-bodystate.yml",
    .id = "RBS"
};
