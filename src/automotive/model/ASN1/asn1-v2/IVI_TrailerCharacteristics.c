/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in asn1/ISO19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "IVI_TrailerCharacteristics.h"

asn_TYPE_member_t asn_MBR_IVI_TrailerCharacteristics_1[] = {
	{ ATF_POINTER, 3, offsetof(struct IVI_TrailerCharacteristics, equalTo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerCharacteristicsFixValuesList,
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
		"equalTo"
		},
	{ ATF_POINTER, 2, offsetof(struct IVI_TrailerCharacteristics, notEqualTo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerCharacteristicsFixValuesList,
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
		"notEqualTo"
		},
	{ ATF_POINTER, 1, offsetof(struct IVI_TrailerCharacteristics, ranges),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerCharacteristicsRangesList,
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
		"ranges"
		},
};
static const int asn_MAP_IVI_TrailerCharacteristics_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_IVI_TrailerCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IVI_TrailerCharacteristics_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* equalTo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* notEqualTo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ranges */
};
asn_SEQUENCE_specifics_t asn_SPC_IVI_TrailerCharacteristics_specs_1 = {
	sizeof(struct IVI_TrailerCharacteristics),
	offsetof(struct IVI_TrailerCharacteristics, _asn_ctx),
	asn_MAP_IVI_TrailerCharacteristics_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_IVI_TrailerCharacteristics_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IVI_TrailerCharacteristics = {
	"TrailerCharacteristics",
	"TrailerCharacteristics",
	&asn_OP_SEQUENCE,
	asn_DEF_IVI_TrailerCharacteristics_tags_1,
	sizeof(asn_DEF_IVI_TrailerCharacteristics_tags_1)
		/sizeof(asn_DEF_IVI_TrailerCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_IVI_TrailerCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_IVI_TrailerCharacteristics_tags_1)
		/sizeof(asn_DEF_IVI_TrailerCharacteristics_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_IVI_TrailerCharacteristics_1,
	3,	/* Elements count */
	&asn_SPC_IVI_TrailerCharacteristics_specs_1	/* Additional specs */
};
