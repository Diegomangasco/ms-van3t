/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RadialShapesList_H_
#define	_RadialShapesList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadialShapeDetails;

/* RadialShapesList */
typedef struct RadialShapesList {
	A_SEQUENCE_OF(struct RadialShapeDetails) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadialShapesList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadialShapesList;
extern asn_SET_OF_specifics_t asn_SPC_RadialShapesList_specs_1;
extern asn_TYPE_member_t asn_MBR_RadialShapesList_1[1];
extern asn_per_constraints_t asn_PER_type_RadialShapesList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadialShapeDetails.h"

#endif	/* _RadialShapesList_H_ */
#include "asn_internal.h"
