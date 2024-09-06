/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "TrailerDetails.h"

static int
memb_trailerType_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_trailerType_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_trailerType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_TrailerDetails_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerDetails, trailerType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_trailerType_constr_2, &asn_PER_memb_trailerType_constr_2,  memb_trailerType_constraint_1 },
		0, 0, /* No default value */
		"trailerType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerDetails, trailerAxles),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerAxles,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trailerAxles"
		},
};
static const ber_tlv_tag_t asn_DEF_TrailerDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrailerDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trailerType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* trailerAxles */
};
asn_SEQUENCE_specifics_t asn_SPC_TrailerDetails_specs_1 = {
	sizeof(struct TrailerDetails),
	offsetof(struct TrailerDetails, _asn_ctx),
	asn_MAP_TrailerDetails_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrailerDetails = {
	"TrailerDetails",
	"TrailerDetails",
	&asn_OP_SEQUENCE,
	asn_DEF_TrailerDetails_tags_1,
	sizeof(asn_DEF_TrailerDetails_tags_1)
		/sizeof(asn_DEF_TrailerDetails_tags_1[0]), /* 1 */
	asn_DEF_TrailerDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrailerDetails_tags_1)
		/sizeof(asn_DEF_TrailerDetails_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrailerDetails_1,
	2,	/* Elements count */
	&asn_SPC_TrailerDetails_specs_1	/* Additional specs */
};

