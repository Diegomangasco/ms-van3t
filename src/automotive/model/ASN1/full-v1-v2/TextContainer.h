/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/mnt/EVO/ASN1-C-ITS/IVI-payload.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_TextContainer_H_
#define	_TextContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TcPart;

/* TextContainer */
typedef struct TextContainer {
	A_SEQUENCE_OF(struct TcPart) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TextContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TextContainer;
extern asn_SET_OF_specifics_t asn_SPC_TextContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_TextContainer_1[1];
extern asn_per_constraints_t asn_PER_type_TextContainer_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TcPart.h"

#endif	/* _TextContainer_H_ */
#include "asn_internal.h"
