/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ManagementContainerCPM_H_
#define	_ManagementContainerCPM_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TimestampIts.h"
#include "ReferencePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MessageSegmentationInfo;
struct MessageRateRange;

/* ManagementContainerCPM */
typedef struct ManagementContainerCPM {
	TimestampIts_t	 referenceTime;
	ReferencePosition_t	 referencePosition;
	struct MessageSegmentationInfo	*segmentationInfo;	/* OPTIONAL */
	struct MessageRateRange	*messageRateRange;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ManagementContainerCPM_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ManagementContainerCPM;
extern asn_SEQUENCE_specifics_t asn_SPC_ManagementContainerCPM_specs_1;
extern asn_TYPE_member_t asn_MBR_ManagementContainerCPM_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MessageSegmentationInfo.h"
#include "MessageRateRange.h"

#endif	/* _ManagementContainerCPM_H_ */
#include "asn_internal.h"