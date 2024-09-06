/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CartesianPosition3d_H_
#define	_CartesianPosition3d_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CartesianCoordinate.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CartesianPosition3d */
typedef struct CartesianPosition3d {
	CartesianCoordinate_t	 xCoordinate;
	CartesianCoordinate_t	 yCoordinate;
	CartesianCoordinate_t	*zCoordinate;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CartesianPosition3d_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CartesianPosition3d;
extern asn_SEQUENCE_specifics_t asn_SPC_CartesianPosition3d_specs_1;
extern asn_TYPE_member_t asn_MBR_CartesianPosition3d_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CartesianPosition3d_H_ */
#include "asn_internal.h"
