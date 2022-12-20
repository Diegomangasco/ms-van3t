/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "/home/carlosrisma/IVIM ASN1 files/ETSI DENM v1.3.1.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_ManagementContainer_H_
#define	_ManagementContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ActionID.h"
#include "TimestampIts.h"
#include "Termination.h"
#include "ReferencePosition.h"
#include "RelevanceDistance.h"
#include "RelevanceTrafficDirection.h"
#include "ValidityDuration.h"
#include "TransmissionInterval.h"
#include "StationType.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ManagementContainer */
typedef struct ManagementContainer {
	ActionID_t	 actionID;
	TimestampIts_t	 detectionTime;
	TimestampIts_t	 referenceTime;
	Termination_t	*termination	/* OPTIONAL */;
	ReferencePosition_t	 eventPosition;
	RelevanceDistance_t	*relevanceDistance	/* OPTIONAL */;
	RelevanceTrafficDirection_t	*relevanceTrafficDirection	/* OPTIONAL */;
	ValidityDuration_t	*validityDuration	/* DEFAULT 600 */;
	TransmissionInterval_t	*transmissionInterval	/* OPTIONAL */;
	StationType_t	 stationType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_ManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_ManagementContainer_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _ManagementContainer_H_ */
#include "asn_internal.h"
