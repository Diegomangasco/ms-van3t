/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "PaymentMeansBalance.h"

/*
 * This type is implemented using SignedValue,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PaymentMeansBalance_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_PaymentMeansBalance_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_descriptor_t asn_DEF_PaymentMeansBalance = {
	"PaymentMeansBalance",
	"PaymentMeansBalance",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, CHOICE_constraint },
	asn_MBR_SignedValue_1,
	2,	/* Elements count */
	&asn_SPC_SignedValue_specs_1	/* Additional specs */
};

