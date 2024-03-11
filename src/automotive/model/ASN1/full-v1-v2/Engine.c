/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "Engine.h"

static asn_TYPE_member_t asn_MBR_Engine_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Engine, engineCapacity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"engineCapacity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Engine, enginePower),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enginePower"
		},
};
static const ber_tlv_tag_t asn_DEF_Engine_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Engine_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* engineCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* enginePower */
};
static asn_SEQUENCE_specifics_t asn_SPC_Engine_specs_1 = {
	sizeof(struct Engine),
	offsetof(struct Engine, _asn_ctx),
	asn_MAP_Engine_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Engine = {
	"Engine",
	"Engine",
	&asn_OP_SEQUENCE,
	asn_DEF_Engine_tags_1,
	sizeof(asn_DEF_Engine_tags_1)
		/sizeof(asn_DEF_Engine_tags_1[0]), /* 1 */
	asn_DEF_Engine_tags_1,	/* Same as above */
	sizeof(asn_DEF_Engine_tags_1)
		/sizeof(asn_DEF_Engine_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Engine_1,
	2,	/* Elements count */
	&asn_SPC_Engine_specs_1	/* Additional specs */
};

