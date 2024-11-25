/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MCM-PDU-Descriptions"
 * 	found in "MCM-base.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ManoeuvreCoordination_H_
#define	_ManoeuvreCoordination_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GenerationDeltaTime.h"
#include "McmContainer.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ManoeuvreCoordination */
typedef struct ManoeuvreCoordination {
	GenerationDeltaTime_t	 generationDeltaTime;
	McmContainer_t	 mcmContainer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ManoeuvreCoordination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ManoeuvreCoordination;
extern asn_SEQUENCE_specifics_t asn_SPC_ManoeuvreCoordination_specs_1;
extern asn_TYPE_member_t asn_MBR_ManoeuvreCoordination_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ManoeuvreCoordination_H_ */
#include "asn_internal.h"