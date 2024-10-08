/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AccelerationChangeIndication_H_
#define	_AccelerationChangeIndication_H_


#include "asn_application.h"

/* Including external dependencies */
#include "AccelerationChange.h"
#include "DeltaTimeTenthOfSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AccelerationChangeIndication */
typedef struct AccelerationChangeIndication {
	AccelerationChange_t	 accelOrDecel;
	DeltaTimeTenthOfSecond_t	 actionDeltaTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccelerationChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccelerationChangeIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _AccelerationChangeIndication_H_ */
#include "asn_internal.h"
