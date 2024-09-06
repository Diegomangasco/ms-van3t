/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ClusterJoinInfo_H_
#define	_ClusterJoinInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Identifier1B.h"
#include "DeltaTimeQuarterSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ClusterJoinInfo */
typedef struct ClusterJoinInfo {
	Identifier1B_t	 clusterId;
	DeltaTimeQuarterSecond_t	 joinTime;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ClusterJoinInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClusterJoinInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _ClusterJoinInfo_H_ */
#include "asn_internal.h"
