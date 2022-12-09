/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../IVIM-ASN1-files/asn1_IS_ISO_TS_19321_IVI.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_IVI_H_
#define	_IVI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ItsPduHeader.h"
#include "IviStructure.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* IVI */
typedef struct IVI {
	ItsPduHeader_t	 header;
	IviStructure_t	 ivi;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IVI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IVI;

#ifdef __cplusplus
}
#endif

#endif	/* _IVI_H_ */
#include "asn_internal.h"