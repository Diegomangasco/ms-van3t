/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "CpmManagementContainerV1.h"

asn_TYPE_member_t asn_MBR_CpmManagementContainerV1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CpmManagementContainerV1, stationType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StationType,
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
		"stationType"
		},
	{ ATF_POINTER, 1, offsetof(struct CpmManagementContainerV1, perceivedObjectContainerSegmentInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PerceivedObjectContainerSegmentInfoV1,
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
		"perceivedObjectContainerSegmentInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CpmManagementContainerV1, referencePosition),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferencePosition,
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
		"referencePosition"
		},
};
static const int asn_MAP_CpmManagementContainerV1_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CpmManagementContainerV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CpmManagementContainerV1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* stationType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* perceivedObjectContainerSegmentInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* referencePosition */
};
asn_SEQUENCE_specifics_t asn_SPC_CpmManagementContainerV1_specs_1 = {
	sizeof(struct CpmManagementContainerV1),
	offsetof(struct CpmManagementContainerV1, _asn_ctx),
	asn_MAP_CpmManagementContainerV1_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CpmManagementContainerV1_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CpmManagementContainerV1 = {
	"CpmManagementContainerV1",
	"CpmManagementContainerV1",
	&asn_OP_SEQUENCE,
	asn_DEF_CpmManagementContainerV1_tags_1,
	sizeof(asn_DEF_CpmManagementContainerV1_tags_1)
		/sizeof(asn_DEF_CpmManagementContainerV1_tags_1[0]), /* 1 */
	asn_DEF_CpmManagementContainerV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_CpmManagementContainerV1_tags_1)
		/sizeof(asn_DEF_CpmManagementContainerV1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CpmManagementContainerV1_1,
	3,	/* Elements count */
	&asn_SPC_CpmManagementContainerV1_specs_1	/* Additional specs */
};

