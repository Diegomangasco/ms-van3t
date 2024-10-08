/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_LateralAcceleration_H_
#define	_LateralAcceleration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LateralAccelerationValue.h"
#include "AccelerationConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LateralAcceleration */
typedef struct LateralAcceleration {
	LateralAccelerationValue_t	 lateralAccelerationValue;
	AccelerationConfidence_t	 lateralAccelerationConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LateralAcceleration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LateralAcceleration;

#ifdef __cplusplus
}
#endif

#endif	/* _LateralAcceleration_H_ */
#include "asn_internal.h"
