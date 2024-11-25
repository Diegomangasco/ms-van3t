/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/mnt/EVO/ASN1-C-ITS/IVI-payload.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AbsolutePositionsWAltitude_H_
#define	_AbsolutePositionsWAltitude_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AbsolutePositionWAltitude;

/* AbsolutePositionsWAltitude */
typedef struct AbsolutePositionsWAltitude {
	A_SEQUENCE_OF(struct AbsolutePositionWAltitude) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AbsolutePositionsWAltitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AbsolutePositionsWAltitude;
extern asn_SET_OF_specifics_t asn_SPC_AbsolutePositionsWAltitude_specs_1;
extern asn_TYPE_member_t asn_MBR_AbsolutePositionsWAltitude_1[1];
extern asn_per_constraints_t asn_PER_type_AbsolutePositionsWAltitude_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AbsolutePositionWAltitude.h"

#endif	/* _AbsolutePositionsWAltitude_H_ */
#include "asn_internal.h"