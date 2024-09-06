/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_EventPointV1_H_
#define	_EventPointV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DeltaReferencePositionV1.h"
#include "PathDeltaTimeV1.h"
#include "InformationQualityV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EventPointV1 */
typedef struct EventPointV1 {
	DeltaReferencePositionV1_t	 eventPosition;
	PathDeltaTimeV1_t	*eventDeltaTime	/* OPTIONAL */;
	InformationQualityV1_t	 informationQuality;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventPointV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventPointV1;
extern asn_SEQUENCE_specifics_t asn_SPC_EventPointV1_specs_1;
extern asn_TYPE_member_t asn_MBR_EventPointV1_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EventPointV1_H_ */
#include "asn_internal.h"
