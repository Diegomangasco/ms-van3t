/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "GDD"
 * 	found in "/mnt/EVO/ASN1-C-ITS/GDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_Weight_H_
#define	_Weight_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "RSCUnit.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Weight */
typedef struct Weight {
	long	 value;
	RSCUnit_t	 unit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Weight_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Weight;
extern asn_SEQUENCE_specifics_t asn_SPC_Weight_specs_1;
extern asn_TYPE_member_t asn_MBR_Weight_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Weight_H_ */
#include "asn_internal.h"
