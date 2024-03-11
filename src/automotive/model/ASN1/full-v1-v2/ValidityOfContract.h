/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ValidityOfContract_H_
#define	_ValidityOfContract_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "DateCompact.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ValidityOfContract */
typedef struct ValidityOfContract {
	OCTET_STRING_t	 issuerRestrictions;
	DateCompact_t	 contractExpiryDate;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ValidityOfContract_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ValidityOfContract;

#ifdef __cplusplus
}
#endif

#endif	/* _ValidityOfContract_H_ */
#include "asn_internal.h"
