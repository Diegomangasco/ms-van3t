/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-OriginatingStationContainers"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_OriginatingRsuContainer_H_
#define	_OriginatingRsuContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MapReference;

/* OriginatingRsuContainer */
typedef struct OriginatingRsuContainer {
	struct MapReference	*mapReference;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OriginatingRsuContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OriginatingRsuContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_OriginatingRsuContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_OriginatingRsuContainer_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MapReference.h"

#endif	/* _OriginatingRsuContainer_H_ */
#include "asn_internal.h"
