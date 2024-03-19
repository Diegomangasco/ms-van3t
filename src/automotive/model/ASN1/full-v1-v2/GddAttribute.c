/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "GDD"
 * 	found in "/mnt/EVO/ASN1-C-ITS/GDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "GddAttribute.h"

static asn_oer_constraints_t asn_OER_type_GddAttribute_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_GddAttribute_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GddAttribute_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.dtm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_applicablePeriod,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dtm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.edt),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_exemptedApplicablePeriod,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"edt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.dfl),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_directionalFlowOfLane,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dfl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.ved),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_applicableVehicleDimensions,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ved"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.spe),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_speedLimits,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spe"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.roi),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_rateOfIncline,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"roi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.dbv),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_distanceBetweenVehicles,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dbv"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.ddd),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_destinationInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ddd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.set),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_section,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"set"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GddAttribute, choice.nol),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_numberOfLane,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nol"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GddAttribute_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dtm */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* edt */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dfl */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ved */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* spe */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* roi */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dbv */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ddd */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* set */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* nol */
};
asn_CHOICE_specifics_t asn_SPC_GddAttribute_specs_1 = {
	sizeof(struct GddAttribute),
	offsetof(struct GddAttribute, _asn_ctx),
	offsetof(struct GddAttribute, present),
	sizeof(((struct GddAttribute *)0)->present),
	asn_MAP_GddAttribute_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GddAttribute = {
	"GddAttribute",
	"GddAttribute",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_GddAttribute_constr_1, &asn_PER_type_GddAttribute_constr_1, CHOICE_constraint },
	asn_MBR_GddAttribute_1,
	10,	/* Elements count */
	&asn_SPC_GddAttribute_specs_1	/* Additional specs */
};
