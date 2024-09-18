/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_EuVehicleCategoryCode_H_
#define	_EuVehicleCategoryCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EuVehicleCategoryL.h"
#include "EuVehicleCategoryM.h"
#include "EuVehicleCategoryN.h"
#include "EuVehicleCategoryO.h"
#include "NULL.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EuVehicleCategoryCode_PR {
	EuVehicleCategoryCode_PR_NOTHING,	/* No components present */
	EuVehicleCategoryCode_PR_euVehicleCategoryL,
	EuVehicleCategoryCode_PR_euVehicleCategoryM,
	EuVehicleCategoryCode_PR_euVehicleCategoryN,
	EuVehicleCategoryCode_PR_euVehicleCategoryO,
	EuVehicleCategoryCode_PR_euVehicleCategoryT,
	EuVehicleCategoryCode_PR_euVehicleCategoryG
} EuVehicleCategoryCode_PR;

/* EuVehicleCategoryCode */
typedef struct EuVehicleCategoryCode {
	EuVehicleCategoryCode_PR present;
	union EuVehicleCategoryCode_u {
		EuVehicleCategoryL_t	 euVehicleCategoryL;
		EuVehicleCategoryM_t	 euVehicleCategoryM;
		EuVehicleCategoryN_t	 euVehicleCategoryN;
		EuVehicleCategoryO_t	 euVehicleCategoryO;
		NULL_t	 euVehicleCategoryT;
		NULL_t	 euVehicleCategoryG;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EuVehicleCategoryCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EuVehicleCategoryCode;

#ifdef __cplusplus
}
#endif

#endif	/* _EuVehicleCategoryCode_H_ */
#include "asn_internal.h"
