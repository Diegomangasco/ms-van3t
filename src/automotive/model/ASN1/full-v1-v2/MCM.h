/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MCM-PDU-Descriptions"
 * 	found in "MCM-base.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_MCM_H_
#define	_MCM_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ItsPduHeader.h"
#include "ManoeuvreCoordination.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MCM */
typedef struct MCM {
	ItsPduHeader_t	 header;
	ManoeuvreCoordination_t	 mcm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MCM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MCM;

#ifdef __cplusplus
}
#endif

#endif	/* _MCM_H_ */
#include "asn_internal.h"
