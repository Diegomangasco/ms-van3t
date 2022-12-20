/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/ISO-TS-19091.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_RTCMcorrections_H_
#define	_RTCMcorrections_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MsgCount.h"
#include "RTCM-Revision.h"
#include "MinuteOfTheYear.h"
#include "RTCMmessageList.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVector;
struct RTCMheader;
struct RegionalExtension;

/* RTCMcorrections */
typedef struct RTCMcorrections {
	MsgCount_t	 msgCnt;
	RTCM_Revision_t	 rev;
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	struct FullPositionVector	*anchorPoint	/* OPTIONAL */;
	struct RTCMheader	*rtcmHeader	/* OPTIONAL */;
	RTCMmessageList_t	 msgs;
	struct RTCMcorrections__regional {
		A_SEQUENCE_OF(struct RegionalExtension) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RTCMcorrections_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTCMcorrections;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FullPositionVector.h"
#include "RTCMheader.h"
#include "RegionalExtension.h"

#endif	/* _RTCMcorrections_H_ */
#include "asn_internal.h"
