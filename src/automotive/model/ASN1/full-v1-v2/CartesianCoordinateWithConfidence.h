/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CartesianCoordinateWithConfidence_H_
#define	_CartesianCoordinateWithConfidence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CartesianCoordinateLarge.h"
#include "CoordinateConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CartesianCoordinateWithConfidence */
typedef struct CartesianCoordinateWithConfidence {
	CartesianCoordinateLarge_t	 value;
	CoordinateConfidence_t	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CartesianCoordinateWithConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CartesianCoordinateWithConfidence;
extern asn_SEQUENCE_specifics_t asn_SPC_CartesianCoordinateWithConfidence_specs_1;
extern asn_TYPE_member_t asn_MBR_CartesianCoordinateWithConfidence_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CartesianCoordinateWithConfidence_H_ */
#include "asn_internal.h"
