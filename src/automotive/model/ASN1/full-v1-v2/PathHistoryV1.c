/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "PathHistoryV1.h"

static asn_oer_constraints_t asn_OER_type_PathHistoryV1_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..40)) */};
asn_per_constraints_t asn_PER_type_PathHistoryV1_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  0,  40 }	/* (SIZE(0..40)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PathHistoryV1_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PathPointV1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_PathHistoryV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_PathHistoryV1_specs_1 = {
	sizeof(struct PathHistoryV1),
	offsetof(struct PathHistoryV1, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_PathHistoryV1 = {
	"PathHistoryV1",
	"PathHistoryV1",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_PathHistoryV1_tags_1,
	sizeof(asn_DEF_PathHistoryV1_tags_1)
		/sizeof(asn_DEF_PathHistoryV1_tags_1[0]), /* 1 */
	asn_DEF_PathHistoryV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_PathHistoryV1_tags_1)
		/sizeof(asn_DEF_PathHistoryV1_tags_1[0]), /* 1 */
	{ &asn_OER_type_PathHistoryV1_constr_1, &asn_PER_type_PathHistoryV1_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_PathHistoryV1_1,
	1,	/* Single element */
	&asn_SPC_PathHistoryV1_specs_1	/* Additional specs */
};

