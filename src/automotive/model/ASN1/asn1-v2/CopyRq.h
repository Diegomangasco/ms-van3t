/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/asn1_IS_ISO_TS_14906_EfcDsrcApplication.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_CopyRq_H_
#define	_CopyRq_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "AttributeIdList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CopyRq */
typedef struct CopyRq {
	long	 destinationEID;
	AttributeIdList_t	 attributeIdList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CopyRq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CopyRq;

#ifdef __cplusplus
}
#endif

#endif	/* _CopyRq_H_ */
#include "asn_internal.h"
