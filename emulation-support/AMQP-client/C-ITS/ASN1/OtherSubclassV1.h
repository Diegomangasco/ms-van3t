/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_OtherSubclassV1_H_
#define	_OtherSubclassV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OtherSublassTypeV1.h"
#include "ClassConfidenceV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* OtherSubclassV1 */
typedef struct OtherSubclassV1 {
	OtherSublassTypeV1_t	 type;	/* DEFAULT 0 */
	ClassConfidenceV1_t	 confidence;	/* DEFAULT 0 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherSubclassV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherSubclassV1;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherSubclassV1_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherSubclassV1_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _OtherSubclassV1_H_ */
#include "asn_internal.h"
