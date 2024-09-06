/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "CartesianAngleV1.h"

asn_TYPE_member_t asn_MBR_CartesianAngleV1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CartesianAngleV1, value),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CartesianAngleValueV1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CartesianAngleV1, confidence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AngleConfidenceV1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"confidence"
		},
};
static const ber_tlv_tag_t asn_DEF_CartesianAngleV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CartesianAngleV1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* value */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* confidence */
};
asn_SEQUENCE_specifics_t asn_SPC_CartesianAngleV1_specs_1 = {
	sizeof(struct CartesianAngleV1),
	offsetof(struct CartesianAngleV1, _asn_ctx),
	asn_MAP_CartesianAngleV1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CartesianAngleV1 = {
	"CartesianAngleV1",
	"CartesianAngleV1",
	&asn_OP_SEQUENCE,
	asn_DEF_CartesianAngleV1_tags_1,
	sizeof(asn_DEF_CartesianAngleV1_tags_1)
		/sizeof(asn_DEF_CartesianAngleV1_tags_1[0]), /* 1 */
	asn_DEF_CartesianAngleV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_CartesianAngleV1_tags_1)
		/sizeof(asn_DEF_CartesianAngleV1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CartesianAngleV1_1,
	2,	/* Elements count */
	&asn_SPC_CartesianAngleV1_specs_1	/* Additional specs */
};

