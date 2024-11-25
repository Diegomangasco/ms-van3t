/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "CollectivePerceptionMessageV1.h"

asn_TYPE_member_t asn_MBR_CollectivePerceptionMessageV1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CollectivePerceptionMessageV1, generationDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GenerationDeltaTime,
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
		"generationDeltaTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CollectivePerceptionMessageV1, cpmParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CpmParametersV1,
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
		"cpmParameters"
		},
};
static const ber_tlv_tag_t asn_DEF_CollectivePerceptionMessageV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CollectivePerceptionMessageV1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* generationDeltaTime */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cpmParameters */
};
asn_SEQUENCE_specifics_t asn_SPC_CollectivePerceptionMessageV1_specs_1 = {
	sizeof(struct CollectivePerceptionMessageV1),
	offsetof(struct CollectivePerceptionMessageV1, _asn_ctx),
	asn_MAP_CollectivePerceptionMessageV1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CollectivePerceptionMessageV1 = {
	"CollectivePerceptionMessageV1",
	"CollectivePerceptionMessageV1",
	&asn_OP_SEQUENCE,
	asn_DEF_CollectivePerceptionMessageV1_tags_1,
	sizeof(asn_DEF_CollectivePerceptionMessageV1_tags_1)
		/sizeof(asn_DEF_CollectivePerceptionMessageV1_tags_1[0]), /* 1 */
	asn_DEF_CollectivePerceptionMessageV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_CollectivePerceptionMessageV1_tags_1)
		/sizeof(asn_DEF_CollectivePerceptionMessageV1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CollectivePerceptionMessageV1_1,
	2,	/* Elements count */
	&asn_SPC_CollectivePerceptionMessageV1_specs_1	/* Additional specs */
};
