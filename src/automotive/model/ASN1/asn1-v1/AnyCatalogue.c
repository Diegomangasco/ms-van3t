/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ASN1Files/ISO_TS_19321.asn"
 * 	`asn1c -fincludes-quoted`
 */

#include "AnyCatalogue.h"

static int
memb_version_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pictogramCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_version_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..255) */,
	-1};
static asn_per_constraints_t asn_PER_memb_version_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pictogramCode_constr_4 CC_NOTUSED = {
	{ 2, 1 }	/* (0..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pictogramCode_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_value_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (0..65535) */,
	-1};
static asn_per_constraints_t asn_PER_memb_value_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AnyCatalogue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AnyCatalogue, owner),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Provider,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"owner"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnyCatalogue, version),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_version_constr_3, &asn_PER_memb_version_constr_3,  memb_version_constraint_1 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AnyCatalogue, pictogramCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pictogramCode_constr_4, &asn_PER_memb_pictogramCode_constr_4,  memb_pictogramCode_constraint_1 },
		0, 0, /* No default value */
		"pictogramCode"
		},
	{ ATF_POINTER, 3, offsetof(struct AnyCatalogue, value),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_value_constr_5, &asn_PER_memb_value_constr_5,  memb_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
	{ ATF_POINTER, 2, offsetof(struct AnyCatalogue, unit),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSCUnit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unit"
		},
	{ ATF_POINTER, 1, offsetof(struct AnyCatalogue, attributes),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ISO14823Attributes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"attributes"
		},
};
static const int asn_MAP_AnyCatalogue_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_AnyCatalogue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AnyCatalogue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* owner */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pictogramCode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* value */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* unit */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* attributes */
};
asn_SEQUENCE_specifics_t asn_SPC_AnyCatalogue_specs_1 = {
	sizeof(struct AnyCatalogue),
	offsetof(struct AnyCatalogue, _asn_ctx),
	asn_MAP_AnyCatalogue_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_AnyCatalogue_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AnyCatalogue = {
	"AnyCatalogue",
	"AnyCatalogue",
	&asn_OP_SEQUENCE,
	asn_DEF_AnyCatalogue_tags_1,
	sizeof(asn_DEF_AnyCatalogue_tags_1)
		/sizeof(asn_DEF_AnyCatalogue_tags_1[0]), /* 1 */
	asn_DEF_AnyCatalogue_tags_1,	/* Same as above */
	sizeof(asn_DEF_AnyCatalogue_tags_1)
		/sizeof(asn_DEF_AnyCatalogue_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AnyCatalogue_1,
	6,	/* Elements count */
	&asn_SPC_AnyCatalogue_specs_1	/* Additional specs */
};

