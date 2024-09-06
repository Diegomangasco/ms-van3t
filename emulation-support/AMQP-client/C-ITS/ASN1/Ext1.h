/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_Ext1_H_
#define	_Ext1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "Ext2.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ext1_PR {
	Ext1_PR_NOTHING,	/* No components present */
	Ext1_PR_content,
	Ext1_PR_extension
} Ext1_PR;

/* Ext1 */
typedef struct Ext1 {
	Ext1_PR present;
	union Ext1_u {
		long	 content;
		Ext2_t	 extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ext1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ext1;
extern asn_CHOICE_specifics_t asn_SPC_Ext1_specs_1;
extern asn_TYPE_member_t asn_MBR_Ext1_1[2];
extern asn_per_constraints_t asn_PER_type_Ext1_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ext1_H_ */
#include "asn_internal.h"
